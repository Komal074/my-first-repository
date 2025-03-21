//wap to find the all odd number within a given range.
//input:1-10
//output:25


#include<iostream>
using namespace std;
int main()
{
    int n1,n2,sum=0,i;
    cout<<"Enter a two number: ";
    cin>>n1>>n2;
    for(i=n1;i<=n2;i++)
    {
        if(i%2!=0)
         sum=sum+i;
        
    }
    cout<<"sum of odd number: "<<sum;
}