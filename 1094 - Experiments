#include<iostream>
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int  animalResearch()
{
    char ch;
    float ac,ar,as;
    int t;
     float na,ta=0,nc=0,nr=0,ns=0;
    cin>>t;
    while(t--)
    {

        cin>>na>>ch;

        ta=ta+na;

        if(ch=='C')
        {
            nc=nc+na;
        }
        else if(ch=='R')
        {
            nr+=na;
        }
        else
        {
            ns+=na;
        }

    }
    ac = (float)(nc/ta);
    ac*= 100;
    ar=(float)(nr/ta);
    ar*=100;
    as=(float)(ns/ta);
    as*=100;

    cout<<"Total: "<<ta<<" "<<"cobaias"<<endl;
    cout<<"Total de coelohs: "<<nc<<endl;
    cout<<"Total de ratos: "<<nr<<endl;
    cout<<"Total de sapos: "<<ns<<endl;
    printf("Percentual de coelhos: %.2f %\n",ac);
    printf("Percentual de ratos: %.2f %\n",ar);
    printf("Percentual de sapos: %.2f %\n",as);

}

//driver code
int main()
{
   animalResearch();
}
