#include "my_functions.h"
#include <iostream>
#include <cstring>

using namespace std;


void createList() // this will create a new list for the user to add to
{
    string listName;
    cout << "List Name: " << endl;
    cin >> listName;
    ofstream newList(listName);
    ofstream  nameOfList("LISTS", ios::app);
    if(nameOfList.is_open())
    {
        nameOfList <<  listName << endl; // add the new list to the availible lists
        nameOfList.close(); // close the file
    }else 
    {
        cout << "Error opening file!" << endl;
    }
    
    mission();

}

void newEntry() //This will prompt the user to add a new Funko pop to their collection
{
    cout << "this is the new entry " << endl;
    mission();
}

void viewList() // This will prompt the user to view their list
{

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
        << "(5) EXIT" << endl;

    cin >> decision;
    switch(decision)
    {
        case 1:
            newEntry();
        case 2:
            viewList();
        case 3:
            createList();
        case 4:
    
        case 5:
            exit(0);
        default: 
            cout << "that is not a valid input: " << endl;
    }


}

