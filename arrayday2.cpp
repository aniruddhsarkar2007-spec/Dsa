// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     arr[0]=34;
//     arr[1]=65;
//     arr[2]=9;
//     arr[3]=54;
//     arr[4]=32;
//     cout<<&arr[2]<<"\n"; this will show the memory address
//     cout<<arr[6];
// }


// --------------Update-------------------

#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    arr[0]=34;
    arr[1]=65;
    arr[2]=9;
    arr[3]=54;
    arr[4]=32;
    
    // updation
    arr[4]=arr[4]+10;
    cout<<arr[4]<<"\n";

    // not updated
    cout<<arr[4]+10<<"\n";
    cout<<arr[4]<<"\n";


//  -----------Addition--------------------

    cout<<arr[1]+arr[2];
}