#include<iostream>
#include<cmath>
using namespace std;

int squaredCubic(long long int n)
{
   long long int i;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" "<<pow(i,2)<<" "<<pow(i,3)<<endl;
    }
}

//driver code
int main()
{
   long long int n;
    cin>>n;
    squaredCubic(n);
}
