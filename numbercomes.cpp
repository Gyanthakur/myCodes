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
    int grr[10] = {1,2,3,2,1,2,2,2,5,4};
    int left = firstOCC(grr,10,2);
    int right = lastOCC(grr,10,2);
    cout<<"first occurrenc of  2 : index is : "<<left<<endl;
    cout<<"last occurrenc of  2 : index is : "<<right<<endl;
    cout<<" 2 present in "<<right-left<<" "<<"times"<<endl;

return 0;
}