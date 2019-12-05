#include <iostream>

using namespace std;

int n;
int a[1000];

void show()
{
    for(int i = 1; i < n; i++)
        cout << a[i] << " ";
}

void heapDown(int v)
{
    while(v < n)
    {
        int v1 = v;
        if(2*v < n && a[v1] < a[2*v])
        {
            v1 = 2*v;
        }
        if(2*v+1 < n && a[v1] < a[2*v + 1])
            v1 = 2*v + 1;

        if(v1 == v)
            return;
        swap(a[v1], a[v]);
        v = v1;
    }
}

void heapUp(int v)
{
    while(v > 1 || a[v] < a[v/2])
    {
        if(a[v/2] < a[v])
        {
            swap(a[v / 2], a[v]);
            v = v / 2;
            continue;
        }
        return;
    }
}

void build_heap()
{
    for(int i = n; i > 0; i--)
    {
        heapDown(i);
    }
    //show();
}

void add(int val)
{
    a[n] = val;
    n++;
    heapUp(n);
}


int pollMax()
{
    int max = a[1];
    swap(a[1], a[n]);
    n--;
    heapDown(1);
    return max;
}


int main()
{
    cin >> n;
    n++;
    for(int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    build_heap();
    while(n != 1)
    {
        int x, y;
        x = pollMax();
        y = pollMax();
        if(x == y)
            continue;
        add(x - y);
    }
    cout << a[1];
}