#include<iostream>
using namespace std;
int AP(int n){

    //find nth term of this (3*n+7) a.p series
    int a=1;
    a=a*(3*n+7);
    return a;

}
int main(){
    int n;
    cin>>n;
    int ans =AP(n);
    cout<<"answer is "<<ans<<endl;

return 0;
}