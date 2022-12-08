#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    int ans=0;
    vector<int> v;
    while(n!=0){
        int bit = n&1;
        v.push_back(bit);
        // ans=(bit * pow(10,i))+ans;
        
        n=n>>1;
        i++;
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    cout<<v[i];
return 0;
}