//Sorting an array without any sorting algorithm
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={8,0,1,5,3,6};
    int n=sizeof(arr)/sizeof(int);
    //Print array without any sorting
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //sorting the array using stl
    sort(arr,arr+n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
