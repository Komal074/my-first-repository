//Wap to check if a number is prime
//Input:7
//Output:Prime



#include<iostream>
using namespace std;
int main()
{
    int num,i,count=0;
    cout<<"Enter a Number=";
    cin>>num;
    for(i=0;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
        
    }
    if(count==2)
    {
        cout<<"Prime ";
    }
    else
    {
        cout<<"Not Prime";
    }
    
}
