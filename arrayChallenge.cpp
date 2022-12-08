
// problem = Given an arrray a[] of size n. For every i from 0 to n-1 output max(a[0],a[1],...a[i]).
// #include<iostream>
// using namespace std;
// int main(){
//     int mx = -1999999; 
//     int n;
//     cout<<"enter the number";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     for(int i=0;i<n;i++){
//         mx = max(mx,a[i]);
//         cout<<mx<<endl;
//     }
// return 0;
// }


// problem 2:= 

// subarrray = continuous part of array 
// Number of subarrays of an array with n elements = nC2 +n = n*(n+2)/2.

//subsequence = A subsequnce is a sequence that can be derived an array by selecting zero or more elements,without changing the order of the remaining elements.
// number of subsequences of an array with n elements = 2^n.

// QUOTE ::: every subarray is a subsequence but every subsequence is not subarray.

// sum of all subarrays
//problem : Given an array a[] of size n. Output sum of each subarray of the given array.

//code......................................................................................................................................................................................................................................................................................................
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter number";
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }
//     int current = 0;
//     for(int i=0;i<n;i++){
//         current=0;
//         for(int j=i;j<n;j++){
//             current+=a[j];
//             cout<< current << endl;
//         }
//     }

// return 0;
// }


// arithmetic array 

//problem 3;= An arithmetic array is an array that contains at least two integers and the difference between consecutive integers are equal. For example,[9,19],[3,3,3],[9,7,5,3] are arithmetic arrays, while [1,3,3,7],[2,1,2,], and [1,2,4] are not arithmetic arrays.

//Saraswati has  an array of N non-negative integers . The i-th integers of the array is A . She wants to choose a continuous arithmetic subarray from her array that has the maximum length . please hel to determine the length of the longest contiguous arithmetic subarray.

//code********************************************************************************************************************************************************************************************************************************************************************************************************
#include<iostream>
using namespace std;
int main(){
    //pd = previous common difference
    // current arithmetic subarray length (curr)
    //max arithmetic Subarray length (ans)
     int n;
    cout<<"enter number";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans = 2;
    int pd = a[1]- a[0];
    int j=2;
    int curr = 2;
    while (j<n)
    {
        if(pd == a[j]-a[j-1])
        {
            curr++;
        }
        else{
            pd= a[j]-a[j-1];
            curr = 2;

        }
        ans = max(ans,curr);
        j++;
    }
    cout<<ans<<endl;

return 0;
}
