#include <iostream>

class Solution {
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        map<char,int> m;
        for (auto i : magazine) {
            m[i]++;
        }
        for (auto i : ransomNote) {
            m[i]--;
            if (m[i] < 0) {
                return false;
            }
        }
        return true;
    }
};
