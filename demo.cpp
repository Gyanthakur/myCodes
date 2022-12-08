#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}





/*{
    int n;
    cout<<"enter the number:";
    cin>>n;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            cout<<"not prime"<<endl;
            break;
        }
        else{
            cout<<"prime"<<endl;
            break;
        }
    }
    return 0;
}*/
