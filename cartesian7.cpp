#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<endl;
    int set1[3]={1,3,2};
    int set2[4]={2,3,4,5};
    cout<<"cartesian product of given two set is  : ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<"("<<set1[i]<<","<<set2[j]<<")"<<",";
        }
    }
    cout<<endl;
    cout<<endl;
return 0;
}