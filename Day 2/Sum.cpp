//Wap to calculate the sum of digits of a number
//Input:123
//Output:6




#include<iostream>
using namespace std;
int main()
{
    int num,r ,sum=0;
    cout<<"Enter a Number=";
    cin>>num;
    while(num>0)
    {
        r=num%10;
        sum=sum+r;
        num=num/10;
    }
    cout<<"sum of digits  "<<sum;
    
}