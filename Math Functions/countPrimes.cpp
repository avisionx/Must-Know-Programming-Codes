#include <bits/stdc++.h>

using namespace std;

//Count the number of prime numbers less than a non-negative number, n.

class Solution {
public:
    int countPrimes(int n) {
        vector<int> primes(n+1,1);
        int count=0;
        for (int i = 2; i*i < n; i++)
        {
            if(primes[i]){
                for (int j = i; j*i < n; j++){
                    primes[i*j] = 0;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(primes[i]){
                count++;
            }
        }
        return count;

    }
};

int main(){
    Solution s;
    int n;
    cin>>n;
    cout << s.countPrimes(n);

    return 0;
}