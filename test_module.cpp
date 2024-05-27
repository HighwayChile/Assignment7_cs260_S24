#include <iostream>
#include <string>
#include <limits>
#include "hashtable.cpp"
#include "hashtable.h"
    
int main() {
    // cout << "Hello?" <<endl;
    Hashtable test_hashtable;

    cout << "\nFind Dick in current hashtable: \"" << test_hashtable.contains("Dick") << "\" (\"\" is expected)\n" << endl;

    // simple add test
    // test_hashtable.insert(string )
    cout << "Add Dick to current hashtable: \"" << test_hashtable.insert("Dick") << "\" (\"0\" is expected)\n" << endl;

    // re-test
    cout << "Find Dick in current hashtable: \"" << test_hashtable.contains("Dick") << "\" (\"Dick\" is expected)\n" << endl;

    cout << "Remove Dick from current hashtable: \"" << test_hashtable.remove("Dick") << "\" (\"\" is expected)\n" << endl;

    // re-test LOLOL This didn't work (of course) because the remove function has no 
    // functionality besides printing out "you have reached remove()"
    cout << "Find Dick in current hashtable: \"" << test_hashtable.contains("Dick") << "\" (\"Dick\" is expected)\n" << endl;

}
