#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    int cnt = 0, i = 1, n = nums.size();
    for (; i < n; i++) {
        if (nums[i] != nums[cnt]) {
            nums[++cnt] = nums[i];
        }
    }
    return cnt + 1;
}

//compile with "g++ -std=c++11 RemoveDuplicates.cpp"
int main() {
    vector<int> x = {1};
    vector<int> y = {1, 2, 2, 3, 3, 3, 4};
    vector<int> z = {1,2,3,3,3,3,3,3};
    vector<int> q = {0,0,1,1,1,2,2,3,3,4};
    vector<int> p = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    (removeDuplicates(x) == 1) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (removeDuplicates(y) == 4) ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (removeDuplicates(z) == 3) ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
    (removeDuplicates(q) == 5) ? cout << "TEST #4 PASSED" << endl : cout << "TEST #4 FAILED" << endl;
    (removeDuplicates(p) == 1) ? cout << "TEST #5 PASSED" << endl : cout << "TEST #5 FAILED" << endl;
    return 0;
}