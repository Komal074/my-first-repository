// wap to find the sum of the square of the digits of a number.
//input:123
//output:14



#include<iostream>
using namespace std;
int main()
{
    int num,r,sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        r=num%10;
        sum=r*r+sum;
        num=num/10;
    }
    cout<<"Sum of sqr of digit : "<<sum;
}