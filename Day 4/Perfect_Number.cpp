//wap to determine if a number is a perfect number.
//input=28
//output=perfect number



#include<iostream>
using namespace std;                                                 
int main(){
              
    int num,i,sum=0;

    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<num;i++)
    {
        
            if(num%i==0)

         sum=i+sum;
        
   }  
    if(sum==num)
    cout<<"Perfect number";
    else
    cout<<"Not Perfect number";
}