/** Luke Deegan,
 *  Exercise 1,
 *  Celcius to Fahrenheit Calculator,
 *  23/9/17
 */

/** Preprocessor directives */
#include <iostream>

using namespace std;

int main()
{

    /** Variable declarations */
    float Celsius, Fahrenheit;

    /** Insert instructions for the user and allow them to input data */
    cout << "Celsius to Fahrenheit converter\n" << endl;
    cout << "Enter Temp in Celsius: " << endl;
    cin >> Celsius;

    /** Define Fahrenhiet as an equation, divide by 5.0 to give fractional answer */
    Fahrenheit = 9/5.0*Celsius+32;

    /** Reveal the answer to the equation to the user in the form of a statement */
    cout << "\n" << "Temp in Fahrenheit: " << "\n" << Fahrenheit << endl;


    return 0;
}
