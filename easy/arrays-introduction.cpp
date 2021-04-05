#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    int inputs [n];
    for (int index = 0; index < n ; index += 1) {
        int input;
        cin >> input;
        // cout << input << "\n";
        inputs[index] = input;
    }
    for (int index = n - 1; index >= 0; index -= 1) {
        cout << inputs[index] << " ";
    }
    
    return 0;
}
