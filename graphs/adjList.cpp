#include <iostream>
#include <vector>
using namespace std;


int main()
{
    int m, n;
    cin >> n >> m;
    vector<int> a[n + 1];
    for(int i = 1; i <= m; i++)
    {
        int b, c;
        cin >> b >> c;
        a[b].push_back(c);
        a[c].push_back(b);
    }
    for(int i = 1; i <= n; i++)
    {
        cout << a[i].size() << ' ';
    }
    return 0;
}