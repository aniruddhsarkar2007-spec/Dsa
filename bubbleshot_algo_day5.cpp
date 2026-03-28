// ------------------------BUBBLE SORT ALGORITHM------------------------

#include<iostream>
using namespace std;
int main ()
{
    // int arr[]={5,2,3,4,1};
    // int length;
    // length=sizeof(arr)/sizeof(arr[0]);
    // cout<<"Orignal array:\n";
    // for(int i=0;i<length;i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }

    int s;
    cout<<"enter size of array\n";
    cin>>s;
    int arr[s];
    int len;
    len=sizeof(arr)/sizeof(arr[0]);
    cout<<"enter"<<s<<"values\n";
    for(int i=0;i<len;i++)
    {
        cin>>arr[i];
    }
    cout<<"Orignal array:\n";
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<"\t";
    }

}