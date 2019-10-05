// fibeasy

#include<iostream>
#include<math.h>  //to use log Function
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
    long long int x; cin>>x;
    long long int z = log2((long double)x); //type casting x 
    if(z==0){
      cout <<  "0" << endl;
    }
    else if(z==1){
      cout << "1" << endl;
    }
    else{
      if(z%4==2)
        cout << "2" << endl;
      else if(z%4==3)
        cout << "3" << endl;
      else if(z%4==0)
        cout << "0" << endl;
      else if(z%4==1)
        cout << "9" << endl;
    }
  }
}
