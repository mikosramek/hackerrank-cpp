#include <iostream>
#include <cstdio>
using namespace std;

void printName(int n) {
    switch(n) {
        case 0 :
            cout << "zero";
            break;
        case 1 :
            cout << "one";
            break;
        case 2 :
            cout << "two";
            break;
        case 3 :
            cout << "three";
            break;
        case 4 :
            cout << "four";
            break;
        case 5 :
            cout << "five";
            break;
        case 6 :
            cout << "six";
            break;
        case 7 :
            cout << "seven";
            break;
        case 8 :
            cout << "eight";
            break;
        case 9 :
            cout << "nine";
            break;
    }
}

int main() {
    // Complete the code.
    int min;
    int max;
    cin >> min >> max;
    for (int index = min; index <= max; index += 1) {
        if (index <= 9) {
            printName(index);
            cout << "\n";
        }
        else if (index % 2 == 0){
            cout << "even\n";
        }
        else {
            cout << "odd\n";
        }
    }
    return 0;
}