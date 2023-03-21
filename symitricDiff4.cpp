#include<bits/stdc++.h>
using namespace std;
int main(){
    int set1[6] = {5,8,13,44,66,77};
    int set2[8] = {20,44,47,50,66,65,77,89};
    vector<int>v(10);
    auto it = set_symmetric_difference(set1,set1+6,set2,set2+8,v.begin());
    v.resize(it-v.begin());
    cout<<"symmetric difference is : "<<endl;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
return 0;
}