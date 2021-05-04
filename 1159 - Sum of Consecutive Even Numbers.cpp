#include<iostream>
using namespace std;
int main()
{
    while(1)
    {
        int n,sum=0,m=5;
        cin>>n;
        if(n==0)
            break;
        else
            while(m--)
            {
                if(n%2==0)
                {
                    sum=sum+n;
                    n+=2;
                }
                else
                {
                    ++n;
                    sum=sum+n;
                    n+=2;
                }
            }
            cout<<sum<<endl;
    }
}
