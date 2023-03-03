#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int romanToInt(string roman) { 
    int cnt = 0, i = 0;
    unordered_map<char, int> map = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
    for (; i < roman.size() - 1; i++)
        cnt += (map[roman[i]] < map[roman[i + 1]]) ? -map[roman[i]] : map[roman[i]];
    return cnt + map[roman[i]];
}

//compile with "g++ -std=c++11 RomanToInt.cpp"
int main() {
    (romanToInt("MMMCMXCIX") == 3999) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (romanToInt("I") == 1) ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (romanToInt("LVIII") == 58) ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
    return 0;
}