#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    map<int , int> mp;          // Hash_map:  key=> element , value=> index
    vector<int> result;

    for(int i=0; i<nums.size(); i++){
        mp[nums[i]]=i;
    }
    for(int i=0; i<nums.size(); i++) {
        int y= target - nums[i];
        auto it = mp.find(y);
        if(it != mp.end() && it->second !=i) { // if y= target- x is found && it is not equal i
            result.push_back(it->second);
            result.push_back(i);
            break;
        }
    }
    return result;
}

