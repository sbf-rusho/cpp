#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
   int i=1,j=1;
   float sum=0;
    while(i<=39)
    {
        sum=sum+(float) i/j;
        i=i+2;
        j=j*2;
    }
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(2);
    cout<<sum<<endl;
}
