#include<iostream>
using namespace std;

class Solution {
public:
	int reverse(int x) {
		long num = 0;

		while (x)
		{
			num *= 10;
			num += (x % 10);
			x /= 10;
		}
		
		return num > INT_MAX || num < INT_MIN ? 0 : num;
	}
};

int main()
{
	int x;
	cin >> x;
	Solution s;
	cout << s.reverse(x);

}