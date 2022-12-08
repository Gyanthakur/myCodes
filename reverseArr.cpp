#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rotatearr(int arr[],int n,int k){
   int start = 0;
   int arr1[n] = {0};
   for(int i = k; i <n;i++){
       arr1[start] = arr[i];
       start++;
   }
   for(int i = 0; i < k; i++){
       arr1[n-k+i] = arr[i];
   }
   for(int i = 0; i < n; i++){
       cout << arr1[i] << " ";
   }
}

int main() {
   //Write your code here
   int n;
   cin >> n;
   int arr[n] = {0};
   for(int i = 0; i < n; i++){
       cin >> arr[i];
   }
   int k;
   cin >> k;
   rotatearr(arr,n,k);
   
   

   return 0;
}