#include <iostream>
using namespace std;
/*
https://informatics.msk.ru/mod/statements/view3.php?id=192&chapterid=4#1
*/

string find(int *a, int n, int x)
{
    if(a[0] == x || a[n - 1] == x)
        return "YES";
    if(x < a[0])
        return "NO";
    if(x > a[n - 1])
        return "NO";
    int l = 0;
    int r = n - 1;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
            return "YES";
        if(a[mid] > x)
            r = mid;
        if(a[mid] < x)
            l = mid;
    }
    return "NO";
}
main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        cout << find(a, n, x) << endl;
    }
    return 0;
}