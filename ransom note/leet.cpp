#include <iostream>
#include <list>
#include <bits/stdc++.h>

class Solution {
private:
    std::string ransomNote;
    std::string magazine;
     
public:
    bool canConstruct(std::string ransomNote, std::string magazine) {
        std::list<std::string> res;
        for (int j = 0; j < ransomNote.length(); j++){
            char x = ransomNote.at(j);
            int rans = std::count(ransomNote.begin(), ransomNote.end(), x);
            int mag = std::count(magazine.begin(), magazine.end(), x);
            if ((rans <= mag) || (rans == mag)){
                res.push_back("true");
            }    
            else if ((rans != mag) && (rans > mag)) {
                res.push_back("false");
            }
        }

        int g = std::count(res.begin(), res.end(), "false");
        if (g >= 1){
            return false;
        }
        else{
            return true;
        }

        return true;        
    }

};