#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string a,b,c;
    cin>>a>>b;
    cout<<a.size()<<" "<<b.size()<<endl;
    cout<<a+b<<endl;
    c = a+b;
    swap(c[0],c[a.length()]);
    c.insert(a.length()," ");
    cout<<c;
    return 0;
}
