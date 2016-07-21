#include <iostream>
#include <fstream>
#include<string>
#include <algorithm>
using namespace std;

string getComplement(string s)
{
    string c="";
    /* 'A' and 'T' are complements of each other, as are 'C' and 'G'.*/
    for(int i=0;i<s.length();i++)
    {
        if (s[i] == 'A')
            c+="T";
        else if (s[i] == 'T')
            c+="A";
        else if (s[i] == 'C')
            c+="G";
        else if (s[i] == 'G')
            c+="C";
    }
    return c;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string t;
    cin>>t;
    reverse(t.begin(), t.end());
    cout<<getComplement(t);
    return 0;
}
