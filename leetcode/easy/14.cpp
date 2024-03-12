// Date : 2024-03-12
// Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        if (strs.size() == 0) {
            return result;
        }
        for (int i = 0; i < strs[0].size(); i++) {
            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != strs[0][i]) {
                    return result;
                }
            }
            result += strs[0][i];
        }
        return result;
        //0ms solution
        sort(strs.begin(),strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size()-1];
        int ind = 0;
        while(ind<s1.length() && ind<s2.length()){
            if(s1[ind]==s2[ind]){
                ind++;
            }
            else{
                break;
            }
        }
        return s1.substr(0,ind);
    }
};