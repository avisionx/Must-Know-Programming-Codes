#include<iostream>
using namespace std;

int pow(int,int);
int main()
{
    int a,b;
    cin >> a >> b;
    cout<<"a^b = " << pow(a,b);
    return 0;
}
int pow(int i,int j)
{   
    if (j == 0)
    {
        return 1;
    }
        
    else if(j%2 == 0)
    {
        return pow(i*i,j/2);
    }
    else
    {
        return i*pow(i,j-1);
    }
}