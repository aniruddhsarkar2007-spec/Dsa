// ------------------------BUBBLE SORT ALGORITHM------------------------

// #include<iostream>
// using namespace std;
// int main ()
// {
    // int arr[]={5,2,3,4,1};
    // int length;
    // length=sizeof(arr)/sizeof(arr[0]);
    // cout<<"Orignal array:\n";
    // for(int i=0;i<length;i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }

    // int s;
    // cout<<"enter size of array\n";
    // cin>>s;
    // int arr[s];
    // int len;
    // len=sizeof(arr)/sizeof(arr[0]);
    // cout<<"enter"<<s<<"values\n";
    // for(int i=0;i<len;i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"Orignal array:\n";
    // for(int i=0;i<len;i++)
    // {
    //     cout<<arr[i]<<"\t";
    // }
//}


// ----- 30/3/26---
//sorting not bubblesort

// #include<iostream>
// using namespace std;
// int main()
// {
//     int s;
//     int temp;
//     int c;
//     cout<<"Enter size of array:\n";
//     cin>>s;
//     int arr[s];
//     cout<<"Enter "<<s<<" values:\n";
//     for(int i=0;i<s;i++)
//     {
//         cin>>arr[i];
//     }
//     cout<<"Orignal array:\n";
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }
//     cout<<"\n Sorted array\n";
//     for(int i=0;i<s;i++)
//     {
//         for(int j=0;j<s-1;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//              temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//             }
//         }
//     }
//     for(int i=0;i<s;i++)
//     {
//         cout<<arr[i]<<"\t";
//     }

    

// }

// its time complexity is O(n2)   
// #include<iostream>
// using namespace std;
// int main()
// {
//   int s;
//   cout<<"Enter the size of array:\n";
//   cin>>s;
//   int arr[s];
//   int temp;
//   cout<<"Enter "<<s<<" Values:\n";
//   for(int i=0;i<s;i++)
//   {
//     cin>>arr[i];
//   }
//   cout<<"Orignal Array:\n ";
//   for(int i=0;i<s;i++)
//   {
//     cout<<arr[i]<<"\n";
//   }
//   cout<<"Sorted array:\t";
//   for(int i=0;i<s;i++)
//   {
//     for(int j=0;j<s-1;j++)
//     {
//         if(arr[j]>arr[j+1])
//         {
//             temp=arr[i];
//             arr[i]=arr[j+1];
//             arr[j+1]=temp;
//         }
//     }
//   }
//   for(int i=0;i<s;i++)
//   {
//     cout<<arr[i]<<"\t";
//   }

// }



//----------31/3/26-------

// optimized code


#include<iostream>
using namespace std;
int main()
{
  int s;
  cout<<"Enter the size of array:\n";
  cin>>s;
  int c=0;
  int arr[s];
  int temp;
  cout<<"Enter "<<s<<" Values:\n";
  for(int i=0;i<s;i++)
  {
    cin>>arr[i];
  }
  cout<<"Orignal Array:\n ";
  for(int i=0;i<s;i++)
  {
    cout<<arr[i]<<"\n";
  }
  cout<<"Sorted array:\t";
  for(int i=0;i<s;i++)
  {
    for(int j=0;j<s-1-i;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[i];
            arr[i]=arr[j+1];
            arr[j+1]=temp;
        }
        c++;
    }
  }
  for(int i=0;i<s;i++){
    cout<<arr[i]<<"\t";
  }

  cout<<"Number of iteration:"<<c;

}


// #include<iostream>
// using namespace std;
// int main(){
//   int arr[]={5,3,54,65};
//   int s=sizeof(arr)/sizeof(arr[0]);
//   for (int i=0;i<s;i++){
//     cout<<arr[i]<<endl;
//   }
// }
