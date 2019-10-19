#include <iostream> 
#include <cmath>
using namespace std;

int n;
double a;

double find()
{
    double l = 0, r = a, mid, res;
    while(res != a)
    {
        mid = (l + r) / 2;
        res = pow(mid, n);
        cout << mid << endl;
        if(res > a)
        {
            r = mid;
        }
        else if(res < a)
        {
            l = mid;
        }
    }
    return mid;
}

int main()
{
    cin >> a >> n;
    cout << find();
    return 0;
}