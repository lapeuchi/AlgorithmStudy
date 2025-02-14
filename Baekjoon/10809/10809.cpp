#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int arr[26] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
bool brr[26] = {false};
int main()
{
    string str;
    cin >> str;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'a' && !brr[0])
        {
            arr[0] = i;
            brr[0] = true;
        } 
        else if(str[i] == 'b' && !brr[1]) 
        {
           arr[1] = i;
           brr[1] = true; 
        }
        else if(str[i] == 'c' && !brr[2])
        {
            arr[2] = i;
            brr[2] = true;
        } 
        else if(str[i] == 'd' && !brr[3]) 
        {
            arr[3] = i;
            brr[3] = true;
        }
        else if(str[i] == 'e' && !brr[4]) 
        {
            arr[4] = i;
            brr[4] = true;
        }
        else if(str[i] == 'f' && !brr[5]) 
        {
            arr[5] = i;
            brr[5] = true;
        }
        else if(str[i] == 'g' && !brr[6]) 
        {
            arr[6] = i;
            brr[6] = true;
        }    
        else if(str[i] == 'h' && !brr[7])
        {
            arr[7] = i;
            brr[7] = true;
        } 

        else if(str[i] == 'i' && !brr[8])
        {
            arr[8] = i;
            brr[8] = true;
        } 
        else if(str[i] == 'j' && !brr[9]) 
        {
           arr[9] = i; brr[9] = true;
        } 
        else if(str[i] == 'k' && !brr[10])
        {
            arr[10] = i; brr[10] = true;
        } 
        else if(str[i] == 'l' && !brr[11])
        {
            arr[11] = i; brr[11] = true;
        } 
        else if(str[i] == 'm' && !brr[12])
        {
            arr[12] = i; brr[12] = true;
        } 
        else if(str[i] == 'n' && !brr[13])
        {
            arr[13] = i; brr[13] = true;
        } 
        else if(str[i] == 'o' && !brr[14])
        {
            arr[14] = i; brr[14] = true;
        } 
        else if(str[i] == 'p' && !brr[15])
        {
            arr[15] = i; brr[15] = true;
        } 
        else if(str[i] == 'q' && !brr[16]) 
        {
            arr[16] = i; brr[16] = true;
        }
        else if(str[i] == 'r' && !brr[17])
        {
            arr[17] = i; brr[17] = true;
        } 
        else if(str[i] == 's' && !brr[18])
        {
            arr[18] = i; brr[18] = true;
        }
        else if(str[i] == 't' && !brr[19]) 
        {
            arr[19] = i; brr[19] = true;
        }
        else if(str[i] == 'u' && !brr[20])
        {
           arr[20] = i; brr[20] = true;
        } 
        else if(str[i] == 'v' && !brr[21])
        {
            arr[21] = i; brr[21] = true;
        } 
        else if(str[i] == 'w' && !brr[22])
        {
            arr[22] = i; brr[22] = true;
        } 
        else if(str[i] == 'x' && !brr[23])
        {
            arr[23] = i; brr[23] = true;
        } 
        else if(str[i] == 'y' && !brr[24])
        {
            arr[24] = i; brr[24] = true;
        }
        else if(str[i] == 'z' && !brr[25])
        {
            arr[25] = i; brr[25] = true;
        } 
    }

    for(int i = 0; i < 26; i++)
        cout << arr[i] << " ";
}