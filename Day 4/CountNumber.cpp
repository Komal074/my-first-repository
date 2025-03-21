// wap to count the number of digits in given number.
//input=12345
//output=5



#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>0)
    {
        num=num/10;
        count++;
    }

    cout<<"No. of digits: "<<count;
}