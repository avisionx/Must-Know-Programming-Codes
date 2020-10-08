#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int,pair<int,int> > &p1,pair<int,pair<int,int> > &p2){
        return p1.second.first<p2.second.first;
}

int main()
{
    //Write your code here
    int n;
    cin>>n;
    vector<pair<int,pair<int,int> > > v(n);
    vector<long> dp(n,0);
    for(int i=0;i<n;i++){
        int s,f,p;
        cin>>s>>f>>p;
        v[i]={s,{f,p}};
    }
    sort(v.begin(),v.end(),comp);
    dp[0]=v[0].second.second;
    
    
    for(int i=1;i<n;i++){
        
       long including=v[i].second.second; 
        int last_compatible=-1;
         int start=0,end=i-1;
       while(start<=end){
           int mid=(end-start)/2+start;
        //   cout<<"*"<<i<<"*"<<" "<<mid<<" ";
           if(v[mid].second.first<=v[i].first&&v[mid+1].second.first>v[i].first){
             last_compatible=mid;
               break;
           }
           else if( v[mid].second.first>v[i].first){
               end=mid-1;
           }
           else{
               start=mid+1;
           }
       }

        if(last_compatible!=-1){
            including+=dp[last_compatible];
        }
        dp[i]=max(dp[i-1],including);
      //  cout<<dp[i]<<endl;
      
        
       
    }
   
    cout<<dp[n-1];
    
    return 0;
}