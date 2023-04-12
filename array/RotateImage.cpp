#include <iostream>
#include <vector>

using namespace std;

//https://leetcode.com/problems/rotate-image/

void rotate(vector<vector<int>>& m) {
     int n = m.size();
        
    for (int i = 0; i < n; i++)
        for (int j = 0; j < i; j++)
            swap(m[i][j], m[j][i]);
    
    for (int i = 0; i < n; i++)
        reverse(m[i].begin(), m[i].end());
}

//compile with "g++ -std=c++11 RotateImage.cpp"
int main() {
    vector<vector<int>> x = {{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> image_x = {{7,4,1},{8,5,2},{9,6,3}};
    rotate(x);
    (x == image_x) ? cout << "TEST #1 PASSED" << endl : cout << "TEST #1 FAILED" << endl;
    return 0;
}