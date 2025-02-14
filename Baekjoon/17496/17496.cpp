#include <iostream>
using namespace std;

int N, T, C, P;

int main()
{
    cin >> N >> T >> C >> P;
    
    cout << (N - 1) / T * C * P;
}