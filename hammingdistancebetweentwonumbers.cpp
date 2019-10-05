//cpp program to change case of a string

#include <bits/stdc++.h>
using namespace std;

int hamming(int n1,int n2)
{
  int x =n1^n2;
  int setbits = 0;

  while (x>0)
  {
    setbits += x&1;
    x >>=1;
  }
  return setbits;
}

//driver

int main()
{
  int n1 = 9 ,int n2 = 14;
  cout << hamming(9,14) << endl;

  return 0;
}
