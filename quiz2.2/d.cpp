#include <iostream>
using namespace std;

int a[10000];
int n, q;
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int l, r;
        cin >> l >> r;
        int prev = 0, cnt = 0;
        while(l <= r)
        {
            if(a[l] > prev)
            {
                prev= a[l];
                cnt++;
            }
            l++;
        }
        cout << cnt << endl;
    }
    return 0;
}