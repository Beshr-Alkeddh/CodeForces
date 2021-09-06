#include<iostream>
using namespace std;
int main()
{
     int a,b,c,d,m=0;
     cin >> a;
     for(int i=0; i<a ; i++)
     {
          cin >> b >> c >> d;
          if ((b==1&&c==1) || (b==1&&d==1) || (c==1&&d==1))
             ++m;
     }
     cout << m << endl;
     return 0;
}
