//Wap to check if a given year is a leap year.
//Input:2012
//Output:is a leap year


#include<iostream>
using namespace std;
int main()
{ 
    int year;
    cout<<"Enter a year=";
    cin>>year;
    if((year%4==0 && year%100!=0) || year%400==0)
    {
        cout<<year<<" "<<"is a leap year";
    }    
    
    else
    {
        cout<<year<<" "<<"is not leap year";
    }
}
