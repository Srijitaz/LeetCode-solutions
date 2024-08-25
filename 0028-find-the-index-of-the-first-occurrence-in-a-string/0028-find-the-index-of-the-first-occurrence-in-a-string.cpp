class Solution {
public:
    int strStr(string haystack, string needle) {
        int len_needle=needle.size();
        int len_hay=haystack.size();
        for(int i=0 ; i<=len_hay-len_needle ; i++)
        {
            if(haystack.substr(i,len_needle)==needle)
            return i;
        }
        return -1;
    }
};