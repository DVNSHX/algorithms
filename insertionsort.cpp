#include "bits/stdc++.h"
using namespace std;
void swap(int *xp,int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

//SORTING FUNCTION
void insertionSort(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    int key=arr[i];
    int j=i-1;
    while(j>=0 && arr[j]>key)
    {
      arr[j+1] = arr[j];
      j--;
      arr[j+1] = key;
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
  printArray(arr,n);
  insertionSort(arr,n);
  cout << "Sorted array : ";
  printArray(arr,n);
  return 0;
}
