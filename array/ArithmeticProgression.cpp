#include <iostream>
#include <vector>

using namespace std;

bool ArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    long long int pattern = arr[1] - arr[0], i = 2, n = arr.size();
    for (; i < n; i++) {
        if (arr[i] - arr[i-1] != pattern) return false;
    }
    return true;
}

//compile with "g++ -std=c++11 ArithmeticProgression.cpp"
int main() {
    vector<int> x = {3,5,1};
    vector<int> y = {1,2,4};
    vector<int> z = {-68,-96,-12,-40,16,1000000};

    (ArithmeticProgression(x) == true) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (ArithmeticProgression(y) == false) ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (ArithmeticProgression(z) == false) ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
    return 0;
}
