#include<vector>
#include<iostream>
#include<string>

using namespace std;
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string word = "";
        for (auto x : s)
        {
            if (x == ' ')
            {
                words.push_back(word);
                word = "";
            }
            else
            {
                word = word + x;
            }
        }
        words.push_back(word);
        if (words.size() != pattern.size())
            return false;
        for (int i = 0; i < pattern.size(); i++)
        {
            for (int j = i + 1; j < pattern.size(); j++)
            {
                if (pattern[i] == pattern[j] && words[i] != words[j])
                    return false;
                if (pattern[i] != pattern[j] && words[i] == words[j])
                    return false;
            }
        }
        return true;
    }
};