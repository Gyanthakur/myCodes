#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>nums,vector<int>output,int index,vector<vector<int>>& ans)
{
    // base case 
    if(index>=nums.size())
    {
        ans.push_back(output);
        return;
    }
    // excluding case 
    solve(nums,output,index+1,ans);
    // including case 
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
    

}
vector<vector<int>>subsets(vector<int> & nums)
{
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    solve(nums,output,index,ans);
    return ans;
}
int main(){
    
    vector<int>nums;
    // nums[4]={1,2,3,4};
    subsets(nums);


return 0;
}