#include "H.cpp"

int main(){
    int x;
    cin >> x;
    cout << x << " = ";
    for(int i = 2; i * i <= x || x == 1; i++)
    {
        if (x % i == 0)
        {
            int exp = 0;
            while(x % i == 0)
            {
                x /= i;
                exp ++;
            }
            cout << i << "^" << exp << " ";
        }
    }
    if(x > 1)
        cout << x << "^1";
    return 0;
}