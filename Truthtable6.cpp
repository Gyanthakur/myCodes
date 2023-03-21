#include<bits/stdc++.h>
using namespace std;
int main(){
// wap to display the boolean truth table for and or not 
    cout<<"Truth table For AND OR & NOT : "<<endl;
    cout<< "A  B  AND OR NOT(A) NOT(B) " <<endl;
    for(int i=0;i<=1;i++)
    {
        for(int j=0;j<=1;j++)
        {
            cout<<i<<"  "<<j<<"   "<<(i & j)<<"   "<<(i|j)<<"   "<<(!i)<<"     "<<(!j)<<endl;
        }
    } 
return 0;
}

