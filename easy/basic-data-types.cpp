#include <iostream>
#include <cstdio>
using namespace std;

/*

    Int ("%d"): 32 Bit integer
    Long ("%ld"): 64 bit integer
    Char ("%c"): Character type
    Float ("%f"): 32 bit real value
    Double ("%lf"): 64 bit real value

Input Format
Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.

 */

int main() {
    // Complete the code.
    int anInteger;
    long aLong;
    char aChar;
    float aFloat;
    double aDouble;

    scanf("%d %ld %c %f %lf", &anInteger, &aLong, &aChar, &aFloat, &aDouble);

    printf("%d\n%ld\n%c\n%f\n%lf", anInteger, aLong, aChar, aFloat, aDouble);

    return 0;
}
