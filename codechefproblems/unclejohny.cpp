#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,k;
           cin >> t;
  while(t--){
             cin >> n;
             int songs[n];
             for(int i=0;i<n;i++)
             {
               cin >> songs[i];
             }
             cin >> k;
           int v=songs[k-1];
           sort(songs,songs+n);
           int j=0;
           while(j<n){
             if((songs[j])==v){
              cout << j+1 << endl;
                    }
                      j++;
                    }
  }
  return 0;
}
