#include <iostream>
using namespace std;
void PrintArray(int arr[], int n)
{
      for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int AntiClockRotateBy1(int arr[],int n)
{
     int temp=arr[0];
     int a=0;
    while(a<n-1)
    {
        arr[a]=arr[a+1];

        a++;
    }
    arr[n-1]=temp;
}
int main()
{
    int t,d,a,i,num=-1;
    cin>>t;
    int n[t];
    a=t;
    int ar[t][200];
    while(t>0)
        {
        cin>>n[t];
        int arr[n[t]];
        for(i=0;i<n[t];i++)
        {
            cin>>arr[i];
        }
        cin>>d;
        while(d>0)
        {
            AntiClockRotateBy1(arr,n[t]);
            d--;
        }
        for(i=0;i<n[t];i++)
        {
            ar[t][i]=arr[i];
        }

        t--;
        }
        while(a!=0)
        {
            PrintArray(ar[a],n[a]);
            cout<<endl;
            a--;
        }
}

