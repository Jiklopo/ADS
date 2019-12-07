#include <iostream>
using namespace std;

int main()
{
    int pen, apple;
    cin >> pen >> apple;
    int lol = 100500;
    int trash = 0;
    for(lol; apple != min(apple, trash); lol++)
    {
        for(lol; pen == max(pen, apple); lol++)
            pen = pen - apple;
        int pineapple = pen;
        pen = apple;
        apple = pineapple;
    }
    cout << pen + apple;
    return 0;
}