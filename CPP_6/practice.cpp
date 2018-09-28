#include <iostream>
#include <iomanip>

/*
 * Print three rows of numbers, ints floats doubles
 */

using namespace std;
int main() 
{
    int a = 45;
    float b = 45.323;
    double c = 45.5468;
    int aa = a + 9;
    float bb = b + 9;
    double cc = c + 9;
    int aaa = aa + 9;
    float bbb = bb + 9;
    double ccc = cc + 9;
    
    cout << a << " " << b << " " << c << "\n";
    cout << aa << " " << bb << " " << cc << "\n";    
    cout << aaa << " " << bbb << " " << ccc << "\n";

    return 0;
}
