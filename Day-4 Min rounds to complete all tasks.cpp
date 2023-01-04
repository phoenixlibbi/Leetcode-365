#include<vector>
#include<map>
#include<iostream>
using namespace std;
class Solution {
public:
	int minimumRounds(vector<int>& tasks) {
		int counter = 0;
		map<int, int> count;
		for (auto i = tasks.begin(); i != tasks.end(); i++) {
			count[*i]++;
		}
		//loop on map and count
		for (auto it = count.begin(); it != count.end(); it++) {
			if (it->second < 2)return -1;
			else {
				counter += ((it->second / 3) + ceil((it->second % 3) / 2.0));
			}
		}
		return counter;
	}
};