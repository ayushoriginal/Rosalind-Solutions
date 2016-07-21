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
    map<string,string> m;

    ifstream f;
    f.open("codon_table.txt");


    std::string codon,amino;
    while (f >> codon)
    {
        f>>amino;
        m[codon]=amino;
    }
    f.close();
    string s, mRNA;
    cin>>s;

    for(int i=0;i<s.length();i=i+3)
    {
        mRNA=s.substr(i,3);
        if(m[mRNA]=="Stop")
            break;
        cout<<m[mRNA];
        mRNA="";
    }
    return 0;
}
