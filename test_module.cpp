#include <iostream>
#include <string>
#include <limits>
#include "hashtable.cpp"
#include "hashtable.h"
    
int main() {
    Hashtable test_hashtable;


    // SEARCH FOR NON-EXTANT VALUE
    cout << "Search for Dickie: ";
    string user_input_search = "Dickie";

    string query = test_hashtable.contains(user_input_search);
    cout << endl;
    if(query.empty()) {
        cout << user_input_search << " not found in the table" << endl;
    } else {
        cout << user_input_search << " is in the table" << endl;
    }
    cout << endl;



    // ADD VALUE
    cout << "Add Dickie: ";
    string user_input_add = "Dickie";
    // getline(cin, user_input_add);

    test_hashtable.insert(user_input_add);

    string query1 = user_input_add;
    cout << endl;

    if(query1.empty()) {
        cout << user_input_add << "Please give me a name!" << endl;
    } else {
        cout << user_input_add << " added to the table" << endl;
    }
    cout << endl;



    // SEARCH FOR SAME VALUE
    cout << "Search for Dickie: ";
    string user_input_search1 = "Dickie";

    string query2 = test_hashtable.contains(user_input_search1);
    cout << endl;
    if(query2.empty()) {
        cout << user_input_search1 << " not found in the table" << endl;
    } else {
        cout << user_input_search1 << " is in the table" << endl;
    }
    cout << endl;



    // REMOVE SAME VALUE
    cout << "Remove Dickie: " ;
    string user_input_remove = "Dickie";
    // getline(cin, user_input_remove);
    string is_it_there = test_hashtable.contains(user_input_remove);

    string query3 = user_input_remove;
    cout << endl;
    if(query3.empty() || is_it_there.empty()) {
        cout << "Please give me a name!" << endl;
    } else {
        test_hashtable.remove(user_input_remove);
        cout << user_input_remove << " removed from the table" << endl;
    }
    cout << endl;




    // SEARCH FOR SAME VALUE
    cout << "Search for Dickie: ";
    cout << endl;
    if(query.empty()) {
        cout << user_input_search << " not found in the table" << endl;
    } else {
        cout << user_input_search << " is in the table" << endl;
    }
    cout << endl;




    // This was my original test function, which followed Joseph Jess' design exactly. 

    // cout << "\nFind Dick in current hashtable: " << endl;
    // cout << test_hashtable.contains("Dick") << " (\"\" is expected)\n" << endl;

    // // simple add test
    // // test_hashtable.insert(string )
    // cout << "Add Dick to current hashtable: " << endl; 
    // cout << test_hashtable.insert("Dick") << "\"\" (\"0\" is expected)\n" << endl;

    // // re-test
    // cout << "Find Dick in current hashtable: " << endl;
    // cout << test_hashtable.contains("Dick") << "\"\" (\"Dick\" is expected)\n" << endl;

    // cout << "Remove Dick from current hashtable: " << endl;
    // cout << test_hashtable.remove("Dick") << " (\"\" is expected)\n" << endl;

    // // re-test LOLOL This didn't work (of course) because the remove function has no 
    // // functionality besides printing out "you have reached remove()"
    // cout << "Find Dick in current hashtable: " << endl; 
    // cout << test_hashtable.contains("Dick") << " (\"Dick\" is expected)\n" << endl;








    system("pause");

    return 0;

}
