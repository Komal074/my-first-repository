//wap to find the sum of element in array....

#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5},size=5,sum=0,i;
  for(i=0;i<=4;i++)
  {
    sum=sum+a[i];
  }
  cout<<"sum of array element: "<<sum;

   /*
    int a[100],sum=0,i,size;
    cout<<"Enter a number of elements:";
    cin>>size;
    cout<<"Enter array element: ";
    for(i=0;i<=size;i++)
    {
      cin>>a[i];
    }
    for(i=0;i<=size;i++)
    {
      sum=sum+a[i];
    }
    cout<<"sum of array element:  "<<sum;
*/
  
}    
