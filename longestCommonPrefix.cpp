// Challenge :
// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".



#include <iostream>
#include <string>
#include <vector>


std::string longestCommonPrefix(std::vector<std::string>& strs) {
    std::string longest = "";
    char current;

    for (int i = 0; i < strs[0].length(); i++) {
        current = strs[0][i];
        if (current == strs[1][i] && current == strs[2][i]) {
            longest = longest + current;
        }
        else {
            return longest;
        }
    }
    return longest;
}

bool testLongestCommonPrefix(std::vector<std::string> input, std::string expected) {
    if (longestCommonPrefix(input) == expected) {
        std::cout << "Success\n";
        return true;
    }
    else {
        std::cout << "Failure\n";
        return false;
    }
}



int main()
{
    testLongestCommonPrefix({"flower", "flow", "flight"}, "fl");
    testLongestCommonPrefix({ "dog", "racecar", "car" }, "");
}