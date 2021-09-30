#include <iostream>
using namespace std;
int main()
{
    long n,s,x = 0;
    cin >> n;
    s = n / 100;
    n = n % 100;
    x += s;
    s = n / 20;
    n = n % 20;
    x += s;
    s = n / 10;
    n = n % 10;
    x += s;
    s = n / 5;
    n = n % 5;
    x += s;
    s = n / 1;
    n = n % 1;
    x += s;
    cout << x << endl;
    return 0;
}
