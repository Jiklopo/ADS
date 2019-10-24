#include <iostream>
using namespace std;
/*
https://informatics.msk.ru/mod/statements/view3.php?id=192&chapterid=2#1
*/
int find(int *a, int n, int x)
{
    int r = n - 1;
    int l = 0;
    if(a[r] <= x)
        return a[r];
    if(a[l] == x)
        return a[l];

    while(r - l > 1)
    {
        int mid = (r+l)/2;
        if(a[mid] == x)
        {
            return a[mid];
        }
        if(a[mid] > x)
        {
            r = mid;
        }
        else if(a[mid] < x)
        {
            l = mid;
        }
    }
    if(a[l] - x <= a[r] - x)
        return a[l];
    return a[r];
}

int main()
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