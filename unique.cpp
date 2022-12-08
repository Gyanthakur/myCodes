#include<bits/stdc++.h>
using namespace std;
int findunique(int arr[], int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    // int n;
    int arr[6]={1,2,1,2,6,7};
    
//    int ans=0;
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    } 
   int found=findunique(arr,5);
//    for(int i=0;i<n;i++){
//     cout<<arr[i];
//    } 
cout<<found;

return 0;
}