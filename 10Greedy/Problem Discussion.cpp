#include<bits/stdc++.h>
typedef long long lint;
using namespace std;
int main() {

	// Write your code here
  lint n,k;
  cin>>n>>k;
  vector<lint> a(n);
    for(int i=0;i<n;i++){
    cin>>a[i];
    }
  sort(a.begin(),a.end());
  lint mi=a[0]+k;
    lint ma=a[n-1]-k;
    if(mi>ma){
        ma=ma^mi;
        mi=mi^ma;
        ma=ma^mi;
    }
  
  for(int i=1;i<n-1;i++){
    lint add=a[i]+k;
    lint sub=a[i]-k;
    if(add<=ma||sub>=mi)continue;
    else{
        if(ma-sub>=add-mi){
            ma=add;
        }
        else{
            mi=sub;
        }
    }
  }
    cout<<min(abs(ma-mi),a[n-1]-a[0]);  
}