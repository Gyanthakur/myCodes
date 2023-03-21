#include<bits/stdc++.h>
using namespace std;
int main()
// write a program to find the union of given two set 
{
    int set1[6]={1,2,3,6,8,11};
    int set2[5]={1,3,5,7,9};
    set<int>s;
    cout<<"first array is : ";
    for(int i=0;i<6;i++)
    {
        s.insert(set1[i]);
        cout<<set1[i]<<" ";
    }
    cout<<"\nSecond array is : ";
    for(int i=0;i<5;i++)
    {
        s.insert(set2[i]);
        cout<<set2[i]<<" ";
    }
    cout<<"\nUnion of first and second is : ";
    for(auto it : s)
    {
        cout<<it<<" ";
    }

    return 0;
}