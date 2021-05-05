#include<iostream>
using namespace std;

int perfectNumber (int n)
{
    int i,div=0;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            div+=i;
        }
    }
    if(div==n)
        cout<<n<<" "<<"eh perfeito"<<endl;
    else
        cout<<n<<" "<<"nao eh perfeito"<<endl;
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
        perfectNumber(n);
    }
}
