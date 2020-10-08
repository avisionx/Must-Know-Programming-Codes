#include <bits/stdc++.h>
using namespace std;
#define int long long

int* getZ(string str){
   int len =str.length();
   int* Z=new int[len]();

   int l=0,r=0;

   for(int i=1;i<len;i++){
    if(i>r)
     {     //i doesnt lie between l & r
          // Z doesnt exist for this i
            l=i;
            r=i;
     
            while(r<len && str[r-l]==str[r]){
                r++;
            }
     
            Z[i]=r-l;//bec r is at place which dont match r-l posn
            r--;//       now exact left and right bound
      }
      else{

           int k=i-l;
           if(Z[k]+i<=r){
                //it lies between l & r & also Z will exist previously
            Z[i]=Z[k];
           }
           else{
            //Some part of Z is already inc and we need to match further
              l=i;
              while(r<len && str[r-l]==str[r]){
                r++;
              }

              Z[i]=r-l;
              r--;
           }
      }

   }
   return Z;
}


void searchstring(string text,string pattern){

    string str=pattern+"$"+text;
    int len =str.length();
    int* Z=getZ(str);
    for(int i=0;i<len;i++){
        if(Z[i]==pattern.length()){
          cout<<i-pattern.length()-1<<endl;
        }
    } 

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
     searchstring(s,pat);

    
    return 0;
}
