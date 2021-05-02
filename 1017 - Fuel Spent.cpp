#include<iostream>
#include<iomanip>
using namespace std;

int spentFuel(int t,int v)
{
    int s;
    s=(v*t);
    float f;
    f=float (s)/12;
    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);
    cout<<f<<endl;
}

//driver code
int main()
{
    int t,v;
    cin>>t>>v;

    spentFuel(t,v);
}
