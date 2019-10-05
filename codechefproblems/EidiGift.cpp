#include<bits/stdc++.h>
#include<string.h>
using namespace std;

 // DESCRIPTION
 /*
 Eidi gifts are a tradition in which children receive money from elder relatives during the Eid celebration.

 Chef has three children (numbered 1,2,3) and he wants to give them Eidi gifts. The oldest child, Chefu, thinks that a distribution of money is fair only if an older child always receives more money than a younger child; if two children have the same age, they should receive the same amounts of money.

 For each valid i, the i-th child is Ai years old and it received Ci units of money. Determine whether this distribution of money is fair.
 */

 int main()
 {
   int q,age[3],money[3];
   cin >> q;
   string flag = "FAIR";

   while(q!=0){
      for(int i=0;i<3;i++){
       cin >> age[i];
      }
      for(int i=0;i<3;i++){
        cin >> money[i];
      }

      q--;
    }
   return 0;
 }
