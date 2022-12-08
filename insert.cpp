#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node * next;
    // constructor 
    Node (int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
// function for printing the list 
void print(Node * & head)
{
    Node * temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node * & head, int d)
{
    // create a new node 
    Node * temp = new Node(d);
    temp -> next = head;
    head = temp;
}
void insertAtTail(Node * & tail ,int d)
{
    Node * temp = new Node(d);
    tail -> next = temp;
    // temp->next=NULL;
    tail = temp;
}

// insertion at position 
void insertAtPos(Node * head, int position , int d)
{
    Node * temp = head;
    int count = 1;
    while(count<position)
    {
        temp = temp -> next;
        count++;
    }
    Node * nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}



















Node * findMid(Node * head)
{
    Node * slow = head;
    Node * fast = head -> next;
    while(fast != NULL && fast -> next != NULL)
    {
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;

}
Node * merge(Node * left, Node * right )
{
    int d;
    if(left == NULL)
    return right;
    if(right == NULL)
    return left;
    Node * ans = new Node(d);
    Node * temp = ans;
    while(left != NULL && right != NULL)
    {
        if(left->data<right->data)
        {
            temp->next=left;
            temp=left;
            left=left->next;
        }
        else
        {
            temp->next=right;
            temp=right;
            right=right->next;
        }

    }
    while(left != NULL)
    {
        temp->next=left;
        temp=left;
        left=left->next;
    }
    while(right != NULL)
    {
        temp->next=right;
        temp=right;
        right=right->next;
    }
    ans=ans->next;
    return ans;
}
Node * mergeSort(Node * head)
{
    if(head==NULL&&head->next==NULL)
    {
        return head;
    }
    Node * mid = findMid(head);
    Node * left = head;
    Node * right = mid -> next;
    mid -> next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    Node * result = merge(left,right);
    return result;
}
int main()
{
    Node * node1 = new Node(1);
    Node * node2 = new Node(67);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node * head = node1;
    Node * tail = node2;
    print(head);
    insertAtHead(head,2);
    print(head);
    insertAtHead(head,3);
    print(head);
    insertAtHead(head,4);
    insertAtHead(head,4);
    insertAtHead(head,4);
    insertAtHead(head,4);
    insertAtHead(head,4);
    print(head);
    insertAtTail(tail,5);
    print(tail);
    insertAtTail(tail,5);
    print(tail);
    insertAtTail(tail,6);
    print(tail);
    insertAtTail(tail,7);
    print(head);

    insertAtPos(head,3,34);
    print(head);
    insertAtPos(tail,3,35);
    print(tail);
    mergeSort(head);
    print(head);
return 0;
}