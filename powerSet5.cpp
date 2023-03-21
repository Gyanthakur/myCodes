
#include <bits/stdc++.h>
using namespace std;
 
void findPowerSet(char* s, vector<char> &res, int n){
        if (n == 0) {
            for (auto i: res)
              cout << i;
            cout << "\n";
            return;
             
        }
         res.push_back(s[n - 1]);
         findPowerSet(s, res, n - 1);
         res.pop_back();                   
         findPowerSet(s, res, n - 1);
    }
     
void printPowerSet(char* s, int n){
    vector<char> ans;
    findPowerSet(s, ans, n);
}
 
 
int main()
{
    char set[] = { 'g', 'p', 's' };
    printPowerSet(set, 3);
    return 0;
}