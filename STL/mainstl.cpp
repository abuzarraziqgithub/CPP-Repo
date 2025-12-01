#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5,6,7,8,9};

    // Iterators points to the memory of the element
    vector<int>::iterator i = v.begin(); // it begins pointing to the first element address 
    i++; // memory is contigious so it will shift to the next right to the first
    // cout << *(i)/*to access value of that memory we use *() */ << " " << endl;
     i = i+2; // shifted two positions
    // cout << *(i) << " ";

    vector<int> s = {100,200,300,400};
    vector<int>::iterator itEnd = s.end(); // remember that it will point right after the last element address(not the last but right after) 
    vector<int>::reverse_iterator rItEnd = s.rend(); // it reverse the vector(so 9 would be at 0 and 1 at 8 poistion) and then point before the 1st element address
    vector<int>::reverse_iterator rItRev = s.rbegin();  // it reverse the vector and point the 1st(s[0] = 400 and move to the next when rItEnd++)

    // v.back(); // last element of the vector

    // Printing entire vectore using iterator
    cout << "Vector using iterator"<< endl;
    for(vector<int>::iterator i = v.begin(); i != v.end(); i++){
        cout<< *(i) << endl;
    }

    // The STL gives us the simpler syntax
    cout << "Vector using STL auto" << endl;
    for(auto i = v.begin(); i!= v.end(); i++){ // auto automatically assigns to a vector (v) or any other data type depends on the condition
        cout<< *(i) <<endl;
    }

    // We can also use for each loop
    cout << "Vector using for each" << endl;
    for(auto i : v){
        cout<< i <<endl;
    }

    // Deletion of the vectors
    // {10, 20, 12, 23}
    v.erase(v.begin() + 1); // delete the address/element of the [1] index and reshuffule
    // Erasing multiple addresses 
    // {10, 20, 12, 23, 35}
    v.erase(v.begin() + 2 , v.begin() + 4); // [start, end),{10, 20, 35} start included and end is not, it basically deletes the element at [2]= 12 index and [3]= 23 and include [4]= 35


    return 0;

}

