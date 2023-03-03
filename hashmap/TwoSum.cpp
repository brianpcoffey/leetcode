#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

//https://leetcode.com/problems/two-sum/description/

vector<int> TwoSum(vector<int>& nums, int target) {
    int i = 0, n = nums.size();
    unordered_map<int, int> map;
    for (; i < n; i++) {
        if (map.find(target - nums[i]) != map.end()) return {map[target - nums[i]], i};
        map[nums[i]] = i;
    }
    return {};
}

//compile with "g++ -std=c++11 TwoSum.cpp"
int main() {
    vector<int> x = {2,7,11,15};
    vector<int> x1 = {0,1};
    vector<int> y = {3,2,4};
    vector<int> y1 = {1,2};
    vector<int> z = {3,3};
    vector<int> z1 = {0,1};
    (TwoSum(x,9) == x1) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (TwoSum(y,6) == y1) ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (TwoSum(z,6) == z1) ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
    return 0;
}