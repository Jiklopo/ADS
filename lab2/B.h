#include <iostream>
using namespace std;

int GreatestComDiv(int a, int b){
    if (b == 0)
        return a;
    else
        return GreatestComDiv(b, a % b);
}