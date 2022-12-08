#include<iostream>
using namespace std;
int firstOCC(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
        ans = mid;
        end = mid - 1;

        }
        else if(key<arr[mid]){
            end = end -1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int lastOCC(int arr[],int n,int key){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;
    while(start<=end){
        if(arr[mid]==key){
        ans = mid;
        start = mid + 1;

        }
        else if(key<arr[mid]){
            end = end -1;
        }
        else if(key>arr[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    int grr[7] = {1,2,3,2,1,5,4};
    cout<<"first occurrenc of  2 : index is : "<<firstOCC(grr,7,2)<<endl;
    cout<<"last occurrenc of  2 : index is : "<<lastOCC(grr,7,2)<<endl;

return 0;
}