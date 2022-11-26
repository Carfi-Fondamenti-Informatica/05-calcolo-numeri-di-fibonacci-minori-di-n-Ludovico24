#include <iostream>
using namespace std;

int main() {
   int a=1, b=1, c, n;
cin >> n;
cout << a << endl << b << endl;
for (int i=0; i<=n; i++) {
    c= a+b;
    cout << c << endl;
    a=b;
    b=c;
}     
   return 0;
}
