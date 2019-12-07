#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixFunc(string s, int leni)
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
    return res;
}

int main()
{
    vector<int> v =  prefixFunc("haha:dedeltalphahahahototatalpha", 4);
    for(int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
}