#include <iostream>
#include <string>
using namespace std;

string s1, s2;

bool check(int index)
{
    for(int i = index; i - index < s2.length(); i++)
    {
        if(s1[i] != s2[i - index])
            return false;
    }
    return true;
}

int main()
{
    string c1, c2;
    cin >> c1 >> c2;
    if(c1.length() >= c2.length())
    {
        s1 = c1;
        s2 = c2;
    }
    else
    {
        s1 = c2;
        s2 = c1;
    }
    int s1len = s1.length();
    int s2len = s2.length();
    for(int i = 0; i < s1len; i += 1)
    {
        if(check(i))
        {
            cout << s1;
            return 0;
        }
    }
        int cur = 0;
    for(int i = s1len - s2len; i < s1len; i++)
    {
        if(s1[i] == s2[cur])
        {
            cur++;
        }
        else
        {
            cur = 0;
        }        
    }
    cout << s1 + s2.substr(cur);
}