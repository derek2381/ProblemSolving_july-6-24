// problem link
// https://leetcode.com/contest/biweekly-contest-134/problems/alternating-groups-i/

class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int n = colors.size();
        colors.push_back(colors[0]);
        colors.push_back(colors[1]);
        int count = 0;

        for(int i = 0;i < n;i++){
            if(colors[i] != colors[i+1] && colors[i+1] != colors[i+2]){
                count++;
            }
        }

        return count;
    }
};
