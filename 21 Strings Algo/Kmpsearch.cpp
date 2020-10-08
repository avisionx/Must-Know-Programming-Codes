#include <bits/stdc++.h>
using namespace std;
#define int long long

int* getLps(string pattern){

    int len =pattern.length();
    int* lps=new int[len];

    lps[0]=0;
    int i=1,j=0;

    while(i<len){
      if(pattern[i]==pattern[j]){
        lps[i]=j+1;
        j++;
        i++;
      }
      else{
        if(j!=0){
          j=lps[j-1];
        }else{//j at 0
          lps[i]=0;
          i++;
        }
      }
    }
    return lps;
}

bool kmpsearch(string s,string pattern){

   int lentext=s.length();
   int lenpat=pattern.length();
   
   int i=0,j=0;

   int* lps=getLps(pattern);
   // for(int i=0;i<lenpat;i++){
   //  cout<<lps[i]<<" ";
   // }

   while(i<lentext && j<lenpat){
      if(s[i]==pattern[j]){
          i++;
          j++;
      }else{
          if(j!=0){
            j=lps[j-1];
          }
          else{
             i++;
          }
      }
   }

   if(j==lenpat){
       return 1;
   }
   else return 0;
}

int32_t main()
{   std::ios::sync_with_stdio(false);
    #ifndef ONLINE_JUDGEb
    freopen("input.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
    #endif
     string s,pat;
     getline(cin,s);
     getline(cin,pat);
     cout<<kmpsearch(s,pat);

    
    return 0;
}
