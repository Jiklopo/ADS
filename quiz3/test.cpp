#include <iostream>
#include <vector>
using namespace std;
int prefixFunc(string s, int leni)
{
    int cnt = 0;
    int len = s.length();
    vector<int> res = vector<int>(len);
    for(int i = leni; i < len; i++)
    {
        int j = res[i - 1];
        while(j > 0 && s[i] != s[j])
        {
            j = res[j + leni - 1];
        }
        if (s[i] == s[j])
            j++;
        if (j == leni)
        {
            cnt++;
        }
        res[i] = j;
    }
    return cnt;
}

int main()
{
    string s1 = "ababaaba", s2 = "aba";
    cin >> s2 >> s1;
    vector<int> v =prefixFunc(s2 + ":" + s1, s2.length());
    for(int i = 0; i< v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}