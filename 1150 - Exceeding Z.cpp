#include<iostream>
using namespace std;

int Exceeding(int a,int b)
{
    int i,sum=0,c=0;
    while(a<=b)
    {
        sum=sum+a;
        a++;
        if(sum<=b)
            c++;
        else
            break;
    }
    cout<<c+1<<endl;
}

//driver code
int main()
{
    int a,b;
    cin>>a>>b;
 while(b<=a)
        cin>>b;
    Exceeding(a,b);
}
