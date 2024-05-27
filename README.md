# Assignment7_cs260_S24
hashtable for CS260 Spring 2024




# Checklist  
 
OVERALL - hashtable that solves collisions by overwriting the previous value.  
TESTS - one for each function  
insert() function - inserts a value into the hashtable at appropriate location  
contains() function - searches hashtable for value, returns bool (Y or N)  
(optional) delete function - removes value based on hash and returns that value  

SMARTER HASH TABLE -  



# Design  

I am going to get away from the switch-based menu. I do love the old-timey feel, but even the older programs I use that have 
that sort of interface often have a simple parser that accepts the string input from the user, as well. So I will make a String-based 
hashtable! - questiontoself - should I use ascii, or built-in string libraries? It kind of sounds like it must be ascii... seek clarity. - answers found. String works.    


TEST DESIGN - insert() test could work exactly like my previous testing method, where I insert values into the hastable then print out the hastable to verify the correct placement of the value in the hashtable. I liked the test functions I had written previously, but I really should make it into a separate module to make testing for the instructor more streamlined. 

I want my program to give another chance to search after a failed search (contains())

contains() should search each index value and compare using a for loop. 


insert() should take the input and look for an index in a linked list. Something like: for(i : total_capacity) {increment num_nodes and if the same as one}


remove() could use cointains(), and if cointains(key) is in the hastable, remove that value. I have this halfway set up. Need testing and verification. 






# Instructions  

    Create a design before you begin to code that describes or shows how we can store data in a hash table and what kind of problem we could solve with a hash table.  

    Create some tests (at least one per piece of functionality) before you begin coding that you want your hashtable to pass before you start coding.  

    Create a hashtable that resolves collisions by simply overwriting the old value with the new value, including at least:  

        Describe the way that you decide on hashing a value
        (this can be simple or complex based on how interesting you find the topic)  

        An insert function that places the value at the appropriate location based on its hash value  

        A contains function that returns whether the value is already in the hashtable  

        (optional) A delete function that removes a value based on its hash and then returns that value…  

    Then create a smarter hashtable (double hashing or chaining) including at least the same functions as the simple hashtable  

    Compare some information relating to collisions (frequency) and their effect on complexity (of insert and contains methods)  

    Once you have implemented and tested your code, add to the README file what line(s) of code or inputs and outputs show your work meeting each of the above requirements (or better, include a small screen snip of where it meets the requirement!).  

