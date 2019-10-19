#include <iostream>
#include <cmath>
using namespace std;
double a[10000];
int n, h;
bool check(int k)
{
    int res = 0;
    for(int i = 0; i < n; i++)
    {
        res += ceil(a[i] / k);
    }
    return res <= h;
}

int main()
{
    cin >> n >> h;
    for(int i = 0; i< n; i++)
    {
        cin >> a[i];
    }
    int l = 0;
    int r = 1000000;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << r;
    return 0;
}