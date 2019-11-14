#include <iostream>
using namespace std;
int q, k;
int cnt = 0;

/*
This is a heap, but with a Minimum instead of Maximum
*/

void heapUp(int *a, int v)
{
    while (v > 1 && (a[v] < a[v / 2] || a[v / 2] == 0)) {
		swap(a[v], a[v/2]);
		v /= 2;
	}
}

void heapDown(int *a, int v) {
	while (v <= k) {
		int l = 2 * v; // left son
		int r = 2 * v + 1; // right son
		int s = v; // max among a[v],a[l],a[r]

		/* let's find max */
		if (l <= k && a[l] > a[s])
			l = s;
		if (r <= k && a[r] > a[s])
			r = s;

		// if v is max, then everything is ok
		if (s == v)
			return;
		// go down to vertex s
		swap(a[v], a[s]);
		v = s;
	}
}

void add(int *a, int x)
{
    if(cnt <= k)
    {
        cnt++;
        a[cnt] = x;
        heapUp(a, cnt);
        return;
    }
    if(a[1] < x)
    {
        a[1] = x;
        heapDown(a, 1);
    }
}

int sum(int a[])
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
    int a[k + 1];
    for(int i = 0; i < q; i++)
    {
        string s;
        cin >> s;
        if(s == "insert"){
            int x;
            cin >> x;
            add(a, x);
            for(int j = 1; j <= k; j++)
            {
                cout << a[j] << endl;
            }
        }
        else if(s == "print")
        {
            cout << sum(a) << endl;
        }
    }
    return 0;
}