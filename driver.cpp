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
                cout << "Please enter name to search: ";
                string user_input_search;
                // getline reads the whole line!
                getline(cin, user_input_search);

                string query = main_table.contains(user_input_search);
                cout << endl;

                // learned about "empty()" today, and wow, is that helpful! I love 
                // built-in functions! Learned from chatGPT.
                if(query.empty()) {
                    cout << user_input_search << " not found in the table" << endl;
                } else {
                    cout << user_input_search << " is in the table" << endl;
                }
                cout << endl;
                break;
            }

            case 2:{
                cout << "Please enter name to be added: ";
                string user_input_add;
                getline(cin, user_input_add);

                main_table.insert(user_input_add);

                string query = user_input_add;
                cout << endl;

                if(query.empty()) {
                    cout << user_input_add << "Please give me a name!" << endl;
                } else {
                    cout << user_input_add << " added to the table" << endl;
                }
                cout << endl;
                break;
                }

            case 3:{
                // cout << "You have chosen case 3 (Remove)" << endl;
                cout << "Please enter name to be removed: " << endl;
                string user_input_remove;
                getline(cin, user_input_remove);
                string is_it_there = main_table.contains(user_input_remove);

                string query = user_input_remove;
                cout << endl;
                if(query.empty() || is_it_there.empty()) {
                    cout << "Please give me a name!" << endl;
                } else {
                    main_table.remove(user_input_remove);
                    cout << user_input_remove << " removed from the table" << endl;
                }
                // main_table.remove(user_input_remove);
                cout << endl;
                break;
                }

            case 4:{
                cout << "You have chosen case 4 (Populate Table)" << endl;
                main_table.insert("Hamilton"); 
                main_table.insert("Joe");
                main_table.insert("Frank"); // Frank collides with something... 
                main_table.insert("Reynolds");   
                main_table.insert("Dick");
                main_table.insert("Jane");
                cout << endl;
                break;
                }

            case 5:{
                // cout << "You have chosen case 5 (Display Table)" << endl;
                main_table.display_table();
                cout << endl;
                break;
                }

            case 6:{
                // cout << "You have chosen case 6 (Quit)" << endl;
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
            cout << "Invalid input. Please enter a number between " << menu_min 
            << " and " << menu_max << "." << endl;
            cout << endl;
        }
    }
    return 0;
}

