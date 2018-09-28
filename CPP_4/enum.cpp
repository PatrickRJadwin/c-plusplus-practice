#include <iostream>

/*
 * ENUM Example
 */

using namespace std;
int main() 
{
    enum MONTH {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
    MONTH bestMonth;
    bestMonth = Jan;

    if(bestMonth == Jan)
    {
        cout<<"I'm not so sure January is the best month\n";
    }
    return 0;
}

