#include<iostream>
using namespace std;
int main() {
   int i, j, ver, edg, minimum, p;
  
   cin>>ver;
   
   edg = ver-1;
   int EDG[edg][2], Dig[ver+1] = {0};
  
   for(i = 0; i < edg; i++) {
     
      cin>>EDG[i][0];
     
      cin>>EDG[i][1];
      Dig[EDG[i][0]]++;
      Dig[EDG[i][1]]++;
   }
   char c;
   cin>>c;
 
   for(i = 0; i < ver-2; i++) {
      minimum = 10000;
      for(j = 0; j < edg; j++) {
         if(Dig[EDG[j][0]] == 1 &&Dig[EDG[j][1]] != 0 ) {
            if(minimum > EDG[j][0]) {
               minimum = EDG[j][0];
               p = j;
            }
         }
         if(Dig[EDG[j][1]] == 1 && Dig[EDG[j][0]] != 0) {
            if(minimum > EDG[j][1]) {
               minimum = EDG[j][1];
               p = j;
            }
         }
      }
      Dig[EDG[p][0]]--;
      Dig[EDG[p][1]]--; 
      if(Dig[EDG[p][0]] == 0)
         cout<<EDG[p][1]<<" ";
      else
         cout<<EDG[p][0]<<" ";
   }
   return 0;
}