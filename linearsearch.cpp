#include<iostream>
using namespace std;
bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[12]={1,2,33,187,34,11,3,55,6,22,44,62};
    int key;
    cout<<"enter the key which do you want to search"<<endl;
    cin>>key;
    bool found = search(arr,12,key);
    if(found){
        cout<<" KEY IS PRESENT "<<endl;
    }
    else{
        cout<<" KEY IS NOT PRASENT "<<endl;
    }

return 0;
}



// #include<iostream>
// using namespace std;
// bool search(int arr[],int n, int key){
//     for(int i=0;i<n;i++){
//         if(arr[i]==key){
//             return 1;
//         }
//     }
//     return 0;
// }
// int void(){
//     int arr[10]={1,2,3,4,5,6,7,8,9,11};
//     cout<<"enter key"<<endl;
//     int key;
//     cin>>key;
//     bool found=search(arr,10,key);
//     if(found){
//         cout<<"key is present"<<endl;
//     }
//     else{
//         cout<<"key is not prasent"<<endl;
//     }


// return 0;
// }