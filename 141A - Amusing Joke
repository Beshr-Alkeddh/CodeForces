#include <iostream>

using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b >> c;
    a += b;
    if (a.length() != c.length())
        cout << "NO" << endl;
    else
    {
        int sum = 0;
        for (int i = 0 ; i < a.length() ; i++)
        {
            for (int j = 0 ; j < c.length() ; j++)
            {
                if(a[i] == c[j])
                {
                    sum++;
                    c[j] = ' ';
                    break;
                }
            }
        }
        if (sum == a.length())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


    return 0;
}
