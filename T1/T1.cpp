#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> result;
		for (int i = 0; i < nums.size(); i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums.at(i) + nums.at(j) == target)
					return { i, j };
			}
		}
		return {};
	}
	vector<int> twoSum1(vector<int>& nums, int target) {
		unordered_map<int, int> hash;
		for (int i = 0; i < nums.size(); i++)
		{
			auto it = hash.find(target - nums[i]);
			if (it != hash.end())
				return { it->second,i };
			hash[nums[i]] = i;
		}
		return {};
	}

};

int main()
{
	Solution s;
	vector<int> nums = { 2,7,11,15 };
	int target = 9;
	for (int i = 0; i < 2; i++)
		cout << s.twoSum1(nums, target).at(i) << " ";
	return 0;
}