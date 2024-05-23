#include "hashtable.h"
// #include <iostream>

// using namespace std;


Hashtable::Hashtable(int initialsize) {
    // so this caused a bit of a bugaboo for me... I had re-declared these vars as 
    // ints and it would not allow my code to run the string tests... classic.
    current_size = 0;
    total_capacity = initialsize;

    // int myArray[total_capacity];

    values = new string[total_capacity];

}

Hashtable::~Hashtable(){
    delete[] values;
}

int Hashtable::hash(string key) {
    // very simple hash function
    int result = 0;

    for(auto character : key) {
        result += character;
    }

    return result % total_capacity; // mod capacity so we know the index is within the table
}

int Hashtable::insert(string new_key) { 
    // need to call hash function to make this function
    // find index of key, place the new_key at postion in the array
    int result = 0;
    int index = hash(new_key);

    // collusion detection and handling... (make it overwrite!)
    if(values[index] == "" && new_key != "") {
        current_size++;
    } else { // either colliding or inserting a new_key of ""
        result = -1;
    }

    // then write new_key to the correct postion
    values[index] = new_key;

    return result; // maybe return something else on collision? 

}


string Hashtable::contains(string current_key){
    string result = "";

    // find index of the key
    int index = hash(current_key);

    // get value stored at that index
    result = values[index];

    // check if it's the same value (key/value)
    if(result != current_key) {
        result = "";
    }

    // return resulting value
    return result;
}



// this will take the result of the contains() function and use it
string Hashtable::remove(string old_key) {

    string result = "";

    int index = hash(old_key);

    if(contains(old_key) == values[index]) {
        result = "\nthis is a test printout, this confirms remove() was reached.\n";
    }

    return result;
}