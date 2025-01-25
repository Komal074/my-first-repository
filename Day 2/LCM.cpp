//Wap to find the gcd of two numbers.
//input:36 and 28
//output:252 is the value of lcm


#include<iostream>
using namespace std;
int main()
{
    int num1,num2,gcd=0,i;
    cout<<"Enter a first number:";
    cin>>num1;
    cout<<"Enter a second number:";
    cin>>num2;
    for( i=1;i<=num1;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
          gcd=i;
          
        }
    }
    int lcm=(num1*num2)/gcd;
    cout<<lcm;
    
}