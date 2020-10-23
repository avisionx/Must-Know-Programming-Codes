#include<iostream>

using namespace std; 

int rev(int n, int reverse) 
{ 
    // base case 
    if (n == 0) 
        return reverse; 
    else
        {
        reverse = (reverse * 10) + (n % 10); 
        return rev(n / 10, reverse); 
        }
} 
  
int main() 
{ 
    int n;
    cout<<"Enter Number : ";
    cin>>n; 
    int temp = rev(n, 0); 
    if (temp == n) 
        cout << "yes" << endl; 
    else
        cout << "no" << endl; 
    return 0; 
}