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
#include <cstring>
#include <fstream>

vector<string> COLLECTION; // a default collection list to start the user off


using namespace std;

void newEntry() //This will prompt the user to add a new Funko pop to their collection
{
    cout << 
    mission();
}

void viewList() // This will prompt the user to view their list
{

    mission();
}

void createList() // this will create a new list for the user to add to
{
    string listName;
    cout << "List Name: " << endl;
    cin >> listName;
    ofstream outFile(listName);
    ofstream  ListNames("LISTS");
    if(ListNames.is_open())
    {
        listNames << "\n" << listName; // add the new list to the availible lists
        listNames.close(); // close the file
    }
    

    mission();

}

string mission() //find out what the users intentions are
{
    int decision;
    cout << "Please Enter a Number : " << endl
        << "(1) ADD NEW ENTRY" << endl
        << "(2) VIEW LIST" << endl
        << "(3) CREATE LIST" << endl 
        << "(4) " << endl
        << "(5) " << endl;

    cin >> decision;
    switch(decision)
    {
        case 1:
            newEntry();
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