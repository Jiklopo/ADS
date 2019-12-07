#include <iostream>
#include <algorithm>

using namespace std;

int n;
pair<int, int> find(int c[])
{
    int max1 = c[0], max2 = max1;
    
    for(int i = 0; i < n; i++)
    {
        if(c[i] > max1)
        {
            max2 = max1;
            max1 = c[i];
        }
        if(c[i] > max2)
            max2 = c[i];
    }
    return make_pair(max1, max2);
}

int main()
{
    cin >> n;
    int a[n];
    int b[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
        cin >> b[i];
    pair<int, int> p1 = find(a);
    pair<int, int> p2 = find(b);
    cout << min((p1.first + p2.first) - (p1.second + p2.second), (p1.second + p2.first) - (p1.first + p2.second));
    return 0;
}