#include <iostream>
#include <string>
#include <stack>

using namespace std;

//https://leetcode.com/problems/removing-stars-from-a-string/submissions/932558937/

string removeStars(string s) {
    stack<char> x;
    string starless = "";

    for (int i = 0; i < s.size(); i++)
        (s[i] == '*') ? x.pop() : x.push(s[i]);

    while (!x.empty()) {
        starless += x.top();
        x.pop();
    }

    reverse(starless.begin(), starless.end());
    return starless;
}

//compile with "g++ -std=c++11 RemoveStars.cpp"

int main() { 
    (removeStars("delete******") == "") ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    (removeStars("leet**co*de") == "lecde") ? cout << "TEST #2 PASSED" << endl : cout << "TEST #2 FAILED" << endl;
    (removeStars("po*p") == "pp") ? cout << "TEST #3 PASSED" << endl : cout << "TEST #3 FAILED" << endl;
}