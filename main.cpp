#include <iostream>
using namespace std;
int main()
{
    long long t,x,y,s;
    cin >> t;
    for (int i = 0 ; i < t ; i++)
    {
        cin >> x >> y;
        s = y * y;
        if (x%2 == y%2){
            if (s <= x)
                cout << "YES" <<endl;
            else
                cout << "NO" <<endl;
         }
         else
             cout << "NO" <<endl;
     }
    return 0;
}



