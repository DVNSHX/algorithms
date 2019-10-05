#include<iostream>
#include<math.h>
using namespace std;


int trailingZeroes(int x){
  int power = 0,count = 0;
  while(pow(5,power)<=x){
    power++;
  }
  for(int i=1;i<power;i++){
    count = count + (x/pow(5,i));
  }
  return count;
}

int main(){
  int count=0;
  int t;cin >>  t;
  while(t--){
    int x; cin >> x;
    int count = trailingZeroes(x);
    cout << count << endl;
    }
  return 0;
  }
