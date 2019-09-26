#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    if(m == 0){
        cout << 0;
        return 0;
    }
    int fib_numbers[max(m, n) + 1];
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;
    for(int i = 2; i <= n + 1; i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    //0 1 1 2 3 5 8 13 21 34 55 89 144 
    //0 1 2 3 4 5 6 7  8  9  10 11 12  13
    int a = fib_numbers[min(m, n)];
    int b = fib_numbers[max(m, n)];
    for(int i = 1; i <= a; i++)
    {
        if((b * i) % a == 0)
        {
            cout << b * i;
            return 0;
        }
    }
    return 0; 
}