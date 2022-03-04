#include <iostream>

using namespace std;

int main()
{
    long long n, m, a, b, time;
    cin >> n >> m;
    cin >> a;
    time = a - 1;
    b = a;
    for(int i = 1 ; i < m ; i++)
    {
        cin >> a;
        if (a >= b)
            time += a - b;
        else
            time += n - b + a;
        b = a;
    }

    cout << time << endl;
    return 0;
}
