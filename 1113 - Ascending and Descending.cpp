#include<iostream>
using namespace std;

int findOrder(int a,int b)
{
    if(a>b)
        cout<<"Decrescente"<<endl;
    else if(a<b)
        cout<<"Crescente"<<endl;

}

//driver code
int main()
{
    int a,b;
    while(1)
    {
    cin>>a>>b;
    if(a==b)
        break;
    else
     findOrder(a,b);
    }

}
