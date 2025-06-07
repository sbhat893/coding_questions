/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
*/

string longestCommonPrefix(vector<string>& strs) {
    sort(strs.begin(), strs.end());
    string common_prefix = "";
    for(int i = 0; i < min(strs[0].size(), strs[strs.size() - 1].size()); i++){
        if(strs[0][i] != strs[strs.size() - 1][i]) {
            return common_prefix;
        }
        common_prefix += strs[0][i];
    }
    return common_prefix;
}