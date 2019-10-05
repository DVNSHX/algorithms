#include<bits/stdc++.h>
#include<iostream>

using namespace std;

void fun(int m,int n)
{
  int ans=1;
  int count=0;
  while(ans <= m){
    count++;
    ans=ans*n;
  }
  cout << count;
}

int main(){
  fun(250,2);
  return 0;
}
