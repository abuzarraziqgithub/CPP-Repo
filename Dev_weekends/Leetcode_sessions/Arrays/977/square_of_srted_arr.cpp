#include<bits/stdc++.h>
using namespace std;

/*
Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

Example 1:

Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100].
Example 2:

Input: nums = [-7,-3,2,3,11]
Output: [4,9,9,49,121]
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums is sorted in non-decreasing order.
 

Follow up: Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?
*/

/*
  - Understanding: we have given a sorted(non decreasing) array, we have to squared each value and return the array in the sorted form.
  
  - Approach: Brute Force
    - Iterate over the Array
    - squared the current index value by multiplying by itself.
    - sort the array using sort function
    - return the sorted array

*/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        for(int i = 0; i< nums.size(); i++){
            nums[i] = nums[i] * nums[i];    
        }

        sort(nums.begin(), nums.end());

        return nums;
    }
};


// APPROACH 2 - TWO POINTER METHOD
/*
 - store the length of the given array into n
 - Create a result vector res with exactly n slots
 all initialized (so you can write by index).
 - Initialize two pointers(starts, end);
 - Initialize p for the res vector starts from end.
 - while left pointer <= the right pointer (Loop)
  - square the current pointers and stores them into variables
  - if current square at left is greater then the right current square
    - Write lsq into res at index p, then decrease p by 1.Equivalent to: res[p] = lsq; p = p - 1;
      - increase the left by one
  - If current right squared is greater:
    - write rsq into res at index p and decrease by 1.and decrease the right by 1   
   - 
  - return the res array
*/
class Solution2 {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = (int) nums.size();
        vector<int> resultArr(n);
        int currentLeft = 0;
        int currentRight = n - 1;
        int p = n - 1;

        while(currentLeft <= currentRight){
            int leftSquared = nums[currentLeft] * nums[currentLeft];
            int rightSquared = nums[currentRight] * nums[currentRight];

            if(leftSquared > rightSquared){
                resultArr[p--] = leftSquared;
                ++currentLeft;
            }
            else{
                resultArr[p--] = rightSquared;
                --currentRight;
            }

        }
        return resultArr;

    }
};


int main(){
    Solution2 sqrd;

    vector<int> nums = {-7,-3,2,3,11};
    vector<int> nums1 = {-4,-1,0,3,10};
    vector<int> result = sqrd.sortedSquares(nums1);

    for(auto res : result){
        cout << res << endl;
    }

}