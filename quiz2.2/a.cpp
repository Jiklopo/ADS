#include <iostream>
using namespace std;


int main()
{
    int n, q;
    cin >> n >> q;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < q; i++)
    {
        int l, r, cnt = 1;
        cin >> l >> r;
        int prev = a[l];
        while(l < r)
        {
            l++;
            if(a[l] <= prev)
            {
                cnt++;
            }
            prev= a[l];
        }
        cout << cnt << endl;
    }
    return 0;
}