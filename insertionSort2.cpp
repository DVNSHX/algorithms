#include<bits/stdc++.h>
using namespace std;

void swap(int *xp,int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}

int insertionSort(int arr[],int size)
{
  for(int pos=1; pos<size;pos++)
  {
    int nextpos = pos;
    while(nextpos>0 && arr[nextpos]<arr[nextpos-1])
    {
      swap(&arr[nextpos],&arr[pos]);
      nextpos=nextpos-1;
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
