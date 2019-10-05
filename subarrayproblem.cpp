#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  //getting array
  int n;
  cin >> n;
  int arr[n];
  for(int i;i<n;i++){
    cout << "Enter the Element: ";
    cin >> arr[i];
  }
  //printing the whole array
  cout << "Your array is : " << endl;
  for(int i=0;i<n;i++){
    cout << arr[i];
  }
  cout << endl;
  //getting the subarrays
  for(int j=0;j<n;j++){
  for(int i=0;i<n;i++){
    cout << arr[i] << " ";
  }}
return 0;
}
