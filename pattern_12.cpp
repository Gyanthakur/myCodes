#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // a b c 
    // b c d 
    // c d e 
    
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+i+j-1-1;
            cout<<ch<<" ";
            ch++;
            j++;
        }
        cout<<endl;
        i++;
    }
return 0;
}