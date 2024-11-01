#include <iostream>
#include <vector>
#include <streambuf>
#include <algorithm>
#include <unordered_map>
using namespace std;


class firstSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0 ; i< nums.size();i++){
            // iterator here simply acts as the second loop
            auto it = find(nums.begin(), nums.end(), target-nums[i]);
            if (it !=nums.end()){
                int index = distance(nums.begin(), it);
                if (index != i){
                    return { i , index};
                }
            }
        }
        return {};
    }
};



class optimizedSolution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        for (int i=0; i<nums.size(); i++){
            int valueToFindInMap = target-nums[i];
            // use mp.find(valueToFindInMap) != mp.end() 
            // This will stop at the first ocurrence of the element
            // mp.count(valueToFindInMap)
            // This will count all the occurrences of the element
            if(mp.find(valueToFindInMap) != mp.end()){
                return { mp[valueToFindInMap], i };
            }
            mp[nums[i]]=i;
        }

        return {}; // No solution found
    }
};
