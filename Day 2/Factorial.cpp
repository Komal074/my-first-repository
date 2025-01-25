//wap to find the factorial of given number
//Input:5
//Output:120



#include<iostream>
using namespace std;
int main()
{
    int num,fact=1,i;
    cout<<"Enter a Number=";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial: "<<fact;
}
