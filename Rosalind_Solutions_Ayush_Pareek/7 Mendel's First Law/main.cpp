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
    double k,m,n;
    cin>>k;
    cin>>m;
    cin>>n;
    double sum = k+m+n;

    /*
        CASES with Probability of dominant phenotype::
        1)kk = 1
        2)km = 1
        3)kn = 1
        4)mm = 0.75
        5)nn = 0
        6)mn = 0.5
    */
     double kk = 1;
     double km = 1;
     double kn = 1;
     double mm = 0.75;
     double nn = 0;
     double mn = 0.5;

    //Probability of choosing a specific organism

    double pk = k/sum;
    double pm = m/sum;
    double pn = n/sum;

    double probability = pk*((k-1)/(sum-1))*kk + pk*((m)/(sum-1))*km + pk*((n)/(sum-1))*kn + pm*((k)/(sum-1))*km + pm*((m-1)/(sum-1))*mm+ pm*((n)/(sum-1))*mn+ pn*((k)/(sum-1))*kn + pn*((m)/(sum-1))*mn + pn*((n-1)/(sum-1))*nn;

    cout<<probability;
    return 0;
}
