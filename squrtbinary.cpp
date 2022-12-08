#include<bits/stdc++.h>
using namespace std;
long long int sqrtInteger(int n)
{
    int s = 0;
    int e = n;
    int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s<=e)
    {
        long long int square = mid*mid;
        if(square==n)
        {
            return mid;
        }
        if(square<n)
        {
            // ans = mid;
            s = mid + 1;
        }
        if(square>n)
        {
            // ans = mid;
            e = mid - 1;
        }
        mid = s + ( e - s ) / 2 ;
    }
    return ans;
}
double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;
    for(int i=0;i<precision;i++)
    {
        factor = factor/10;
        for(double j=ans;j*j<n;j=j+factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int tempsol = sqrtInteger(n);
    cout<<n<<" "<<"square root value is "<<morePrecision(n,3,tempsol)<<endl;
    
return 0;
}