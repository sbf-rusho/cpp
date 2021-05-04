#include<iostream>
using namespace std;

int fibonacciSeries(int n)
{
   int t1=0,t2=1,nt,i;
   for(i=0;i<n-1;i++)
   {
       if(i==0)
       {
        cout<<"0";
        continue;
       }
       else if(i==2)
       {
           cout<<" 1";
       }
       nt = t1+t2;
       t1=t2;
       t2=nt;
        cout<<" "<<nt;
   }
   cout<<endl;
}

//driver code
int main()
{
    int n;
    cin>>n;
     fibonacciSeries( n);
}
