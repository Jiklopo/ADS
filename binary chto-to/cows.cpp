#include <iostream>
using namespace std;
int cows, n;
int a[1000];
bool check(int x)
{
    if(cows == 0)
        return a[n - 1] - a[0] <= x;
    int d = n / cows;
    for(int i = 0; i < cows; i++)
    {
        if(a[d * (i + 1)] - a[d * i] <= x)
            return false;
    }
    return true;
}

int main()
{
    cin >> n >> cows;
    cows -= 2;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int l = 1, r = a[n - 1];
    while(r - l > 1)
    {
        int mid = (r + l) / 2 + 1;
        if(check(mid)){
            l = mid;
            printf("%i, %i, %i\n", l, mid, r);
        }
        else
            r = mid - 1;

    }
    cout << l;
}