#include<iostream>
#include<bits/stdc++.h>
using namespace std;


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



int main(){ 
    return 0;

}

