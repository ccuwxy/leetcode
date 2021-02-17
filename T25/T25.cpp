#include<string>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        if (s.length() % 2 != 0)
            return false;
        stack<char> sta;
        
        for (int i = 0; i < s.length(); i++)
        {
            if (sta.empty())
                sta.push(s.at(i));
            else if (s.at(i) == sta.top() + ')' - '(' || s.at(i) == sta.top() + ']' - '[' || s.at(i) == sta.top() + '}' - '{')
                sta.pop();
            else
                sta.push(s.at(i));
        }
        return sta.empty();
    }
};