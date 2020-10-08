#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
    int d,s;
    cin>>s>>d;
    s--;
   vector<int> res(d,0);
    for(int i=d-1;i>=0;i--){
        if(s>9){
            res[i]=9;
            s-=9;
        }
        else{
            res[i]=s;
            s=0;
        }
    }
    res[0]+=1;
    for(int i=0;i<d;i++){
        cout<<res[i];
    }
        
        
        
    
}