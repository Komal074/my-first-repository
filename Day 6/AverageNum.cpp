//wap to find the average of number in a array


#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5},i, sum=0,avg;
    for(i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/5;
    cout<<"Average of array element: "<<avg;

}