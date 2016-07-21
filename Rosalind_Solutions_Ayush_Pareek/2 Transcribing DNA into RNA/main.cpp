#include <iostream>
#include <fstream>
using namespace std;

int main() {
    freopen("input.txt","r+",stdin);
    freopen("output.txt","w",stdout);
    string t;
    cin>>t;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='T')
        {
                cout<<"U";
                continue;
        }
        cout<<t[i];
    }

    return 0;
}
