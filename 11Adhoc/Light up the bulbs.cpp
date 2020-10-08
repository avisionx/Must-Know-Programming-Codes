#include<bits/stdc++.h>
using namespace std;
int main()
{   long long n,x,y;
 cin>>n>>x>>y;
    string s;
 cin>>s;
 int i=0;
 while(s[i]=='1'){
         i++;
}
 int count =0;
 while(i!=n){
     count++;
    while(s[i]=='0')     
         i++;
     while(i!=n&&s[i]=='1'){
         i++;
     }
 }
 cout<<(count>0?min((count-1)*x+y,count*y):0);
    
	return 0;
}
