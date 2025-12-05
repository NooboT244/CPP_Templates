vector<any-datatype> var_name;                 //dynamic array can increase size
vector<any-datatype> var_name(n);              //n size dynamic array                       TC: O(1)
vector<any-datatype> var_name(n,x);            //n size x initialized dynamic array


set<any-datatype> var_name;                    //a dynamic array but district value and sorted     TC: O(logn)
multiset<any-datatype> var_name;               //a dynamic array but sorted                        TC: O(logn)
unordered_set<any-datatype> var_name;          //a dynamic array but district value                TC: O(1)
unordered_multiset<any-datatype> var_name;     //a dynamic array                                   TC: O(1)


pair<any-datatype,any-datadype> var_name;      // store two values or pair wise value;             TC: O(1)



map<any-key, any-value> var_name;                      // sorted + unique keys                  TC: O(logn)
multimap<any-key, any-value> var_name2;                // sorted + duplicate keys               TC: O(logn)
unordered_map<any-key, any-value> var_name;            // hashing + unique keys                 TC: O(1)
unordered_multimap<any-key, any-value> var_name2;      // hashing + duplicate keys              TC: O(1)


