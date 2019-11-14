#include <iostream>
#include <vector>
using namespace std;

vector<int> prefix_function (string s) {
	int n = (int) s.length();
	vector<int> pi(n);
	for (int i=1; i<n; i++) 
    {
		int j = pi[i-1];
		while (j > 0 && s[i] != s[j])
			j = pi[j-1];
		if (s[i] == s[j])  
            j++;
		pi[i] = j;
	}
	return pi;
}

int main()
{
    //find s1 in s2
    string s1, s2;
    cin >> s1 >> s2;
    vector<int> v = prefix_function(s2 + ':' + s1);
    int len = s2.length();
    for(int i = len; i < v.size(); i++)
    {
        if(v[i] == len)
            cout << i - len*2 << ' ';

    }
    return 0;
}
