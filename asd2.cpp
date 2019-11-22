#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a;
    for(int i = 0; i < 5000; i++)
    {
        a = rand() % 6;
    }
    cout << a;

    map<int, int>::iterator it = m.begin();
    for(it; it!=m.end(); it++)
    {
        res[it->first] += it->second;
    }

}