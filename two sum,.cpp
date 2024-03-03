#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
	int n=nums.size();
	bool flag = false;
    vector<int> result;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int k=nums[i]+nums[j];
			if(k == target){
				flag = true;
				result.push_back(i);
                result.push_back(j);
                return result;
				break;
			}
		}
		if(flag == true){
			break;
		}
	}
    return result;
    }
};
