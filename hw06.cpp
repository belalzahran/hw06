/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 6/29/2021
*******************************************************************************/

#include <iostream>
using namespace std;


/********************************************************************
 * Function RecReverse:
 * ------------------------------------------------------------------
 * This method call itself recursively untill the specified index
 * of the alphabet has been properly reversed
 * ------------------------------------------------------------------
 * PRE-CONDITIONS
 * start index, end index, input string,
 *
 * POST-CONDITIONS
 * reversed alphabet string
 ********************************************************************/
char RecReverse(string input, int start, int reversesLeft, int initialReversesLeft, int count);

/*******************************************************************************
* hw06 - Recursion
*-------------------------------------------------------------------------------
* This program prompts the user for a begin and end index of the alphabet.
 * after receiving input it recursively reverses the letters within the user
 * specified index and prints the output.
*-------------------------------------------------------------------------------*/
int main()
{
    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #6        : Recursion \n";
    cout << "*****************************************\n\n";

    string abc; // CALC & OUT - string of alphabet
    int begin;  // IN & CALC  - index to start reversing
    int end;    // IN & CALC  - index to end reversing

    abc = "abcdefghijklmnopqrstuvwxyz";

    // loop through program 5 times
    for (int i = 0; i < 5; i++) {
        // prompt for user input
        cout << "\n\nEnter the range of character to be reversed(ex:3 8): ";
        cin >> begin >> end;

        // call reverse function
        RecReverse(abc, begin, end - begin, end - begin, 0);
    }

    return 0;
}



char RecReverse(string input, int start, int reversesLeft, int initialReversesLeft, int count)
{

    // check to see if the cout is less then start index to print alphabet normally
    if (count < start)
    {
        //cout << "\nfirst CONDITION - " ;
        cout << input[count];
        return RecReverse(input, start, reversesLeft, reversesLeft, ++count);
    }
    // once count equals or is greater than start index begin reversing
    if (count >= start && reversesLeft >= 0)
    {

       // cout << "\nsecond CONDITION" ;
      //  cout << "\ncount: " << count << "   reversesLeft: " << reversesLeft << "initialREversesleft: "<< initialReversesLeft << endl;
        cout << " " << input[count + reversesLeft];
        return RecReverse(input, start, --reversesLeft, initialReversesLeft, count);
    }
    // if three are no reverses left and count is 25 then return empty char
    if (reversesLeft == -1 && (count + initialReversesLeft == 25))
    {
        return ' ';
    }
    //print out the rest of the characters
    else if (reversesLeft == -1)
    {
        //cout << "\nthird CONDITION - " ;
        //cout << "\ncount: " << count << "   intitalReversesLeft: " << initialReversesLeft << endl;
        cout << input[count + initialReversesLeft+1];
        return RecReverse(input, start, reversesLeft, initialReversesLeft,  ++count);
    }




}


