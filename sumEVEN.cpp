#include<iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
   int i=0;
   int sum=0;
   while(i<=n){
    sum=sum+i;    
    i+=2;
   }
    cout<<sum;
    
return 0;
}