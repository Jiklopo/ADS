#include <iostream>
using namespace std;

int a[10001];
int n;

int find_first(int x)
{
    int l = 1, r = n;
    if(a[l] == x)
        return l;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(a[mid] >= x)
            r = mid;
        else
            l = mid;
    }
    if(a[r] == x)return r;
    return 0;
}

int find_last(int x)
{
    int l = 1, r = n;    
    if(a[r] == x)
        return r;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(a[mid] <= x)
            l = mid;
        else
            r = mid;
    }
    return l;
}

int main()
{
    int k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        int first = find_first(x);
        if(first != 0)
            printf("%i %i\n", first, find_last(x));
        else
            cout << 0 << endl;
    }
    return 0;
}