#include<iostream>
using namespace std;
int simpleFactorial(int n)
{
int    mul = 1;
    for(int i=n;i>0;i--)
        mul = mul*i;
    cout<<mul<<endl;
}
//driver code
int main()
{
    int n;
    cin>>n;
    simpleFactorial(n);
}

