// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int s=0;
//         int e=arr.size()-1;
//         int mid = s+(e-s)/2;
//         while(s<e){
//             if(arr[mid]<arr[mid+1]){
//                 s=mid+1;
//             }
//             else{
//                 e=mid;
//             }
//             mid = s+(e-s)/2;
//         }
//         return s;
//     }
// };


// Your input[0,1,0]
// Output 1
// Expected 1



#include<iostream>
using namespace std;
int PeakIndexMountainArr(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end - start)/2;
    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = start+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;

    }
    return start;
}
int main(){
    int arr[9] = {1,2,3,4,5,12,34,2,1};
    cout<<"index of peak element is "<<PeakIndexMountainArr(arr,9);
return 0;
}