#include <iostream>
#include <stack>
#include <map>

using namespace std;

int main()
{
    int n;

    cin >> n;

    
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        map<char, bool> cv;
        string str;
        cin >> str;
       
        char prevKey = ' ';
        bool isGroupped = true;

        for (char c : str)
        {
            // 문자를 처음 발견하면 추가
            if (cv.find(c) == cv.end())
            {                
                // 이전 문자가 있으면
                if (cv.find(prevKey) != cv.end())
                {
                    cv[prevKey] = true;
                }   
                prevKey = c;

                cv.insert({c, false});
            }
                
            else if (cv[c] == true)
            {
                isGroupped = false;
                break;                
            }

        }

        if (isGroupped)
        {
            cnt++;
        }
            
    }

    cout << cnt;
}
