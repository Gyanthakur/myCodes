 #include<bits/stdc++.h>
 using namespace std;
//  int getmin(int num[],int n){
//     int min=INT16_MAX;
//     for(int i=0;i<n;i++){
//         if(num[i]<min){
//             min=num[i];
//         }
//     }
//     return min;
//  }
//  int getmax(int num[],int n){
//     int max=INT16_MIN;
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max=num[i];
//         }
//     }
//     return max;
//  }


int getmin(int num[],int n){
    int mini=INT16_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,num[i]);
    }
    return mini;
}
int getmax(int num[],int n){
    int maxi=INT16_MIN;
    for(int i=0;i<n;i++){
        maxi=max(maxi,num[i]);
    }
    return maxi;
}
 int main(){
    int size;
    cin>>size;
    int num[100];
    for(int j =0;j<size;j++){
        cin>>num[j];
    }
    cout<<"MAXIMUM VALUE IS "<<getmax(num,size)<<endl;
    cout<<"MINIMUM VALUE IS "<<getmin(num,size)<<endl;
 
 return 0;
 }