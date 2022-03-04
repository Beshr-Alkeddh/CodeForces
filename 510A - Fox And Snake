#include <iostream>

using namespace std;

int main()
{
    int n, m, s = 0;
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++)
    {
        if(i == 0 || i%2 == 0)
        {
            for(int j = 0 ; j < m ; j++)
                cout << "#";
        }
        else if(s == 0)
        {
            for(int j = 0 ; j < m-1 ; j++)
                cout << ".";
            cout << "#";
            s = 1;
        }
        else if(s == 1)
        {
            cout << "#";
            for(int j = 0 ; j < m-1 ; j++)
                cout << ".";
            s = 0;
        }
        cout << endl;
    }

    return 0;
}
