#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
void linkedListtraversal(struct Node *ptr)
{
    struct Node *p=ptr;
    while(p!=NULL)
    {
        cout<<"\n ELEMENT "<<p->data;
        p = p->next;
    }
}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    //ALLOCATE MEMORY FOR NODES IN THE LINKED  LIST IN HEAP
    head=new  Node;
    second=new Node;
    third=new Node;
    fourth=new Node;
   
   

   // Link first and second nodes
   head->data = 7;
   head->next = second;

   second->data=6;
   second->next=third;

   // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
 
    linkedListtraversal(head);
    return 0;

}