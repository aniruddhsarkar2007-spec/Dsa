#include<iostream>
using namespace std;
int main()
{
    int m[3][3]={1,0,4,0,0,0,0,2,9};
    int cnt=0;
    cout<<"Orignal Array:\n";
    for (int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            cout<<m[r][c]<<"\t";
        }
        cout<<"\n";
    }
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<3;c++)
        {
            if(m[r][c]==0)
            {
                cnt++;
            }
        }
    }
    int t=9-cnt;
    cout<<"\n Total no of zero:"<<t;
    int s[t][3];
    int k=0;
    if(cnt>9/2)
    {
        for(int r=0;r<3;r++)
        {
        for(int c=0;c<3;c++)
        {
            if(m[r][c]!=0)
            {
                s[k][0]=r;
                s[k][1]=c;
                s[k++][2]=m[r][c];

            }
        }
        cout<<"\n sparse value are \n";
        for(int r=0;r<k;r++)
        {
            for(int c=0;c<3;c++)
            {
                cout<<s[r][c]<<"\t";
            }
            cout<<"\n";
        }
        }
    }
    else{
        cout<<"\n it is not sparse matrix";
    }
}