#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[7]={1,9,3,5,7};
    for(int i=0;i<5;i++){
        for(int j=0;j<7;j++){
            if(arr[i]==brr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }

return 0;
}