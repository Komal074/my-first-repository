//wap to check if a number is palindrome or not.
//Input: num=101
//Output: Palindrome


#include<iostream>
using namespace std;
int main()
{
    int num,temp,r,rev=0;
    cout<<"Enter a number:";
    cin>>num;
    temp=num;
    while(num>0)
    {
        r=num%10;
        rev=r+(rev*10);
        num=num/10;
    }
    if(temp==rev)
    cout<<"Palindrome";
    else
    cout<<"Not Palindrome";
    

}