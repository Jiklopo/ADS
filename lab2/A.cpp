#include "B.h"

using namespace std;


pair<int, int> addition(int a, int b, int c, int d){
    if(b == d)
        return make_pair(a + c, b);
    else if (b > d && b % d == 0)
        return make_pair(a + c * (b / d), b);
    else if (b < d && d % b == 0)
        return make_pair(c + a * (d / b), d);
    else
    {
        int gcd = GreatestComDiv(b, d);
        if (gcd > 1)
            return make_pair(a * gcd + c * gcd, gcd);
        else
            return make_pair(a * d + c * b, b * d);
    }
}
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    pair<int, int> m = addition(a, b, c, d);
    int gcd = GreatestComDiv(m.first, m.second);
    if(gcd == 1)
        cout << m.first << " " << m.second;
    else
        cout << m.first/gcd << " " << m.second/gcd;
    return 0;
}

