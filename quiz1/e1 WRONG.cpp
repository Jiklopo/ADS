#include <iostream>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return 0;
    }
    queue<int> q1;
    queue<int> q2;
    for(int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        q1.push(a);
    }

    
    int cheaters = 0;
    for(int i = 0; !q1.empty() ; i++)
    {
        q2 = q1;
        q2.pop();
        for(int j = 0; !q2.empty(); j++)
        {
            if(q2.front() < q1.front())
            {
                cheaters++;
                break;
            }
            q2.pop();
        }
        q1.pop();
    }

    cout << n - cheaters;
}