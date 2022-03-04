#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n < 26)
        cout << "NO" << endl;
    else
    {
        for (int i = 0 ; i < n ; i++)
            s[i]= tolower(s[i]);
        char x = 'a';
        for (int i = 0 ; i <= 26 ; i++)
        {
            for (int j = 0 ; j < n ; j++)
                if(s[j] == x)
                {
                    sum++;
                    break;
                }
            x++;
        }
        if (sum == 26)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
