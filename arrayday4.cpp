// ascending with sort

// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main()
// {
//     int arr[]={2,4,5,3,6};
//     int n=5;

//     sort(arr,arr+n,greater<int>());
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<endl;
//     }
// }



// // ascending with swap

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={3,8,10,2,1,9};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//     for(int j=i+1;j<n;j++){
//     if(arr[i]>arr[j]){
//         int temp=arr[i];
//         arr[i]=arr[j];
//         arr[j]=temp;
//     }
//     }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<endl;
//     }
// }



// descending with swap

#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,10,2,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
    if(arr[i]<arr[j]){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}