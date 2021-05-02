#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sequenceSum(int a,int b)
{
    int sum=0,i;
    int n = max(a,b)-min(a,b)+1;
    int arr[n],j;
    for(i=min(a,b), j=0;i<=max(a,b) && j<n;i++,j++)
    {
        sum=sum+i;
        arr[j]=i;
    }
    for(i=0;i<n;i++)
        cout<<arr[i]<<" ";;
        cout<<"Sum="<<sum;
    cout<<endl;

}

//driver code
int main()
{
    while(1)
    {
        int a,b;
        cin>>a>>b;
        if(a<=0 || b<=0 )
            break;
        else
        sequenceSum(a,b);
    }
}
