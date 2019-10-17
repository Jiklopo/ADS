#include <iostream>
using namespace std;
int a[10001];
int q, k;
int cnt = 0;

void heap_down(int x)
{
    swap(a[x], a[1]);
    int s;
    while(true)
    {
        int s = x;
        if(a[x * 2] > a[x])
            s = x * 2;
        if(a[x * 2 + 1] > a[x])
            s = x * 2 + 1;
        if(s == x)
            return;
        swap(a[x], a[s]);
        x = s;
    }
}

void heap_up(int x)
{
    while(x > 1)
    {   
        if(a[x/2] < a[x])
        {
            swap(a[x], a[x/2]);
            x /= 2;
        }
        else
            return;        
    }
}

void add(int val)
{
    if(cnt < k)
    {
        cnt++;
        a[cnt] = val;
        heap_up(cnt);
    }
    else
    {
        a[k + 1] = val;
        heap_down(0);
    }
}

int sum()
{
    int sum = 0;
    for(int i = 1; i <= k; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    cin >> q >> k;
    for(int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        if(s == "print")
            cout << sum() << endl;
        else if(s == "insert"){
            int asd;
            cin >> asd;
            add(asd);
            // for(int j = 1; j <= k; j++)
            // {
            //     cout << a[j] << endl;
            // }
        }
    }
}

