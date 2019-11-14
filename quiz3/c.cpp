#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixFunc(string s)
{
    int len = s.length();
    vector<int> res = vector<int>(len);
    for(int i = 1; i < len; i++)
    {
        int j = res[i - 1];
        while(j > 0 && s[i] != s[j])
        {
            j = res[j];
        }
        if (s[i] == s[j])
            j++;
        res[i] = j;
    }
    return res;
}

int main()
{
    string s;
    cin >> s;
    vector<int> v = prefixFunc(s);
    int len = s.length();
    cout << len - v[v.size() - 1];
    return 0;
}