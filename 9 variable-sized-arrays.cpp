#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,k,n,q;
    cin>>n>>q;
    vector<int> a[n];
    for(i=0; i<n;i++){
        cin>>k;
        a[i][k];
        for(int j=0;j<k;j++){
            int e;
            cin>>e;
            a[i].push_back(e);
        }
    }

    for(int d=0;d<q;d++){
        cin>>i>>k;
        cout<<a[i][k]<<"\n";
    }
    return 0;
}

