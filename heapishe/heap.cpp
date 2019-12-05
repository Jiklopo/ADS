#include <iostream>

using namespace std;

int n;
int a[1000];

void show()
{
    for(int i = 1; i < n; i++)
        cout << a[i] << " ";
}

void heapify_down(int v)
{
    while(v < n)
    {
        int s = v;
        if(2*v < n && a[s] < a[2*v])
        {
            s = 2*v;
        }
        if(2*v+1 < n && a[s] < a[2*v + 1])
            s = 2*v + 1;

        if(s == v)
            return;
        swap(a[s], a[v]);
        v = s;
    }
}

void heapify_up(int v)
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
        heapify_down(i);
    }
    show();
}

void add(int val)
{
    a[n] = val;
    n++;
    heapify_up(n);
    show();
}


void removeMax()
{
    swap(a[1], a[n]);
    n--;
    heapify_down(1);
    show();
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
    int b;
    cin >> b;
    add(b);
    removeMax();
    return 0;
}