#include <iostream>

using namespace std;

int main()
{
    // 입력
    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int dirR = w - x;

    int dirX;
    if (dirR > x)
        dirX = x;
    else dirX = dirR; 

    int dirT = h - y;
    int dirY;

    if (dirT > y)
        dirY = y;
    else
        dirY = dirT; 

    if (dirX > dirY)
        cout << dirY;
    else
        cout << dirX;

    return 0;   
}
