#include <iostream>
using namespace std;
int m, n, k;

struct training
{
    public:
        int fitnessID, sportID;
        int limit;

    training()
    {
        limit = 0;
    }
    training(int a, int b)
    {
        fitnessID = a;
        sportID = b;
        limit = 0;
    }
};

training tr[101];
int find(int a, int b)
{
    for(int i = 1; i <= m; i++)
    {
        if(tr[i].fitnessID == a && tr[i].sportID == b)
            return i;
    }
    return 0;
}

int main()
{
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++)
    {
        int a, b;
        cin >> a >> b;
        tr[i] = training(a, b);
    }
    int r;
    cin >> r;
    for(int i = 0; i < r; i++)
    {
        int a, c, lim;
        cin >> a >> c;
        int indices[c];
        for(int j = 0; j < c; j++)
        {
            int b;
            cin >> b;
            indices[j] = find(a, b);
        }
        cin >> lim;
        for(int j = 0; j < c; j++)
        {
            tr[indices[j]].limit = lim;
        }
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if(tr[x].limit == 0)
            cout << "no" << endl;
        else
        {
            tr[x].limit = 0;
            cout << "yes" << endl;
        }        
    }
    return 0;
}