#include <iostream>
using namespace std;
int m;
string toBeOrNotToBe(char c[], int len)
{
    bool visited_once[26], visited_twice[26];
    for(int i = 0; i < 26; i++)
    {
        visited_twice[i] = false;
        visited_once[i] = false;
    }
    
    for(int i = 0; i < len; i++)
    {
        int cur = c[i] - 'a';
        if(!visited_once[cur])
            visited_once[cur] = true;
        else if(visited_once[cur])
            visited_twice[cur] = true;
    }
    for(int i = 0; i < len; i++)
    {
        int cur = c[i] - 'a';
        if(visited_twice[cur])
            continue;
        return c[i] + "";
    }
    return "-1";
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        char c[m];
        for(int j = 0; j < m; j++)
        {
            cin >> c[j];
            cout << toBeOrNotToBe(c, j + 1) << ' ';
        }
        cout << endl;
    }
    return 0;
}