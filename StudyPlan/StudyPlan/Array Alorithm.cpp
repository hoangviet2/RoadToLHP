//
//  Array Alorithm.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 01/05/2021.
//

#include <stdio.h>
#include <vector>
#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0, size = nums.size(), cnt = 0;
        for (auto i=0; i<size; i++) {
            if (nums[i] == 0) {
                ones = max(ones, cnt);
                cnt = 0;
            }
            else {
                cnt++;
            }
        }
        ones = max(ones, cnt);
        return ones;
    }
    int findNumbers(vector<int>& nums) {
        int len = nums.size();
        int ret_count = 0;
        for(int i = 0; i < len; ++i) {
            int digit_count = 0;
            while(nums[i] > 0) {
                ++digit_count;
                nums[i] /= 10;
            }
            if(!(digit_count & 1)) {
                ++ret_count;
            }
        }
        return ret_count;
    }
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>v(nums.size(),0);
        int j = nums.size()-1,i = 0;
        for(int l = 0;l<nums.size();l++){
            if(abs(nums[i])<=abs(nums[j])){
                v[nums.size()-l-1] = nums[j]*nums[j];
                j--;
            }
            else{
                v[nums.size()-l-1] = nums[i]*nums[i];
                i++;
            }
        }
        return v;
    }
    void duplicateZeros(vector<int>& arr) {
        int firstSize = arr.size();
        std::vector<int> tempArr;
        for(auto elem:arr){
            if(elem==0){
                tempArr.push_back(elem);
                tempArr.push_back(0);
            }else{
                tempArr.push_back(elem);
            }
        }
        tempArr.erase(tempArr.begin()+firstSize,tempArr.begin()+tempArr.size());
        arr = tempArr;
    }
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> res;
        for(int i=0;i<m;i++){
            res.push_back(nums1[i]);
        }
        for(int i=0;i<n;i++){
            res.push_back(nums2[i]);
        }
        sort(res.begin(),res.end());
        for(int i=0;i<nums1.size();i++){
            nums1[i]=res[i];
        }
    }
    int removeElement(vector<int>& nums, int val) {
        int result {0};
        for (int elem: nums){
            if (elem != val){
                nums[result] = elem;
                result++;
            }
        }
        return result;
    }
    bool checkIfExist(vector<int>& arr) {
        for(int i {0};i<arr.size();++i){
            for(int j {0};j<arr.size();++j){
                if (i!=j && arr.at(i) == (arr.at(j)*2)){
                    return true;
                }
            }
        }
        return false;
    }
    bool validMountainArray(vector<int>& arr) {
        int size = arr.size();
        int i = 0;
        // walk up
        while (i+1 < size && arr[i] < arr[i+1])
            i++;
        // peak can't be first or last
        if (i == 0 || i == size-1)
            return false;
        // walk down
        while (i+1 < size && arr[i] > arr[i+1])
            i++;
        return i == size-1;
    }
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int temp;
        int mx = -1;
        for (int i = n-1; i >= 0; i--){
            temp = arr[i];
            arr[i] = mx;
            mx = max(mx, temp);
        }
        return arr;
    }
    /*
    Let's look at one more example. This time, the result Array is smaller than the input Array! How's this going to work? Let's find out! Here's the problem description:

    Given a sorted array, remove the duplicates such that each element appears only once.

    Input: array = [1, 1, 2]
    Output: [1, 2]
    Input: array = [0, 0, 1, 1, 1, 2, 2, 3, 3, 4]
    Output: [0, 1, 2, 3, 4]
    You've hopefully already done this question, back when we were looking at deleting items from an Array. In that case, your algorithm might have looked something like this.
    */
    int removeDuplicates(vector<int>& nums) {
        // The initial length is simply the capacity.
        int length = nums.size();
        // Assume the last element is always unique.
        // Then for each element, delete it iff it is
        // the same as the one after it. Use our deletion
        // algorithm for deleting from any index.
        for (int i = length - 2; i >= 0; i--) {
            if (nums.at(i) == nums[i + 1]) {
                // Delete the element at index i, using our standard
                // deletion algorithm we learned.
                for (int j = i + 1; j < length; j++) {
                    nums.at(j-1) = nums.at(j);
                }
                // Reduce the length by 1.
                length--;
            }
        }
        // Return the new length.
        return length;
    }
    /*
    This is actually an in-place algorithm, because it doesn't require any extra space—its space complexity is O(1)O(1). However, the time complexity's not so flash, at O(N^2). This is because of the nested loop.
    We want to get the algorithm down to an O(N) time complexity.
    */
    int removeDuplicatesReturnAnInt(vector<int>& nums) {
        if(nums.size()==0 or nums.size()==1)
            return nums.size();
        int temp=1,i=1;
        while(i<nums.size()) {
            if(nums[i]!=nums[i-1]) {
                nums[temp]=nums[i];
                ++temp;
            }
            ++i;
        }
        return temp;
    }
    vector<int> copyWithRemovedDuplicates(vector<int> nums) {
            
        // Check for edge cases.
        if (nums.size() == 0) {
            return nums;
        }
        // Count how many unique elements are in the Array.
        int uniqueNumbers = 0;
        for (int i = 0; i < nums.size(); i++) {
            // An element should be counted as unique if it's the first
            // element in the Array, or is different to the one before it.
            if (i == 0 || nums[i] != nums[i - 1]) {
                uniqueNumbers++;
            }
        }

        // Create a result Array.
        vector<int> result(uniqueNumbers);

        // Write the unique elements into the result Array.
        int positionInResult = 0;
        for (int i = 0; i < nums.size(); i++) {
            // Same condition as in the previous loop. Except this time, we can write
            // each unique number into the result Array instead of just counting them.
            if (i == 0 || nums[i] != nums[i - 1]) {
                result.at(positionInResult) = nums.at(i);
                positionInResult++;
            }
        }
        return result;
    }
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;
        for (int cur = 0; cur < nums.size(); cur++) {
            if (nums[cur] != 0) {
                swap(nums[lastNonZeroFoundAt++], nums[cur]);
            }
        }
    }
    vector<int> sortArrayByParity(vector<int>& A) {
        for(int theLastEvenNum = 0,current = 0; current<A.size();current++){
            if(A.at(current)%2==0){
                swap(A.at(theLastEvenNum++),A.at(current));
            }
        }
        return A;
    }
    int heightChecker(vector<int>& heights) {
        int result {0};
        vector<int> sortedHeights {heights};
        sort(sortedHeights.begin(),sortedHeights.begin()+heights.size());
        for(int i{0};i<sortedHeights.size();++i){
            if(heights.at(i)!=sortedHeights.at(i)){
                ++result;
            }
        }
        return result;
    }
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        int numSwaps = 0;
        int curInt = nums.at(0);
        for (int i = 1; i < nums.size(); ++i){
            if (curInt != nums.at(i)){
                curInt = nums.at(i);
                numSwaps++;
            }
            if (numSwaps == 2){
                return curInt;
            }
        }
        
        return nums.at(0);
    }
    int findDuplicate(vector<int>& nums) {
        vector<int> cnt(nums.size()+1);
        for(auto x: nums){
            cnt[x]++;
            if(cnt[x]>1) return x;
        }
        return -1;
    }
};
