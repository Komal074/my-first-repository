#include<iostream>
using namespace std;
int main()
{
    /* int a[]={4,7,1,8,5},i , max, min,size=5;
    max=a[0];
    for(i=0;i<=5;i++)
    {
        
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Largest number of an array: "<<max<<endl;
    min=a[0];
    for(i=0;i<=5;i++)
    { 
        
        if(a[i]<min)
        {
            min=a[i];

        }
        
    }
    cout<<"Smallest number of an array: "<<min;
    
    */
   
    int a[100],size,i,max,min;
    cout<<"Enter a number of elements: ";
    cin>>size;
    cout<<"Enter an array elements: ";

    for(i=0;i<=size;i++)
    {
        cin>>a[i];
        max=a[0];
    }

    for(i=0;i<=size;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    
    }
    cout<<"Largest element of array: "<<max<<endl;
    min=a[0];
    for(i=0;i<=size;i++)
    {
       if(a[i]<min) 
       {
        min=a[i];
       }
    }
    cout<<"Smallest element of array: "<<min;

}