#include <iostream>
#include <algorithm>
using namespace std;
int a[10001];
int n, k;

int main()
{
    cin >> n >> k;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    // for(int i = 0; i < n; i++)
    //     cout << a[i] << ' ';
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        bool bd = true;
        if(a[l] >= x){
            r = l;
            bd = false;
        }
        while(r - l > 1 && bd)
        {
            int mid = (l + r) / 2;
            if(a[mid] == x)
            {
                r = mid;
                break;
            }
            if(a[mid] < x)
                l = mid;
            else
                r = mid;
        }
        cout << a[r] << endl;
    }
    return 0;
}
