#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Call Stack
void explainStack(){
    stack<int> st;
    // LIFO - Last In First Out, O(Complexity) - O(1)
    st.push(1); // {1}
    st.push(2);// {2, 1}
    st.push(3);// {3, 2, 1}
    st.push(3);// {3, 3, 2, 1}
    st.emplace(5); // {5, 3, 3, 2, 1}

    cout << st.top(); // prints 5 "st[2] is invalid, indexes access is not allowed"
    // We have to commonly deal with 3 functions, push, pop, top

    st.pop(); // st looks like {3, 3, 2, 1} // 5 removed

    cout<< st.top(); // 3
    cout<< st.size(); // 4
    cout<< st.empty(); // false

    stack<int> st1, st2;
    st1.swap(st2);
}

// Queue
void explainQueue(){
    // FIFO - First In First Out
    queue<int> q;
    q.push(1); // {1}
    q.push(2);// {1, 2}
    q.emplace(4);// {1, 2, 4} -- 4 is the last queue

    q.back() += 5; // 5 + 4 = 9

    // Q is {1, 2, 9}
    q.front(); // 1

    q.pop(); // {2, 9}
    q.front(); // {2}
    // swap, size, empty same as stack
}

// Priority Queue
void explainPQ(){
    // Maximum Heap -> maintain the largest/max value at the top to bottom
    priority_queue<int>pq;
    // This isn't a linear data structure, its a tree like structure

    pq.push(3); // {3}
    pq.push(5); // {5, 3}
    pq.push(8); // {8, 5, 3}
    pq.push(100); // {100, 8, 5, 3}
    pq.emplace(10); // {100, 10, 8, 5, 3}

    pq.top(); // 100
    pq.pop(); // {10, 8, 5, 3}
    pq.top(); // 10

    // pop - O(logn), push- O(logn), top - O(1)
    // size, swap, empty same functions

    // To store/maintain the minimum value at the top
    // Minimum Heap(Min Heap) -> Maintain the least/min value at the top towards max(at the end)
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5); // {5}
    minpq.push(2); // {2, 5}
    minpq.push(8); // {2, 5, 8}
    minpq.emplace(10); // {2, 5, 8, 10}
}

void explainSet(){
    // Stores in a sorted order and unique
    set<int> set;
    set.insert(1); // {1}
    set.emplace(2); // {1,2}
    set.insert(2); // {1, 2} - only uique values are stored(2 isn't unique)
    set.insert(4); // {1, 2, 4}
    set.insert(3); // {1, 2, 3, 4} - sorted order

    // {1, 2, 3, 4, 5}
    auto it = set.find(3); // iterator points to the 3 value
    
    auto it = set.find(6); // iterator points set.end() which is right after the last element

    set.erase(5); // erase 5, takes O(log n)

    int cnt = set.count(1); // check if 1 exists - returns 1 or zero if not(since set has unique keys)

    auto it = set.find(3);
    set.erase(it); // O(1)

    // {1, 2, 3, 4, 5}
    auto it1 = set.find(2);
    auto it2 = set.find(4);
    set.erase(it1, it2); // after erase {1, 4, 5}, [first, last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does (watch video in the description)
    // Set takes O(log n) when do operations
}

void explainMultiset(){
    // Everything is same as set
    // It can store the duplicates as well but in sorted way
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1); // {1,1,1}

    ms.erase(1); // it will erase all 1 at once

    int cnt = ms.count(1); // counts all the 1's

    // To erase only singal 1
    ms.erase(ms.find(1)); // the iterator points to the first one/addrres

    // To erase in the middle
    ms.erase(ms.find(1), ms.find(1)+2);
    // rest functions are the same
}

void explainUset(){
    // It stores in unorder way but only unique elements
    // lower_bound and upper_bound function doesn't works, rest all functions are the same as above, it has better complexity(O(1)) than set in most cases except some when collision happens
    // It can also goes up to complexity of O(n) but happens once in a blue moon
    unordered_set<int> uns;
}

void explainMap(){
    // Key value pairs in the map that has unique keys in sorted order and the values can be same
    // key and value can be of any data type
    map<int, int> mpp;
    map<int, pair<int, int>> mpp2;
    map<pair<int, int>, int> mpp3;

    mpp[1] = 2; // {1: 2}
    mpp.emplace(3, 1); // {3: 1}
    mpp.insert({2,4}); // {2: 4}
    //  { {1,2}, {2,4}, {3,1} }

    cout << mpp[1]; // 2
    cout << mpp[3]; // 1
    cout << mpp[5]; // null/0

    mpp3[{2,3}] = 10; // {{2,3} : 10} <pair>, int

   // access of keys 
    mpp2[2] = {1,2};
    mpp2[3] = {4,5};
    mpp2[5] = {8,7};

    // Sorted order of keys and no duplicates
    for(map<int, pair<int,int>>::iterator it = mpp2.begin(); it != mpp2.end(); it++){
        cout<< it->first << " " << it->second.first << " " << it->second.second << endl; 
    }
    // OR
    for(auto it : mpp2){
        cout<< it.first << "\t" << it.second.first << " " << it.second.second << endl;
    }

    // find the value
    auto it = mpp.find(3);
    cout << it->first << endl;
    it = mpp.find(7); // after the end

    it = mpp.lower_bound(2);
    it = mpp.upper_bound(3);

    // O(log n)
}

// MultiMap
void explainMultiMap(){
    // everything same as the map but it can also store multiple/duplicate keys in sorted order 
    // Only map[key] cannot be used here
}
// Unordered Map
void explainUnOrderedMap(){
    // It doesn't have duplicate and stores in unorder way

    // O(1) and in worst case O(n)
}


int main(){ 

    return 0;
}

