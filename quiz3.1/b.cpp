#include <iostream>
using namespace std;

int const N = 1000;
int vn = 1, to[26][N], cnt[N];
// initially array to[][] is filled with zeros
// "to[a][v] = u" means from v to u
// there is an edge with letter 'a'
// e.g. if:
//    v letter a
// to[a][1] = 2 - son of 1 by letter a
//       ^ vertex 1
// to[b][1] = 3 - son of 1 by letter b
// to[b][2] = 4 - son of 2 by letter b
// to[c][1] = 0 - means no son of 1 by letter c
//    (1)
//    / \
//  a/   \b
//  /     \
//(2)     (3)
// \
//  \b
//   \
//   (4)

int newVertex() {
	// give new id to vertex
	// vn++;
	// return vn;
	return ++vn;
}

void trie_add(string s) {
	int v = 1; // root
	int n = s.length();
	for (int i = 0; i < n; i++) {
		// take next char
		char ch = s[i] - 'a';

		// no transition
		if (to[ch][v] == 0) { // no vertex by letter ch
			to[ch][v] = newVertex();
		}
		v = to[ch][v]; // transition to v
	}
}

bool check(string s)
{
    int v = 1;
    int n = s.length();
    for(int i = 0; i < n - 1; i++)
    {
        char c = s[i] - 'a';
        v = to[c][v];
        if (v == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    trie_add(s);
    int n;
    cin >> n;
    string str[n];
    //у тебя есть бор уже. Просто потом каждый сумму всех двух стрингов проверяешь есть ли вснутри
    for(int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(check(str[i] + str[j]))
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}