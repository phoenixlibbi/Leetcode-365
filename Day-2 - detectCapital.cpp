#include<vector>
#include<iostream>
#include<string>

using namespace std;
class Solution {
public:
    int allCap=0;
    int allSmall=0;
    bool firstCap=false;
    bool detectCapitalUse(string word) {
        if(isupper(word[0])){
                firstCap=true;
            }
        for(int i=1;i<word.length();i++){
            if(isupper(word[i])){
                allCap++;
            }
            if(!(isupper(word[i]))){
                allSmall++;
            }
        }
        if(allCap==word.length()-1 && firstCap==true) return true;
        else
        if(allSmall==word.length()-1) return true;
        else
        if(allCap==0 && allSmall==0) return true;
        else
        return false;
    }
};
