#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"orignal array\n";
    for(int r=0;r<3;r++)
    {
     for(int c=0;c<3;c++)
     {
        cout<<arr[r][c]<<"\t";
     }
     cout<<"\n"; 
    }
     cout<<"Upper array\n";
    for(int r=0;r<3;r++)
    {
     for(int c=0;c<3;c++)
     {
        if(c>r)
        {
            cout<<"0"<<"\t";
        }
        else{
            cout<<arr[r][c]<<"\t";
        }
     }
     cout<<"\n"; 
    }
    cout<<"Lower array\n";
    for(int r=0;r<3;r++)
    {
     for(int c=0;c<3;c++)
     {
        if(c<r)
        {
            cout<<"0"<<"\t";
        }
        else{
            cout<<arr[r][c]<<"\t";
        }
     }
     cout<<"\n"; 
    }
}