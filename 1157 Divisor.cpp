#include<iostream>
using namespace std;

void divisors(int n)
{
    for (int i=1;i<=n;i++)
    {
        if(n%i==0)
            cout<<i<<endl;
    }
}

//driver code
int main()
{
    int n;
    cin>>n;
    divisors(n);
}
