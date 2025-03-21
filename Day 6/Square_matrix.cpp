// wap to generate a square matrix of given size and fill it with squential numbers.


#include<iostream>
using namespace std;
int main()
{
    int arr[3][3],i,j;
    cout<<"Enter matrix element: ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Square Matrix:\n ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {   
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
}