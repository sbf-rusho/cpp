#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void modulo(int m,int n)
{
    int i,r;
    for(i=min(m,n)+1;i<max(m,n);i++)
    {
        if(i%5==2 || i%5==3)
            cout<<i<<endl;
    }

}

//driver code
int main()
{
    int a,b;
    cin>>a>>b;
    modulo(a,b);
}
