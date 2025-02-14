#include <iostream>
using namespace std;
#include <algorithm>

int main()
{
    int heights[9];
    for (int i = 0; i < 9; i++)
    {
        int h;
        cin >> h;
        heights[i] = h;
    }
    
    int p = 8, q = 7;
    while (true)
    {
        int sum = 0;
        for (int i = 0; i < 9; i++)
        {
            if (i != p && i != q)
                sum += heights[i];
        }

        if (sum != 100)
        {
            if (q > 0)
            {
                q--;
            }
            else if (p > 1)
            {
                p--;
                q = p - 1;
            }
            else
                return 0;
        }
        // 100 인 경우를 찾았을 때
        else
        {
            int arr[7];
            int point = 0;
            for (int i = 0; i < 9; i++)
            {
                if (i != p && i != q)
                {
                    arr[point] = heights[i];
                    point++;
                }
            }

            sort(arr, arr + 7);
            for (int i = 0; i < 7; i++)
            {
                cout << arr[i] << "\n";
            }

            return 0;
        }

    }

}
