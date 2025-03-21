//wap to find all prime number within a given range.
//input=10,30
//output=11,13,17,19,23,29

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,i,j,count;
    cout<<"Enter two number:";
    cin>>n1>>n2;
    for(i=n1;i<=n2;i++)
{     
    count=0;
    for(j=1;j<=i;j++)
    {

        if(i%j==0)
        count++;
    }

     if(count==2)
     cout<<i<<" " ;
}
}