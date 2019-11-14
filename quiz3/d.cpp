#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixFunc(string s, int leni)
{
    int len = s.length();
    vector<int> res = vector<int>(len);
    for(int i = 1; i < len; i++)
    {
        int j = res[i - 1];
        while(j > 0 && s[i] != s[j])
        {
            j = res[j + leni - 1];
        }
        if (s[i] == s[j])
            j++;
        res[i] = j;
    }
    return res;
}

int main()
{
    string s1, s2;
    string parasite;
    cin >> s1 >> s2 >> parasite;
    vector<int> v1, v2;
    v1 = prefixFunc(parasite + ":" + s1, parasite.length());
    v2 = prefixFunc(parasite + ":" + s2, parasite.length());
    int cnt = 0;
    for(int i = 0; i < min(v1.size(), v2.size()); i++)
    {
        if(v1[i] == parasite.length() && v2[i] == v1[i])
            cnt++;
    }
    cout << cnt;
    return 0;
}