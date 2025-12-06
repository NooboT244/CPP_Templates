/* ================= VECTOR ================= */
var_name.push_back(x);                    //add last                                     //TC: O(1)
var_name.pop_back();                      //remove last                                  //TC: O(1)
var_name.front();                         //first element                                //TC: O(1)
var_name.back();                          //last element                                 //TC: O(1)
var_name[i];                              //random access                                //TC: O(1)
var_name.insert(it, x);                   //insert at pos                                //TC: O(n)
var_name.erase(it);                       //erase at pos                                 //TC: O(n)
var_name.clear();                         //remove all                                   //TC: O(n)

/* ================= DEQUE ================= */
var.push_front(x);                   //add front                                    //TC: O(1)
var.push_back(x);                    //add back                                     //TC: O(1)
var.pop_front();                     //remove front                                 //TC: O(1)
var.pop_back();                      //remove back                                  //TC: O(1)
var[i];                              //random access                                //TC: O(1)

/* ================= LIST ================= */
var.push_front(x);                   //add front                                    //TC: O(1)
var.push_back(x);                    //add back                                     //TC: O(1)
var.pop_front();                     //remove front                                 //TC: O(1)
var.pop_back();                      //remove back                                  //TC: O(1)
var.insert(it, x);                   //insert at it                                 //TC: O(1)
var.erase(it);                       //erase at it                                  //TC: O(1)

/* ================= FORWARD_LIST ================= */
var.push_front(x);                   //add front                                    //TC: O(1)
var.pop_front();                     //remove front                                 //TC: O(1)
var.insert_after(it, x);             //insert after                                 //TC: O(1)
var.erase_after(it);                 //erase after                                  //TC: O(1)

/* ================= STACK ================= */
var.push(x);                         //push top                                     //TC: O(1)
var.pop();                           //pop top                                      //TC: O(1)
var.top();                           //top element                                  //TC: O(1)

/* ================= QUEUE ================= */
var.push(x);                         //push back                                    //TC: O(1)
var.pop();                           //pop front                                    //TC: O(1)
var.front();                         //front element                                //TC: O(1)
var.back();                          //last element                                 //TC: O(1)

/* ================= PRIORITY_QUEUE ================= */
var.push(x);                         //push                                         //TC: O(logn)
var.pop();                           //remove max/min                               //TC: O(logn)
var.top();                           //top element                                  //TC: O(1)

/* ================= SET ================= */
var.insert(x);                       //insert sorted                                //TC: O(logn)
var.erase(x);                        //erase value                                  //TC: O(logn)
var.find(x);                         //search                                       //TC: O(logn)

/* ================= MULTISET ================= */
var.insert(x);                       //insert                                       //TC: O(logn)
var.erase(var.find(x));              //erase single                                 //TC: O(logn)

/* ================= UNORDERED_SET ================= */
var.insert(x);                       //insert                                       //TC: O(1)
var.erase(x);                        //erase                                        //TC: O(1)
var.find(x);                         //find                                         //TC: O(1)

/* ================= MAP ================= */
var[key] = val;                      //insert/update                                 //TC: O(logn)
var.insert({k,v});                   //insert pair                                   //TC: O(logn)
var.erase(key);                      //erase key                                     //TC: O(logn)

/* ================= UNORDERED_MAP ================= */
var[key] = val;                      //insert/update                                 //TC: O(1)
var.find(key);                       //find                                          //TC: O(1)
var.erase(key);                      //erase                                         //TC: O(1)

/* ================= PAIR ================= */
var.first;                           //first value                                   //TC: O(1)
var.second;                          //second value                                  //TC: O(1)

/* ================= BITSET ================= */
var.set(pos);                        //bit = 1                                       //TC: O(1)
var.reset(pos);                      //bit = 0                                       //TC: O(1)
var.flip(pos);                       //toggle bit                                    //TC: O(1)
var.test(pos);                       //check bit                                     //TC: O(1)

/* ================= STRING ================= */
string var;                          //dynamic string                                //TC: O(1)
var.push_back(c);                    //add char                                      //TC: O(1)
var.pop_back();                      //remove char                                   //TC: O(1)
var.substr(pos,len);                 //substring                                     //TC: O(len)
var.find(sub);                       //find substring                                //TC: O(n)
var.erase(pos,len);                  //erase substring                               //TC: O(n)
var.insert(pos, sub);                //insert string                                 //TC: O(n)

/* ================= ALGORITHMS ================= */
sort(v.begin(), v.end());            //sort vector                                   //TC: O(n logn)
reverse(v.begin(), v.end());         //reverse                                       //TC: O(n)
lower_bound(v.begin(),v.end(),x);    //first >= x                                    //TC: O(logn)
upper_bound(v.begin(),v.end(),x);    //first > x                                     //TC: O(logn)
binary_search(v.begin(),v.end(),x);  //search for x                                  //TC: O(logn)
swap(a,b);                           //swap values                                   //TC: O(1)
