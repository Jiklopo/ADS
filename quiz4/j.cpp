#include <bits/stdc++.h>
using namespace std;
//hashes

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
    int n;
    cin >> n;
    vector<int> numbers, hashcodes;

    for(int i = 0; i < 2 * n; i++)
    {
        string s;
        cin >> s;
        numbers.push_back(stringToInt(s));
        hashcodes.push_back(hashcode(s));
    }

    for(int i = 0; i < (2 * n); i++)
    {
        for(int j = 0; j < 2 * n; j++)
        {
            if(i == j)
                continue;
            if(numbers[i] == hashcodes[j])
            {
                cout << "Hash of string " << numbers[j] << " is " << numbers[j] << endl; 
            }

        }
    }
    return 0;
}