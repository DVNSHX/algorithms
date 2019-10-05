#include "bits/stdc++.h"
using namespace std;
void swap(int *xp,int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

//SORTING FUNCTION
void selectionSort(int arr[],int n)
{
  int i,j,min_idx;
  for (i=0;i<n-1;i++)
  {

    for(j=i+1;j<n;j++)
    {
      min_idx = i;
      if(arr[j]<arr[min_idx])
        min_idx = j;
      swap(&arr[min_idx],&arr[i]);
    }
  }
}

void printArray(int arr[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    cout << arr[i] << " ";
  }
cout << endl;
}

int main(){
  int n;
  cout << "Enter the Size of the array : ";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    cout << "array element: ";
    cin >> arr[i];
  }
  selectionSort(arr,n);
  cout << "Sorted array : ";
  printArray(arr,n);
  return 0;
}
