#define min(a,b) (a<b?a:b)
#define max(a,b) (a>b?a:b)

#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    long n,k,l,mi=INT_MAX,ma=INT_MIN;
    cin>>n>>k>>l;
    vector<long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        mi=min(mi,v[i]);
        ma=max(ma,v[i]);
    }
    long cost=INT_MAX;
    for(long i=ma;i>=mi;i--){
        int inc=0,dec=0;
        for(int j=0;j<n;j++){
            if(v[j]>i){
                dec+=abs(v[j]-i);
            }
            else inc+=abs(v[j]-i);
        }
      //  cout<<i<<" "<<inc<<" "<<dec<<endl;
         if(dec<=inc){
                cost=min(cost,dec*k+abs(dec-inc)*l);
            }
            else break;
       // cout<<cost<<endl;
    }
    
    cout<<cost;
    return 0;
}