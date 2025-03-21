//wap to determine if a number is a perfect square.
//input:16
//output: perfect square


#include<iostream>
using namespace std;
int main()
{
    int num,i,f=0;
    cout<<"Enter a number: ";
    cin<<num;
    for(i=1;i<num;i++)
    {
        if(num=i*i)
        {
            
            f++;
            
        }
    
    }
        if(f==1)
        { 
         cout<<" perfect square number: ";
        }
        else
        {
            cout<<"not perfect square number: ";  
        }
 }
    

