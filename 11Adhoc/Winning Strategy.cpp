#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here4
    int n;
    cin>>n;
    vector<int> v(n+1);
    int cost=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    for(int i=1;i<=n;i++){
        if(v[i]==i)continue;
        else{
               if(v[i]==i+1&&v[i+1]==i){
                   i++;
                   cost++;
               }
                else if((i+1<n&&i+2<n)&&(v[i]==i+1&&v[i+1]==i+2&&v[i+2]==i)||(v[i]==i+2&&v[i+1]==i&&v[i+2]==i+1)){
                    i+=2;
                    cost+=2;
                }
                else {
                    cout<<"NO";
                    return 0;
                }
        }
    }
    cout<<"YES\n";
    cout<<cost;
    return 0;
    
}