#include <iostream>

/* 
 * This returns an error due to changing a constant
 * constants cannot change
 */

using namespace std;
int main() 
{
    const int weightGoal = 100;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    weightGoal = 200;
    cout<<"WeightGoal = "<<weightGoal<<"\n";
    return 0;
}
