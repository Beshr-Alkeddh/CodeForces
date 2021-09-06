#include <iostream>
using namespace std;
int main()
{
long long n,m,a,b,c,d;
cin >>n >> m >> a;
b=n/a;
c=m/a;
if (n%a != 0)
  ++b;
if (m%a != 0)
  ++c;
d=b*c;
cout << d << endl;
return 0;
}
