#include <bits/stdc++.h>
using namespace std;

int stringToInt(string s)
{
    int res = 0;
    for(int i = 0; i < s.length(); i++)
    {
        res += (s[i] - '0') * (pow(10, s.length() - i - 1));
    }
    return res;
}

int power11(int pow)
{
    int res = 1;
    for(int i = 0; i < pow; i++)
    {
        res *= 11;
    }
    return res;
}

int hashcode(string s)
{
    int res = 0;
    int n = s.length();
    for(int i = 0; i < n; i++)
    {
        res = (res + (s[i] - 47) * power11(i)) % (int)(1e9 + 7);
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    cout << hashcode(s);
}