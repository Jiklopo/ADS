#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;
        srand(time(0));
    for(int i = 0; i < 5000; i++)
    {
        int a = rand() % 6;
        m[a]++;
    }
    map<int, int>::iterator it = m.begin();
    for(it; it != m.end(); it ++)
    {
        cout << it->first << " " << it -> second << endl;
    }
    return 0;

}