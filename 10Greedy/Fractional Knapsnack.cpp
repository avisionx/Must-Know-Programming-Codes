#include<bits/stdc++.h>
using namespace std;
typedef long long lint;

struct st{
    lint t,y,x;
};
bool comp(struct st a,struct st b){
     if(a.t!=b.t){
    return a.t<b.t;
     }
  else { 
    if(a.y!=b.y){
      return a.y > b.y ;
    }
    else {
       return a.x<b.x;
    }
  }
   
}

int main()
{
    //Write your code here
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    lint n,d;
    cin>>n>>d;
    struct st v[n];
    for(int i=0;i<n;i++){
        lint t,x,y;
        cin>>t>>x>>y;
        v[i]={t,y,x};
    }
    sort(v,v+n,comp);

    lint extra;
    lint speed=v[0].y,cost=v[0].x,time=v[0].t;
    for(int i=1;i<n;i++){
        extra=(v[i].t-time)*speed;
        if(d<=0)break;
        if(v[i].y>speed){
            speed=v[i].y;
            cost+=v[i].x;
        }
        time=v[i].t;
        d=d-extra;
    }
    cout<<cost;
    return 0;
    
}