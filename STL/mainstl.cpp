#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    // List gives front operation as well, a container and dynamic in nature
    // Insert in a vector is costly
    list<int> ls;
    // In List, the internal operation is a doubly link list(a doubly link list is maintained for a list) and singly list is maintained for vectors.
    ls.push_back(5); // {5}
    ls.emplace_back(4); // {5, 4}

    ls.push_front(2); // {2, 5, 4} // in terms of complexity it is very efficient/cheap
    ls.emplace_front();

    // rest functions are same as vectors
    // begin, end, rbegin, rend, clear, insert, size, swap etc
    return 0;

}

