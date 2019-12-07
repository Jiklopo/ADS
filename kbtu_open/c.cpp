#include <iostream>
using namespace std;

int a[100001];
int n, q, l, r;

int gcd(int x, int y)
{
    if(y == 0)
        return x;
    return gcd(x, x % y);
}

void replace(int x)
{
    for(int i = l; i <= r; i++)
        a[i] = x;
}

void replaceGCD(int x)
{
    for(int i = l; i <= r; i++)
        a[i] = gcd(a[i], x);
}

int findMax()
{   
    if(a[l] == a[r])
        return a[l];
    int max = a[l];
    for(int i = l + 1; i <= r; i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}

int findSum()
{
    if(a[l] == a[r])
        return a[l] * (r-l);
    int sum = 0;
    for(int i = l; i <= r; i++)
        sum += a[i];
    return sum;
}

int main()
{
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 0; i < q; i++)
    {
        int t, x;
        cin >> t;
        if(t == 1)
        {
            cin >> l >> r >> x;
            replace(x);            
        }
        else if(t == 2)
        {
            cin >> l >> r >> x;
            replaceGCD(x);
        }
        else if(t == 3)
        {
            cin >> l >> r;
            cout << findMax() << endl;
        }
        else if(t == 4)
        {
            cin >> l >> r;
            cout << findSum() << endl;
        }
    }
    return 0;
}