#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main()
{
    map<string, float> rankScore {
        {"A+", 4.5 }, {"A0", 4.0 }, 
        {"B+", 3.5 }, {"B0", 3.0 }, 
        {"C+", 2.5 }, {"C0", 2.0 }, 
        {"D+", 1.5 }, {"D0", 1.0 }, 
        {"F", 0.0 },
    };

    float sum = 0.0;
    float scoreSum = 0.0f;

    for (int i = 0; i < 20; i++)
    {
        string subject;
        float score;
        string rank;

        cin >> subject >> score >> rank;

        if (rank == "P")
            continue;
        
        sum += score * rankScore[rank];
        scoreSum += score;
    }

    float result = sum / scoreSum;
 
    cout << result;
}