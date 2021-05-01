#include<iostream>
using namespace std;
int main()
{
    double i,j=1;
    for(i=0 ; i<=2;i+=.2)
    {

        cout<<"I="<<i<<" "<<"J="<<j+i<<endl;
        cout<<"I="<<i<<" "<<"J="<<j+1+i<<endl;
        cout<<"I="<<i<<" "<<"J="<<j+2+i<<endl;

    }
    return 0;
}

