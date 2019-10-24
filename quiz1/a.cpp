#include <iostream>

using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i * i < n; i++)
    {
        if(n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            cnt++;
            while(n % i == 0)
                n /= i;//тут мы выкидываем все числа кратные двойке, потом тройке и т.д.
                //как решето Эратосфена
        }
    }
    if(n > 1)
        cnt++;
    cout << cnt;
}