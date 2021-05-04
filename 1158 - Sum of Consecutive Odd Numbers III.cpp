#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,sum=0,i;
        cin>>a>>b;
        while(b--)
        {
            if(a%2!=0)
            {
                sum = sum+a;
                a+=2;

            }

            else if(a%2==0)
            {
                ++a;
                sum = sum+a;
                a=a+2;
            }
        }
        cout<<sum<<endl;
    }
}
