#include "bits/stdc++.h"
using namespace std;
void swap(int *xp,int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

//SORTING FUNCTION
void bubbleSort(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      if(arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]);
    }
  }
}

void printArray(int arr[],int size)
{
  int i;
  for(i=0;i<size;i++)
  {
    cout << arr[i] << ",";
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
  bubbleSort(arr,n);
  cout << "Sorted array : ";
  printArray(arr,n);
  return 0;
}
