#include <iostream>
#include <fstream>
#include<string>
#include <algorithm>
#include<map>
using namespace std;


int main()
 {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s,t;
    cin>>s;
    cin>>t;
    int d=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=t[i])
            d++;
    }
    cout<<d;

    return 0;
}
