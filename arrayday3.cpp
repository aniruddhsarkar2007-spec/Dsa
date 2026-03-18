#include<iostream>
using namespace std;
int main()
{
    //-----------STATIC INITIALISATION-------------
    // IN THIS WE GIVE VALUE IN DESIGN TIME

    // 2nd method of initialisation
    // drawback = we have to count the array length

    // int arr[]={23,54,6,3,6,32};
    // cout<<arr[3]<<"\n";

    // 3rd method of initialisation

    // int arr1[3]={2,3,22};
    // cout<<arr1[2]<<"\n";

    //----------DYNAMIC INITIALISATION-----------

    //INPUT
    // int subject[3];
    // for(int i=0;i<3;i++)
    // {
    //     cout<<"Enter value for"<<i<<"position";
    //     cin>>subject[i];
    // }
    // //OUTPUT
    // cout<<"Value of array\n";
    // for(int i=0;i<3;i++)
    // {
    //     cout<<subject[i]<<"\n ";
    // }


   // HOW CAN WE FIND THE LENGHT OF AN ARRAY
   int subject1[]={2,4,6,3,64,3,6};
   int len=sizeof(subject1)/sizeof(subject1[0]);
     
    for(int i=0;i<len;i++)
    {
        cout<<"Enter value for"<<i<<"position";
        cin>>subject1[i];
    }
    //OUTPUT
    cout<<"Value of array\n";
    for(int i=0;i<len;i++)
    {
        cout<<subject1[i]<<"\n ";
    }
   
}