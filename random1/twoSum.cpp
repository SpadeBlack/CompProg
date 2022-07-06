#include <vector>
#include <unordered_map>
#include "Header.h"
using std::vector;
using std::unordered_map;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>res;

    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(target - nums[i]) != mp.end()) {
            res.emplace_back(i);
            res.emplace_back(mp[target - nums[i]]);
            return res;
        }
        mp[nums[i]] = i;
    }
    return res;
}

/*
#include <iostream>
#include "Header.h"
#include <vector>
using namespace std;
int main()
{
    //Just random startup...
    {
        std::cout << "Just keep Going, ";
        easy();
        medium();
        hard();
        x();
    }
    //Add your functions here...
    vector<int> g1;
    for (int i = 1; i <= 5; i++) {
        g1.push_back(i);
    }
    cout << "Input: ";
    for (auto i = g1.begin(); i != g1.end(); i++)
        cout << *i << " ";
    vector<int> g2 = twoSum(g1, 6);
    cout << "Output: ";
    for (auto i = g2.begin(); i != g2.end(); i++)
        cout << *i << " ";

}

*/
