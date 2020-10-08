#include<bits/stdc++.h>
using namespace std;
typedef long long lint;

bool comp(pair<lint,lint> a,pair<lint,lint> b){
    if(a.second<b.second)return 1;
    else return 0;
}

int main()
{
    //Write your code here
  std::ios::sync_with_stdio(false);
  lint n;cin>>n;
  vector<pair<lint ,lint > > v(n);
  for(int i=0;i<n;i++){
    lint a,b;cin>>a>>b;
    v[i]={a,b};
  }
  sort(v.begin(),v.end(),comp);

  int ans=1;
  lint l=v[0].second;
  for(int i=1;i<n;i++){
    if(v[i].first>=l){
      ans++;
      l=v[i].second;
    }
  }
  cout<<ans;
  
    return 0;
}