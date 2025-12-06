string var_name;                               // dynamic char array                              TC: O(1)

vector<any-datatype> var_name;                 //empty dynamic array can increase size            TC: O(1)
vector<any-datatype> var_name(n);              //n size dynamic array                             TC: O(1)
vector<any-datatype> var_name(n,x);            //n size x initialized dynamic array               TC: O(1)


set<any-datatype> var_name;                    //a dynamic array but district value and sorted     TC: O(logn)
multiset<any-datatype> var_name;               //a dynamic array but sorted                        TC: O(logn)
unordered_set<any-datatype> var_name;          //a dynamic array but district value                TC: O(1)
unordered_multiset<any-datatype> var_name;     //a dynamic array                                   TC: O(1)


pair<any-datatype,any-datadype> var_name;      // store two values or pair wise value;             TC: O(1)


map<any-key, any-value> var_name;                      // sorted + unique keys                  TC: O(logn)
multimap<any-key, any-value> var_name2;                // sorted + duplicate keys               TC: O(logn)
unordered_map<any-key, any-value> var_name;            // hashing + unique keys                 TC: O(1)
unordered_multimap<any-key, any-value> var_name2;      // hashing + duplicate keys              TC: O(1)


list<any-datatype> var_name;                          // doubly linked list                     TC: O(1)
forward_list<any-datatype> var_name;                  // singly linked list                     TC: O(1)


deque<any-datatype> var_name;                        // double-ended dynamic array              TC: O(1)


queue<any-datatype> var_name;                        //FIFO (First In, First Out)               TC: O(1)
stack<any-datatype> var_name;                        //LIFO (Last In, First Out)                TC: O(1)


priority_queue<any-datatype> var_name;                                                // max heap      TC: O(logn)
priority_queue<any-datatype, vector<any-datatype>, greater<any-datatype>> var_name2;  // min heap      TC: O(logn)


bitset<n> var_name;                                  // fixed-size binary container              TC: O(1)
