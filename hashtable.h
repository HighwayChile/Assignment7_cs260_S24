#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <string>

using namespace std;

struct Hashtable {
    public:
        Hashtable(int initialcapacity=25);
        ~Hashtable(); // destructor - gotta have it!
        int insert(string new_key);  // this could also be string type (returns bool Y or N)
        string contains(string current_key);
        string remove(string old_key);
        

    private:
        int current_size; // number of objects added to hastable
        int total_capacity; // max number of possible objects with currently allocated memory
        string *values;  // this, here, is the pointer to the array of strings. I like the pointer setup, even if it is kinda tough sometimes.
        int hash(string key);


};




#endif