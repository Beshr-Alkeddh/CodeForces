#include <iostream>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int l = n.length();
    for(int i = 0 ; i < l ; i++)
          if(n[i]=='W' && n[i+1]=='U' && n[i+2]=='B')
          {
               cout << " ";
               i += 2;
          }
          else
              cout << n[i];
    return 0;
}
