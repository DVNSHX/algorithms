#include<bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,n,sum=0;
    cin >> t;
    while(t!=0){
        cin >> n;
        int ni3 = n/3;
        int ni5 = (n)/5;
        int ni15=(n/15);
        sum = ((ni3 * (6+(ni3-1)*3)) / 2) + ((ni5 * (10+(ni5-1)*5)) / 2) - ((ni15 * (30+(ni15-1)*15))/2);
        t--;
        cout << sum << endl;
        sum=0;
      }
    return 0;
}
