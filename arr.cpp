#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr [n] = {1,2,3,4,5};
    int a = arr[n-1];
    for(int i=n-1;i>=0;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[0]=a;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
return 0;
}