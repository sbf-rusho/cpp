#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void oddSum(int a,int b)
{
    int i;
    int sum=0;
    for(i=min(a,b)+1;i<max(a,b);i++)
    {
        if(i%2!=0)
            sum=sum+i;
    }
    cout<<sum<<endl;
}

//driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        oddSum(a,b);
    }
}
