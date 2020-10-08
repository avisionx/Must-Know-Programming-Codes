
//https://codeforces.com/problemset/problem/1037/C


#include<map>
#include<vector>
#include<queue>
#include<iostream>
using namespace std;
#define pb push_back
#define inp(v,n) for(lint i=0;i<n;i++)cin>>v[i];
#define out(v,n) for(lint i=0;i<n;i++)cout<<v[i]<<" ";
typedef long long lint;





int main(){
    std::ios::sync_with_stdio(false);

int n;
cin>>n;
string a,b;
cin>>a>>b;
int cost=0;
for(int i=0;i<n;i++){
  if(a[i]==b[i])continue;
  else if(a[i]!=b[i]&&i+1<n&&a[i+1]!=b[i+1]&&a[i]!=a[i+1]){
    cost++;
    i++;
  }
  else{
    cost++;
  }
}
cout<<cost;
return 0;
}