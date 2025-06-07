/*
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.
*/

int strStr(string haystack, string needle) {
    for(int i = 0; i < haystack.size(); i++){
        if(haystack[i] == needle[0]) {
            int j = 0, k = i;
            while(haystack[k] == needle[j]){
                if(j == needle.size() - 1){
                    return i;
                }
                k++; j++;
            }
        }
    }
    return -1;
}