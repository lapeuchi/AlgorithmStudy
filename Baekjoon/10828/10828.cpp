#include <iostream>
#include <string>

using namespace std;

int stack[10001];
int top = 0;

string str;
int num;

int empty()
    {
		if (top < 1)
		{
			return 1;
		}
		else return 0;
    }
    
void push(int x)
    {
        stack[top] = x;
        top++;
    }
	
    int pop()
    {
    	if (top-1 < 0)
    		return -1;
		
		--top;
  
       	int r = stack[top];
    	stack[top] = -1;
        return r;
    }

    int size()
    {
		return top;
    }

    int Top()
    {
    	if (top-1 < 0)
    		return -1;
		return stack[top-1];
    }

int main()
{

	int n;
	cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
		
        if(str == "push")
        {
        	cin >> num;
            push(num);
        }
        else if(str == "pop")
        {
        	cout << pop() << "\n";
        }
        else if (str == "size")
        {
        	cout << size() << "\n";
        }	
        else if (str == "empty") 
        {
        	cout << empty() << "\n";
        }   
        else if (str == "top")
        {
        	cout << Top() << "\n";
        }
    }

}