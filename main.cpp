/**
 * START : 12/10/2024
 * END : 
 * This project is intended to be a pop database for peoples 
 * personal collections, 
 * Requirnments : 
 * - Should be able to input and store pop values
 * - Should be able to search to see how many of the same pop is owned
 * - Should have many identifiers, including price, name, set #, etc
 * 
 */

#include <iostream>


using namespace std;

string mission() //find out what the users intentions are
{
    int decision;
    cout << "Please Enter a Number : " << endl
        << "(1) ADD NEW" << endl
        << "(2) VIEW LIST" << endl
        << "(3) " << endl 
        << "(4) " << endl
        << "(5) " << endl;

    cin >> decision;
    switch(decision)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        default: 
            cout << "that is not a valid input: " << endl;
    }


}

int main()
{
    mission();


    return 0;
}