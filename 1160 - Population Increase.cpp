//This code gets TLE at uri...
#include<iostream>
using namespace std;

int population(int pa,int pb,double ga,double gb)
{
   long long  int pi=0,c=0;
    while(pa<=pb)
    {
        pa=pa+(pa*(float) ga)/100.0;
        pb = pb + (pb*(float)gb)/100.0;
        c++;
    }
    if(c>100)
        cout<<"Mais de 1 seculo."<<endl;

    else
    cout<<c<<" "<<"anos."<<endl;

}

//driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int pa,pb;
        double ga,gb;
        cin>>pa>>pb>>ga>>gb;
        population(pa,pb,ga,gb);
    }
}
