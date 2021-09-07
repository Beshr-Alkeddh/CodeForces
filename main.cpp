#include <iostream>
using namespace std;
int main()
{

int t,sum,x,y;
cin >> t;
int * a = new int[t];
for (int i = 0 ; i < t ; i++)
{
    cin >> a[i];
    cout << endl;
}

for (int i = 0 ; i < t ; i++)
{
  sum = 0;
  x = a[i];
  for (int j = 1 ; j <= a[i] ;j *= 10)
  {
     y = (x%10)*j;
     x = x/10;
     if (y != 0)
        sum++;
  }
  cout << sum << endl;
  x = a[i];
  for (int j = 1 ; j <= a[i] ;j *= 10)
  {
     y = (x%10)*j;
     x = x/10;
     if (y != 0)
        cout << y << " ";
   }
   cout << endl;
}
 delete [] a;

return 0;
}
git remote add origin https://github.com/Beshrkd/Solution---Sum-of-round-numbers-CodeForces-.git
 git Branch -M main
git push -u origin main
