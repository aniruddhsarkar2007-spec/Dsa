// -----2D ARRAY-----  

// #include<iostream>
// using namespace std;
// int main()
// {
//      int arr[4][3]={19,3,44,6,3,62,7,98,4,5,67,23};
//      for(int r=0;r<4;r++)
//      {
//         for(int c=0;c<3;c++)
//         {
//             cout<<arr[r][c]<<"\t";
//         }
//         cout<<"\n";
//      }
//     }


//-----3D ARRAY-----  

#include<iostream>
using namespace std;
int main()
{
     int arr[2][2][3]={19,3,44,6,3,62,7,98,4,5,67,23};
     for(int t=0;t<2;t++){

     for(int r=0;r<2;r++)
     {
        for(int c=0;c<3;c++)
        {
            cout<<arr[t][r][c]<<"\t";
        }
        cout<<"\n";
     }
        cout<<"\n";
    }
     }