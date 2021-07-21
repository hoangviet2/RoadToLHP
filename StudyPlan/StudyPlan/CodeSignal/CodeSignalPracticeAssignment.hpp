//
//  CodeSignalPracticeAssignment.hpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/07/2021.
//

#ifndef CodeSignalPracticeAssignment_hpp
#define CodeSignalPracticeAssignment_hpp
#include <algorithm>
#include <array>
#include <bitset>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdarg>
#include <cstdio>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
#include <atomic>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
using namespace std;
class Assignment{
public:
    int add(int,int);
    int centuryFromYear(int);
    bool checkPalindrome(string);
    int adjacentElementsProduct(vector<int>);
    int shapeArea(int);
    int makeArrayConsecutive2(vector<int>);
    int matrixElementsSum(vector<vector<int>>);
    bool almostIncreasingSequence(vector<int>);
    vector<string> allLongestStrings(vector<string>);
    int commonCharacterCount(string,string);
    bool isLucky(int);
    vector<int> sortByHeight(vector<int>);
    string reverseInParentheses(string);
};
#endif /* CodeSignalPracticeAssignment_hpp */
