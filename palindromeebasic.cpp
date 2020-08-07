#include<bits/stdc++.h>

using namespace std;

string palindromeCheck(int n){         //Palindrome checker naive
  int rev = 0, temp;
  int id = n;
  while(id!=0){
    temp = id%10;
    rev = rev*10 + temp;
    id = id/10;
  }
  if(rev == n)
    return "is a palindrome";
  return "is not a palindrome";
}

int main(){
  int n;
  cin >> n;
  cout << palindromeCheck(n);
  return 0;
}
