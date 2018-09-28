#include <iostream>
#include <iomanip>

/*
 * Formatting example
 */

using namespace std;
int main() 
{
    cout<<"\n\nThe text without any formatting\n";
    cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    cout<<"\nThe text with setw(15)\n";
    cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    cout<<"\n\nThe text with tabs\n";
    cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";
}
