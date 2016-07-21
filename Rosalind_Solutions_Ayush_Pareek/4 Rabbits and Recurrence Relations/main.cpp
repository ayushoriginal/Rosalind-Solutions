#include <iostream>
#include <fstream>
#include<string>
#include <algorithm>
using namespace std;

int Fib(int n, int k)
{
    //Trivial Cases
    if (n==0)
        return 0;
    if (n==1)
        return 1;

    int arr[n+1]={0}; //For DP

    arr[1] = 1; //BASE CASE
    // Fn = Fn-1 + k*Fn-2

    for(int i=2;i<=n;i++)
    {
        arr[i] = arr[i-1] + k*arr[i-2];
    }
    return arr[n];
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,k;
    cin>>n;
    cin>>k;
    //Assuming valid input
    cout<<Fib(n,k);
    return 0;
}
