#include <iostream>

using namespace std;

int main()
{
    int n; // 참가자 수
    cin >> n;

    int shirts[6] ; // 사이즈별 신청자의 수
    for (int i = 0; i < 6; i++)
        cin >> shirts[i];

    int shirtsSet, penSet; // 티셔츠와 펜의 묶음 수
    cin >> shirtsSet >> penSet;

    // 셔츠 주문 계산
    int shirtsOrder = 0; // 셔츠 주문 횟수
    for (int i = 0; i < 6; i++)
    {
        int cur = shirts[i];

        shirtsOrder += cur / shirtsSet;

        int left = cur % shirtsSet;
        if (left > 0)
            shirtsOrder++;
    }

    // 펜 주문 계산
    int penOrder = 0; // 펜 묶음 주문 횟수
    int leftPenOrder = 0; // 펜 낱개 주문 횟수
    
    penOrder = n / penSet;
    leftPenOrder = n % penSet;

    cout << shirtsOrder << endl;
    cout << penOrder << " " << leftPenOrder;
}
