//Wap to find the GCD of two numbers.
//Input:42 and 28
//Output:1,2,7,14-->14 is gcd



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
    cout<<gcd;
    
}