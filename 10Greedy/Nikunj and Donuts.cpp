#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Write your code here
int n;cin>>n;
int *arr=new int[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
long long sum=0;
sort(arr,arr+n,greater<int>());
for(int i=0;i<n;i++){
  sum+=((long)1<<i)*arr[i];
}
 cout<<sum;
  return 0;
}