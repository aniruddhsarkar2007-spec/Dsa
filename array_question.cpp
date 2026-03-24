// 1st
// count length of array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,4,5,6,4,3};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     cout<<len;
// }


// // 2nd
// // Only even display

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<len;i++)
//     {
//         if(arr[i]%2==0)
//         {
//             cout<<arr[i]<<"\n";
//         }
//     }

// }


// 3rd
// Only odd display

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<len;i++)
//     {
//         if(arr[i]%2!=0)
//         {
//             cout<<arr[i]<<"\n";
//         }
//     }

// }



// 4th
// square of every element

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<len;i++)
//     {
        
//         cout<<arr[i]*arr[i]<<"\n";

    
//     }

// }

// 5th
// cube of every element

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);

//     for(int i=0;i<len;i++)
//     {
        
//         cout<<arr[i]*arr[i]*arr[i]<<"\n";
//     }

// }


// 6th
// sum of each element

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int ne=0;
//      for(int i=0;i<len;i++)
//      {
//         ne=arr[i]+ne;
//      }
//      cout<<ne;

// }

// 7th
// max in array

// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[]={2,3,5,7,4,6,8};
//     int len=sizeof(arr)/sizeof(arr[0]);
//     int max=arr[0];
//      for(int i=0;i<len;i++)
//      {
//       if(arr[i]>max)
//       {
//         max=arr[i];
//       }
       
//      }
//       cout<<max;

// }


//8th
// min in array

#include<iostream>
using namespace std;
int main()
{
    int arr[]={2,3,5,7,4,6,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    int min=arr[0];
     for(int i=0;i<len;i++)
     {
      if(arr[i]<min)
      {
        min=arr[i];
      }
       
     }
      cout<<min;

}