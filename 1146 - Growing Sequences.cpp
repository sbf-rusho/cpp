//this code has presentation error in uri....
#include<iostream>
using namespace std;

void sequence(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<i<<" ";

    }
cout<<endl;


}

//driver code
int main()
{
    while(1)
    {
        int n;
        cin>>n;
        if(n==0)
            break;
        else
        sequence(n);

    }

}
