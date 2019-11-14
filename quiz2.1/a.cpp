#include <iostream>
using namespace std;
int a[10];
int n, k;



int main()
{
    cin >> n;
    int sum = 0;
    for(int i = 2; i <= n; i++)
    {
        if(n % i == 0)
        {
            while(n % i == 0)
            {
                n /= i;
                sum += i;
            }
        }
        if ( n == 1) break;
    }

    //cout << sum << endl;

    for(int i = 2; i <= sum; i++)
    {
        if(sum % i == 0)
        {
            while(sum % i == 0)
            {
                sum /= i;
                cout << i << ' ';
            }
        }
    }
    return 0;
}
