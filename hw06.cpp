/*******************************************************************************
* AUTHOR     : Belal Zahran
* STUDENT ID : 1176978
* CLASS      : CS1C - MTWT: 3:00 - 5:20pm
* DUE DATE   : 6/29/2021
*******************************************************************************/

#include <iostream>
using namespace std;
//char RecReverse(string input, int begin, int end, int recCount, int x);
char RecReverse(string input, int start, int reversesLeft, int initialReversesLeft, int count);

/*******************************************************************************
* hw06 - Recursion
*-------------------------------------------------------------------------------
* This program
*-------------------------------------------------------------------------------*/
int main()
{
    cout << "*****************************************\n";
    cout << "   Programmed by: Belal Zahran\n";
    cout << "   Student ID   : 1176978\n";
    cout << "   CS1B         : MTWT: 3:00 - 5:20pm\n";
    cout << "   HW #6        : Recursion \n";
    cout << "*****************************************\n\n";

    string abc = "abcdefghijklmnopqrstuvwxyz";
    int begin;
    int end;
    int recCount = 1;


    for (int i = 0; i < 3; i++) {
        cout << "\n\nEnter the range of character to be reversed(ex:3 8): ";
        cin >> begin >> end;

        RecReverse(abc, begin, end - begin, end - begin, 0);
    }

    return 0;
}



char RecReverse(string input, int start, int reversesLeft, int initialReversesLeft, int count)
{
    
    if (count < start)
    {
        //cout << "\nfirst CONDITION - " ;
        cout << input[count];
        return RecReverse(input, start, reversesLeft, reversesLeft, ++count);
    }
    if (count >= start && reversesLeft >= 0)
    {

       // cout << "\nsecond CONDITION" ;
      //  cout << "\ncount: " << count << "   reversesLeft: " << reversesLeft << "initialREversesleft: "<< initialReversesLeft << endl;
        cout << " " << input[count + reversesLeft];
        return RecReverse(input, start, --reversesLeft, initialReversesLeft, count);
    }
    if (reversesLeft == -1 && (count + initialReversesLeft == 25))
    {
        return ' ';
    }
    else if (reversesLeft == -1)
    {
        //cout << "\nthird CONDITION - " ;
        //cout << "\ncount: " << count << "   intitalReversesLeft: " << initialReversesLeft << endl;
        cout << input[count + initialReversesLeft+1];
        return RecReverse(input, start, reversesLeft, initialReversesLeft,  ++count);
    }




}


