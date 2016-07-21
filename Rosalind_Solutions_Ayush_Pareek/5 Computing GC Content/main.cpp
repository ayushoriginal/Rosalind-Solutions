#include <iostream>
#include <fstream>
#include<string>
#include <algorithm>
#include<map>
using namespace std;

double getGC(string DNA)
{
    double sum=0;
    for(int i=0;i<DNA.length();i++)
    {
        if(DNA[i] == 'G' || DNA[i] == 'C' )
            sum++;
    }
    return (sum/DNA.length())*100;
}
int main()
 {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    map<double,string> m;
    int t=10;
    string FASTA,DNA;
    while(t--)
    {
        cin>>FASTA;
        cin>>DNA;
        m[getGC(DNA)] = FASTA;
    }
  /*  for(map<double,string>::iterator ii= m.begin();ii!=m.end(); ++ii)
    {
        cout<<ii->first<<endl<<ii->second<<endl;
    }*/
    cout<<m.rbegin()->second<<endl;
    cout<<m.rbegin()->first; //reverse iterator gives highest value


    return 0;
}
