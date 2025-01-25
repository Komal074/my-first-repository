#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,num,i;
    cout<<"Enter a number=";
    cin>>num;
    cout<<a<<" "<<b;
    for(i=1;i<=num;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
        
    }

}
