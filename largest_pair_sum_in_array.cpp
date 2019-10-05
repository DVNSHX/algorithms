#include "bits/stdc++.h"

int main()
{
  int n;
  std::cout << "Enter the Size of the Array: ";
  std::cin >> n;
  int arr[n];
  for(int i=0;i<n;i++)
  {
    std::cout << "Enter the Element of the array" << '\n';
    std::cin >> arr[i];
  }
  int max_sum,k,ls,us,j,highest_sum;
  std::cout << "Enter the max sum to be searched: ";
  std::cin >> k;

  for(i=0;i<n;i++)
  {
    ls=arr[i]
    for(j=i+1;j<n;j++)
    {
      us=arr[j]
      max_sum=ls+us;
      if(arr[i]==sizeof(arr)-1)
        std::cout << "the largest possible sum below k is " << highest_sum;
        break;
      if(max_sum>k)
        continue;
      else
        highest_sum=max_sum;
    }
  }
}
