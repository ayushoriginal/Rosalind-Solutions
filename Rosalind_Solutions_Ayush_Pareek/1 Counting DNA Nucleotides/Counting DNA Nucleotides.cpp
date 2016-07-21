#include <iostream>
#include <fstream>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
	char ch[5000] ={0};
	cin>>ch;
	int a=0,c=0,g=0,t=0;
	for (int i=0; i<5000 ; i++)
	{
		if (ch[i] == 'A')
			a++;
		if (ch[i] == 'C')
			c++;
		if (ch[i] == 'G')
			g++;
		if (ch[i] == 'T')
			t++;
	}
	cout<<a<<" ";
	cout<<c<<" ";
	cout<<g<<" ";
	cout<<t;
	return 0;
}
