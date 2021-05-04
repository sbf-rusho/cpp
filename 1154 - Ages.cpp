#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,c=0,sum=0;
    while(1)
    {
        cin>>n;
        if(n<0)
            break;
        sum=sum+n;
        c++;
    }
    cout<<showpoint;
    float avg = (float) sum/c;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<avg<<endl;
}
