//pangram
#include<map>
#include<iostream>
using namespace std;
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<int,int> m;
        for(int i=0;i<sentence.length();i++){
            m[sentence[i]]++;
        }
        if(m.size()==26)
            return true;
        else
            return false;
    }
};