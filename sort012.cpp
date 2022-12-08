#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    // int n;
    // cin>>n;
    // multiset<int>m;
    // for(int i=0;i<n;i++)
    // {
    //     int x;
    //     cin>>x;
    //     m.insert(x);

    // }
    // for(auto value:m){
    //     cout<<value<<" ";
    // }

    int n;
    cin>>n;
    int ans;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int y;
        cin>>y;
        v.push_back(y);
    }
    sort(v.begin(),v.end());
    //cout<<ans<<" ";
    for(auto it:v)
    {
        cout<<it<<" ";
    }

return 0;
}