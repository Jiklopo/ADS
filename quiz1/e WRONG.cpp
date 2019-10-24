#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    if(n == 1)
    {
        cout << 1;
        return 0;
    }
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    int cheaters = 0;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(a[i] > a[j]){

                cheaters++;
                break;
            }
        }
    }

    cout << n - cheaters;
}