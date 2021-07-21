//
//  CodeSignalPracticeAssignment.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 19/07/2021.
//

#include "CodeSignalPracticeAssignment.hpp"
int Assignment::add(int a, int b){
    return a+b;
}
int Assignment::centuryFromYear(int year){
    if(year<100){
        return 1;
    }
    int ans = (year%10 == 0) ? year/100 : year/100+1;
    return ans;
}
bool Assignment::checkPalindrome(string line) {
    string reverseline = line;
    reverse(line.begin(), line.end());
    return line==reverseline;
}
int Assignment::adjacentElementsProduct(vector<int> inputArray){
    int returningans = inputArray.at(0)*inputArray.at(1);
    for(int i=0;i<inputArray.size()-1;++i){
        returningans = max(inputArray.at(i)*inputArray.at(i+1),returningans);
    }
    return returningans;
}
int Assignment::shapeArea(int n){
    int answer = 1;
    for(int i=1;i<n;++i){
        answer += i*4;
    }
    return answer;
}
int Assignment::makeArrayConsecutive2(vector<int> statues){
    sort(statues.begin(),statues.end());
    int returningval = 0;
    for(int i=0;i<statues.size()-1;++i){
        returningval += statues.at(i+1)-statues.at(i)-1;
    }
    return returningval;
}
int Assignment::matrixElementsSum(vector<vector<int>> matrix){
    int returning = 0;
    int lengthTotal = matrix.size();
    int rowlength = matrix.at(0).size();
    vector<vector<int>> colums;
    for(int i=0;i<rowlength;++i){
        for(int j=0;j<lengthTotal;++j){
            if(matrix[j][i]==0) break;
            returning+=matrix[j][i];
        }
    }
    return returning;
}
bool Assignment::almostIncreasingSequence(vector<int> sequence) {
    // 1. Check which position, the array becomes unordered, that is, the elements before it (not included) are in order
    auto it = std::is_sorted_until(sequence.begin(), sequence.end(), [](int x, int y) { return x <= y; });
    // 2. Check if the elements after it (including) are in order, if they are out of order, return false directly
    if (!std::is_sorted(it, sequence.end(), [](int x, int y) { return x <= y; })) {
        return false;
    };
    // 3. If the unordered position is at 0, 1 and end-1, then true is returned, and a position of 0 means there is only one element
    if (!(sequence.begin() + 2 <= it && it <= sequence.end() - 2)) {
        return true;
    }
    // 4. Other cases (it-2), (it-1), (it), (it + 1)
    // Because the condition is not met at it, you need to delete (it) or (it-1)
    // If you delete (it), because (it-1) <(it + 1)
    // If you delete (it-1), because (it-2) <(it)
    if (*(it - 1) < *(it + 1) || *(it - 2) < *it) {
        return true;
    }
    return false;
}

vector<string> Assignment::allLongestStrings(vector<string> inputArray){
    int mxLength = inputArray.at(0).length();
    for(auto element:inputArray){
        int lengths = element.length();
        mxLength = max(mxLength, lengths);
    }
    vector<string> returnval;
    for(auto element:inputArray){
        if(element.size()==mxLength){
            returnval.push_back(element);
        }
    }
    return returnval;
}

int Assignment::commonCharacterCount(string s1, string s2){
    map<char,int> charAndTimes1;
    map<char,int> charAndTimes2;
    for(auto element:s1){
        charAndTimes1[element] = 0;
    }
    for(auto element:s1){
        charAndTimes1[element]++;
    }
    for(auto element:s2){
        charAndTimes2[element] = 0;
    }
    for(auto element:s2){
        charAndTimes2[element]++;
    }
    int returnAns = 0;
    for(auto element:charAndTimes1){
        if(charAndTimes2.find(element.first)!=charAndTimes2.end()){
            returnAns+= min(element.second,charAndTimes2[element.first]);
        }
    }
    return returnAns;
}

bool Assignment::isLucky(int n){
    string strn = to_string(n);
    int breakpoint = strn.length()/2;
    string firsthalf = strn.substr(0,breakpoint);
    string secondhalf = strn.substr(breakpoint,strn.length()-1);
    int sumfirst = 0;
    int sumsecond = 0;
    for(auto element:firsthalf){
        sumfirst+=int(element)-48;
    }
    for(auto element:secondhalf){
        sumsecond+=int(element)-48;
    }
    return sumfirst==sumsecond;
}

vector<int> Assignment::sortByHeight(vector<int> a){
    vector<int> humanheight;
    for(int i=0;i<a.size();++i){
        if(a.at(i)!=-1){
            humanheight.push_back(a.at(i));
            a.at(i)=0;
        }
    }
    sort(humanheight.begin(),humanheight.end());
    int index = 0;
    for(int i=0;i<a.size();++i){
        if(a.at(i)==0){
            a.at(i)= humanheight.at(index);
            ++index;
        }
    }
    return a;
}

string Assignment::reverseInParentheses(string inputString){
    if(inputString.size()==0) return inputString;
    while(inputString.find('(')!=std::string::npos){
        int opener = 0;
        int closer = 0;
        for(int i=0;i<inputString.length();++i){
            if(inputString.at(i)=='('){
                opener = i;
            }
        }
        for(int i=opener;i<inputString.length();++i){
            if(inputString.at(i)==')'){
                closer = i;
                break;
            }
        }
        string process = inputString.substr(opener+1,closer-opener-1);
        reverse(process.begin(),process.end());
        inputString.replace(opener,process.size()+2,process);
    }
    return inputString;
}
