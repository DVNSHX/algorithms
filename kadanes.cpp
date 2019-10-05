#include<iostream>

using namespace std;

int  findMax(int arr[],int size){
  int max_so_far=0,max_ending_here=0;
  for(int i=0;i<size;i++){
    max_ending_here=max_ending_here+arr[i];
    if(max_ending_here<0){
      max_ending_here=0;
    }
    else if(max_ending_here>max_so_far){
      max_so_far=max_ending_here
    }
  }
  return max_so_far;
}


int main(){
  int n; cin >> n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin >> arr[i];
  }
  findMax(arr,n);
  return 0;
}
