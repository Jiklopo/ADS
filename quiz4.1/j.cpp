#include <iostream>
using namespace std;
const int N = 100000;

int vn = 1, to[26][N], cnt[N];

int newVertex() {
	// give new id to vertex
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
        cnt[v]++;
	}
}

int trie_find(string s)
{
    int v = 1;
	int n = s.length();
	for (int i = 0; i < n; i++) {
		char ch = s[i] - 'a';

		// no transition
		if (to[ch][v] == 0) { // no vertex by letter ch
			return 0;
		}
		v = to[ch][v];
	}
    return cnt[v];
}

int main() {

    int n;
    cin >> n;
    string choice, s;
    for(int i = 0; i < n; i++)
    {
        cin >> choice;
        cin >> s;
        if(choice == "find")
        {
            cout << trie_find(s) << endl;
        }
        else if(choice == "add")
            trie_add(s);
    }
	return 0;
}