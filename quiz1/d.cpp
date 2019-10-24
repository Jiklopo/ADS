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
    int length = max(m, n) + 1; //берем длину как максимум из m и n, потому что про них ничего не сказано,
    int fib_numbers[length]; //то есть m > n or m < n
    fib_numbers[0] = 0;
    fib_numbers[1] = 1;
    for(int i = 2; i <= length; i++)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];//генерируем последовательность фибоначчи
    }
    //0 1 1 2 3 5 8 13 21 34 55 89 144 
    //0 1 2 3 4 5 6 7  8  9  10 11 12  13
    int a = fib_numbers[min(m, n)];
    int b = fib_numbers[max(m, n)];
    for(int i = 1; i <= a; i++)//least common multiple - наименшьее число, которое делится без остатка и на m и на n;
    {
        if((b * i) % a == 0)
        {
            cout << b * i;
            return 0;
        }
    }
}