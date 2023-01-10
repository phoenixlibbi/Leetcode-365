class Solution {
public:
    string maximumTime(string time) {
        string s(time);
        if(s[0]=='?'&&(s[1]<='9'&&s[1]>'3')) s[0]='1';
        else if(s[0]=='?')s[0]='2';
        if(s[1]=='?'&& (s[0]=='0'||s[0]=='1'))s[1]='9';
        else if(s[1]=='?')s[1]='3';
        if(s[3]=='?')s[3]='5';
        if(s[4]=='?')s[4]='9';
        return s;
    }
};