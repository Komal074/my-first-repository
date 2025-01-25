// wap to genarate the fibonacci series upto given number...
//input: num=8
//output: 0 1 1 2 3 5 8 13 21


#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,num,i;
    cout<<"Enter a number=";
    cin>>num;
    cout<<a<<" "<<b;
    for(i=1;i<=num-1;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }
    return 0;
}