#include <iostream>
using namespace std;
int main()
{
    string s;
    getline(cin , s);
    int l = 0;
    for (int i = 1 ; i < s.length() - 1 ; i += 3)
    {
        bool f = false;
        for (int j = i + 3 ; j < s.length() - 1 ; j += 3)
            if (s[i] == s[j])
            {
                f = true;
                break;
            }
        if (f == false)
            l++;
    }
    cout << l << endl;
    return 0;
}
