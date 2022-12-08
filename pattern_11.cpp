#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // a b c 
    // d e f 
    // g h i 
    // j k l 
    int i=1;
    char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}