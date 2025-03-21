//wap to find all Armstrong number within given range.
//input:1-500
//output:1,153,370,371,407



#include<iostream>
using namespace std;
int main()
{
    int num1,num2,temp,rem,sum,i;
    cout<<"Enter a two number: ";
    cin>>num1>>num2;
    for(i=num1;i<=num2;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            rem=temp%10;
            sum=rem*rem*rem+sum;
            temp=temp/10;
        }
        if(sum==i)
        {
            cout<<i<<endl;
        }
    }
}