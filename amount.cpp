#include<iostream>
using namespace std;
int main(){
    int n;
    int a=1350;
    cin>>n;
    //total amount is 1330 then yuo find the how many number of notes 100,50,20,1
    switch(n){
        case 100:
       
        cout<<"rupees of 100 notes is "<<a/100<<endl;
            //  break;
        case 50:cout<<"rupees of 50 notes is "<<a/50<<endl;
            // break;

        case 20:cout<<"rupees of 20 notes is "<<a/20<<endl;
            // break;
        case 1:cout<<"rupees of 1 notes is "<<a/1<<endl;
            break;
            default:cout<<"no found"<<endl;
    }
return 0;
}