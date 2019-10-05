#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int quickSort(int arr[],int l,int r){
  if(r-l<=1)
    return 0;
  int yellow = l+1;
  for(int green = l+1;green < r;green++){
    if(arr[green] <= arr[l]){
      swap(arr[yellow],arr[green]);
      yellow++;
    }
  }
  swap(arr[l],arr[yellow-1]);
  quickSort(arr,l,yellow);
  quickSort(arr,yellow+1,r);
}



void printArray(int arr[], int n)
{
  cout << "The Array is ::" << " ";
	for (int i=0; i < n; i++)
		cout << arr[i] << " ";
	cout <<  endl;
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cout << "Enter the Array element: ";
    cin >> arr[i];
  }
  int l=arr[0];
  int r=arr[n];
  printArray(arr,n);
  quickSort(arr,l,r);
  printArray(arr,n);
  return 0;
}
