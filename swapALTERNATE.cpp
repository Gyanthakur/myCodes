#include<bits/stdc++.h>
using namespace std;
void revers(int arr[],int n){
    // int start=0;
    // int second=1;
    // while(start<second){
    //     swap(arr[start],arr[second]);
    //     start++;
    //     // second--;
    // }
    for(int i=0;i<n-1;i=i+2)
    {
        swap(arr[i],arr[i+1]);
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