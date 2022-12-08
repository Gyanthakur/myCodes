#include<bits/stdc++.h>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=s+(e-s)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int *first = new int[len1];
    int *second = new int[len2];
    // coppying value 
    int mainArrayIndex = s;
    for(int i=0;i<len1;i++)
    {
        first[i]=arr[mainArrayIndex++];
    }
    for(int i=0;i<len2;i++)
    {
        second[i]=arr[mainArrayIndex++];
    }

    // mersge two sorted array 
    int index1=0;
    int index2=0;
    mainArrayIndex = s;
    while(index1<len1&&index2<len2)
    {
        if(first[index1]<second[index2])
        {
            arr[mainArrayIndex++]=first[index1++];
        }
        else{
            arr[mainArrayIndex++]=second[index2++];
        }
    }
    while(index1<len1)
    {
        arr[mainArrayIndex++]=first[index1++];
    }
    while(index2<len2)
    {
        arr[mainArrayIndex++]=second[index2++];
    }
    delete [] first;
    delete [] second;
}
void mergeSort(int *arr,int s,int e)
{
    if(s>=e)
    return ;
    int mid = s+ (e-s)/2;
    // left part
    mergeSort(arr,s,mid);
    // right part
    mergeSort(arr,mid+1,e);
    // merge two sort arry 
    merge(arr,s,e);
}
int main(){
    int arr[16]={3,43,54,12,64,843,65,98,71,67,3,2,1,12,32,3214};
    int n=16;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}