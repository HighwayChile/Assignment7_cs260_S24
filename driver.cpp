#include <iostream>
#include <string>
#include <limits>
#include "hashtable.cpp"
#include "hashtable.h"

using namespace std;
using std::string;


void show_menu(){
    cout << "MAIN MENU \n"
    "1. Search \n"
    "2. Add \n"
    "3. Remove \n"
    "4. Populate Table \n"
    "5. Display Table \n"
    "6. Quit \n"
    << endl;
}


int main(int argc, char **argv) {

    Hashtable main_table;

    while(1) {
        int menu_choice;
        int menu_min = 1;
        int menu_max = 6;

        show_menu();

        if(cin >> menu_choice && menu_choice >= 
        menu_min && menu_choice <= menu_max) {
            // clears the newline character
            cin.ignore();
            switch (menu_choice) {
            case 1:{
                /* Ask for user input and use that string as reference for search */
                cout << "You have chosen case 1 (Search)" << endl;
                cout << "Please enter name to search" << endl;
                string user_input_search;
                // getline reads teh whole line!
                getline(cin, user_input_search);
                cout << "Searching for: " << user_input_search << endl;

                string query = main_table.contains(user_input_search);
                // learned about "empty()" today, and wow, is that helpful! I love built-in functions! Learned from chatGPT.
                // I saw it and almost immediately flipped my lid! I was trying to build my own function that transeverses the string...
                if(query.empty()) {
                    cout << user_input_search << " is not in the table" << endl;
                } else {
                    cout << user_input_search << " is in the table" << endl;
                }
                break;
            }
            case 2:{
                cout << "You have chosen case 2 (Add)" << endl;
                cout << "what would you like to add? " << endl;
                string user_input_add;
                getline(cin, user_input_add);
                main_table.insert(user_input_add);
                break;
                }
            case 3:{
                cout << "You have chosen case 3 (Remove)" << endl;
                cout << "what would you like to remove? " << endl;
                string user_input_remove;
                getline(cin, user_input_remove);
                main_table.remove(user_input_remove);
                break;
                }
            case 4:{
                cout << "You have chosen case 4 (Populate Table)" << endl;
                main_table.insert("Hamilton"); 
                main_table.insert("Joe");
                main_table.insert("Frank");
                main_table.insert("Reynolds");   
                main_table.insert("Dick");
                main_table.insert("Jane");
                break;
                }
            case 5:{
                cout << "You have chosen case 5 (Display Table)" << endl;
                // cout << main_table << endl;
                main_table.display_table();
                break;
                }
            case 6:{
                cout << "You have chosen case 6 (Quit)" << endl;
                cout << "Quitting..." << endl;
                system("pause");
                main_table.~Hashtable();
                return 0;
                }
            
            default:{
                break;
                }
            }
        } 
        else {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number between " << menu_min << " and " << menu_max << "." << endl;
            // main_table.~Hashtable();
        }
    }
    return 0;
}

