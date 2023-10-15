#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void merge_sorted(int arr1[],int n,int arr2[],int m,int arr3[])
{
    int i=0,j=0;
    int k=0;

    while(i<n && j<m)
    {
      if(arr1[i]<arr2[j])
      {
        arr3[k]=arr1[i];
        k++;
        i++;
      }
      else
      {
          arr3[k]=arr2[j];
          k++;
          j++;
      }
    }

    //copy ele of arr1
    while(i<n)
    {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //copy ele of arr2
    while(j<m)
    {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}

void print(int arr[],int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" "<<endl;
}
int main()
{
    int arr1[5]={1,3,5,9};
    int arr2[4]={2,4,6,8};
    int arr3[8]={0};

    merge_sorted(arr1,5,arr2,4,arr3);
    print(arr3,8);
    return 0;
}
