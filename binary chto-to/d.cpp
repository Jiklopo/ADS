#include <iostream>
using namespace std;
/*
https://informatics.msk.ru/mod/statements/view3.php?id=192&chapterid=111728#1
*/

pair<int, int> find(int *a, int n, int x)
{
    pair<int, int> fail = make_pair(0, 0);
    if(x < a[0])
        return fail;
    if(x > a[n])
        return fail;
    int left = 0;
    int right = 0;
    if(a[n] == x)
        right = n;
    if(a[1] == x)
        left = x;
    if(right != 0 && left != 0)
        return make_pair(left, right);
    int l = 1;
    int r = n;
    while(r - l > 1)
    {
        int mid = (l + r) / 2;
        if(a[mid] == x)
            l = mid;
        if(a[mid] > x)
            r = mid;
        if(a[mid] < x)
            l = mid;
    }
    if(a[l] != x && a[r] != x)
        return fail;
    if(right == 0)right = l;
    while(r - l > 1)
    {
        int mid = (l + r) / 2 + 1;
        if(a[mid] == x)
            r = mid;
        if(a[mid] > x)
            r = mid;
        if(a[mid] < x)
            l = mid;
    }
    if(a[l] != x && a[r] != x)
        return fail;
    if(left == 0)left = l;
    return make_pair(left, right);
    
}
main()
{
    int n, k;
    cin >> n >> k;
    int a[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        pair<int, int> res = find(a, n, x);
        if(res.first != 0)
            cout << res.first << " " << res.second << endl;
        else 
            cout << 0 << endl;
    }
    return 0;
}