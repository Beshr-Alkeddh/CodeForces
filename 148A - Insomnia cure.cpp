#include <iostream>
using namespace std;
int main()
{
    int k , l , m , n , d , s = 0 ;
    cin >> k >> l >> m >> n >> d;
    for (int i = 1 ; i <= d ; i++)
    {

        if(i%k != 0 && i%l !=0 && i%m != 0 && i%n != 0)
             s++;
    }
    s = d - s;
    cout << endl << s << endl;
    
    return 0;
}
