#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
using namespace std;
/*
 Given an array of integers nums, return the number of good pairs.
 A pair (i, j) is called good if nums[i] == nums[j] and i < j.


Example 1:
 Input: nums = [1,2,3,1,1,3]
 Output: 4
 Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed.

Example 2:
 Input: nums = [1,1,1,1]
 Output: 6
 Explanation: Each pair in the array are good.

Example 3:
 Input: nums = [1,2,3]
 Output: 0
 

Constraints:
 1 <= nums.length <= 100
 1 <= nums[i] <= 100
*/

/*
- Understand the Problem:
 - We have given an array of nums, we have to return the number of good pairs.
 - a pair of i and j is good pair if nums[i] == nums[j] 
 - i(index) < j (index)

- Follow up questions:
 - what does good pair mean?
 - Should we use nested loop if they're talking about i and j?

- Approach: 1 Nested Loop
 - Set count to 0;
 - Iterate over the array and start at index 0;
   - Iterate over the array and starts at i + 1;
   - If index i value is equal to index j  value
    - add 1 to count
   - If not - start from the index i = 1, j = i + 1 -> 2
   
- return the count
*/
// CODE:
// BRUTE FORCE
int numIdenticalPairs_using_nested_loops(vector<int>& nums) {
    int count = 0;
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++){
            if(nums[i] == nums[j]){
                count++;
            }
        }
    }
    return count;    
}
/*

- Approach: 2 Hashmap
 - Create an unordered Hashmap(gives average O(1) insert/lookup), map would be O(log n)
 - Loop over the vector/array and increment the frequency of each item. Now we have keys of values by frequency of each item/element

 - create a count and set to 0;
 - Loop over the values of frequency hashmap
 - sum the count with pairs - formula -> value * (value - 1) / 2

*/
// CODE
// Hashmap
int numIdenticalPairs_using_hashmap(vector<int>& nums) {
    unordered_map<int, int> freq;

    for(auto num : nums) freq[num]++; // increment each key value by 1, if occured

    int  count = 0;
    for(auto& [_, value] : freq){
        count += value * (value - 1) / 2;
        // Value 1 appears value=3 times → pairs = 3*2/2 = 3: (0,3), (0,4), (3,4)
    }
    return count;

    
}

int main(){
    
    vector<int> nums = {1,2,3,1,1,3};
    vector<int> nums2 = {1,1,1,1};
    int pairs = numIdenticalPairs_using_nested_loops(nums2);
    cout << pairs << endl;

    int pairs2 = numIdenticalPairs_using_hashmap(nums2);
    cout << pairs2 << endl;

}