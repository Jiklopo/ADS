#include <iostream>
using namespace std;
//binsearch

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n * m];
    for(int i = 0; i < n * m; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    int l = 0, r = n * m, mid;

    while(r - l > 1)
    {
        mid = (l + r) / 2;
        if(a[mid] > k)
        {
            r = mid;
        }
        else if(a[mid] < k)
        {
            l = mid;
        }
        else if(a[mid] == k)
        {
            cout << "true";
            return 0;
        }
    }
    string asdf[] = {"false", "true"};
    cout << asdf[a[mid]==k];
    return 0;
}