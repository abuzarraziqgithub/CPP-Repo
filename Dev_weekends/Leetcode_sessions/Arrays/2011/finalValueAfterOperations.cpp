#include<bits/stdc++.h>
using namespace std;

/*
There is a programming language with only four operations and one variable X:

++X and X++ increments the value of the variable X by 1.
--X and X-- decrements the value of the variable X by 1.
Initially, the value of X is 0.

Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations.

 

Example 1:

Input: operations = ["--X","X++","X++"]
Output: 1
Explanation: The operations are performed as follows:
Initially, X = 0.
--X: X is decremented by 1, X =  0 - 1 = -1.
X++: X is incremented by 1, X = -1 + 1 =  0.
X++: X is incremented by 1, X =  0 + 1 =  1.
Example 2:

Input: operations = ["++X","++X","X++"]
Output: 3
Explanation: The operations are performed as follows:
Initially, X = 0.
++X: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
X++: X is incremented by 1, X = 2 + 1 = 3.
Example 3:

Input: operations = ["X++","++X","--X","X--"]
Output: 0
Explanation: The operations are performed as follows:
Initially, X = 0.
X++: X is incremented by 1, X = 0 + 1 = 1.
++X: X is incremented by 1, X = 1 + 1 = 2.
--X: X is decremented by 1, X = 2 - 1 = 1.
X--: X is decremented by 1, X = 1 - 1 = 0.
 

Constraints:

1 <= operations.length <= 100
operations[i] will be either "++X", "X++", "--X", or "X--".

*/

// STEPS
/*
 1 - Understand Problem: We have given an array of 4 operations([X++, ++X, X--, --X]), and x = 0, X++, ++X increments the value of x by or decrement by 1 otherwise
 - Return the final value of x after performing all the operations.


 2 - Approach/Logic/Algorithm:

  - Initially x = 0
  - Traverse/iterate through the operations array
    - if X++, ++X then increment x
    - otherwise decrement(--X, X--) x
  return x
    

*/

class Solution{
    public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        int n = operations.size();
        
        for(int i = 0; i < n; i++) {
            if(operations[i] == "++X" || operations[i] == "X++") x++;
            else x--;
        }
        // OR Short Hand For Loop
        for(auto operation : operations){ // remember that this will make deep copy
            if(operation[1] == '+') x++;
            else x--;
        }

        return x;
        
    }
};


int main() {

    Solution fvo;
    vector<string> strOp = {"X++", "++X", "X--", "--X"};
    int result = fvo.finalValueAfterOperations(strOp);
    cout << result << " ";

    cout<< endl;

    Solution fvo2;
    vector<string> strOp2 = {"X++", "X--", "X++", "++X"};
    int result2 = fvo2.finalValueAfterOperations(strOp2);
    cout << result2 << " ";

    cout<< endl;

}