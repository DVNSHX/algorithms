#include<iostream>
#include<string.h>
using namespace std;

void substring(string input,string output){
  if(input.length()==0){
    cout << output << endl;
    return;
  }
  substring(input.substr[1],output);
  substring(input.substr[1],output+input[0])
}






int main() {
  /* code */
  return 0;
}
