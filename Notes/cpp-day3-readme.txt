# HashTable
* Searching
    * Linear Search: O(n)
    * Binary Search: O(log n)
    * Hashing: O(1) -- ideal
* DS for very fast searching.
* Data is stored  in key-value pairs.
    * Mobile contacts
        * name1 - mobile1
        * name2 - mobile2
        * name3 - mobile3
        * name2 - mobile4 // not allowed - duplicate key
* For a given key, value is searched very fast O(1).
* Keys cannot be duplicated.

## Java Collections
    * HashMap<> class

## C#/Python/PHP Connections
    * Dictionary

## C++ STL
* map<k,v> class
    * fast searching by key
    * duplicate keys are not allowed.
* multimap<k,v> class
    * fast searching by key
    * duplicate keys are allowed.

Q. For one key, if there are multiple values, how to insert?
* Solution1:
    * use multimap<> class.

* Solution2:
    * map<int, vector<double> > map;

