#include <iostream>
using namespace std;

int t, n;

bool isSuffix(string s1, string s2)
{
    int n = s2.length();
    return s1 == s2.substr(n - s1.length() - 1);
}

int main()
{
    cin >> t;
    for(int i = 0; i < t; i++)
    {
        cin >> n;
        bool cont = true;
        string a[n];
        for(int j = 0; j < n && cont; j++)
        {
            cin >> a[j];
            for(int k = 0; k <= j; k++)
            {
                if(isSuffix(a[k], a[j]))
                {
                    cont = false;
                    cout << "NO";
                    break;
                }
            }
        }
        cout << "YES";
    }
    return 0;
}