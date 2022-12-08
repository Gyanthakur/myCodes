#include<bits/stdc++.h>
using namespace std;
void revers(int arr[],int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}
void printARRAY(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[8]={1,2,3,4,5,6,7,8};
    printARRAY(arr,5);
    printARRAY(brr,8);
    revers(arr,5);
    revers(brr,8);

return 0;
}