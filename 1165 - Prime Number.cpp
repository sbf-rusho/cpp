#include<iostream>
using namespace std;

int primeNumber(int n)
{
    int div, i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            c++;
    }
    if(c==2)
        cout<<n<<" "<<"eh primo"<<endl;
    else
        cout<<n<<" "<<"nao eh primo"<<endl;
}

//driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        primeNumber(n);
    }
}
