#include<bits/stdc++.h>
using namespace std;

/*
There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.

 

Example 1:

Input: gain = [-5,1,5,0,-7]
Output: 1
Explanation: The altitudes are [0,-5,-4,1,1,-6]. The highest is 1.
Example 2:

Input: gain = [-4,-3,-2,-1,4,3,2]
Output: 0
Explanation: The altitudes are [0,-4,-7,-9,-10,-6,-3,-1]. The highest is 0.
 

Constraints:

n == gain.length
1 <= n <= 100
-100 <= gain[i] <= 100

*/

/*
 - Understanding: We are given an array of gain, we have to find the highest alitude value by prefix_sum(sum of current value by the previous sum), the value should greater than or equal to 0 and less than the length of the array.     

 - Approach: 
   - intitialize two variables with zero
   - Iterate over the array
   - sum current_Altitude with the index values
   - If current_Altitude is greater than max_Altitude
     - Reassign the max_Altitude with the updated value(max value)
   - Return the max_Altitude value  
*/


class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int currentAlt = 0;
        int maxAlt = currentAlt;

        for(auto curAlt : gain){
            currentAlt += curAlt;

            if(currentAlt > maxAlt){
                maxAlt = currentAlt;
            }
        }
        return maxAlt;
}
};


int main(){

    Solution alt1;
    vector<int> alts = {1,-3,4,-6,-10,5};

    int result = alt1.largestAltitude(alts);

    cout << result << endl;

    cout << " ";


}