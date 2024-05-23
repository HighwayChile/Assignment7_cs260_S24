#include <iostream>
#include <string>
#include "hashtable.cpp"
#include "hashtable.h"

using namespace std;

int main(int argc, char **argv) {
    // cout << "Hello?" <<endl;
    Hashtable test_hashtable;

    cout << "Find Dick in current hashtable: \"" << test_hashtable.contains("Dick") << "\" (\"\" is expected)\n" << endl;

    // simple add test
    // test_hashtable.insert(string )
    cout << "Add Dick to current hashtable: \"" << test_hashtable.insert("Dick") << "\" (\"0\" is expected)\n" << endl;

    // re-test
    cout << "Find Dick in current hashtable: \"" << test_hashtable.contains("Dick") << "\" (\"Dick\" is expected)\n" << endl;


    // system("pause");

    return 0;
}