#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <string>

using namespace std;

// must do better comments. More verbose!
struct Hashtable {
    public:
        Hashtable(int initialcapacity=25);
        ~Hashtable(); // destructor - gotta have it!
        int insert(string new_key);
        string contains(string current_key);
        string remove(string old_key);
        void display_table();
        

    private:
        int current_size; // number of objects added to hashtable
        int total_capacity; // max number of possible objects with currently allocated memory
        string *values;  // this, here, is the pointer to the array of strings. I like the pointer setup, even if it is kinda tough sometimes.
        int hash(string key);

};

#endif