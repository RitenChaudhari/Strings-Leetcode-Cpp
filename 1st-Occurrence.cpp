#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.length();
        int m = needle.length();

        if (m == 0){
            return 0;
        }
        if (m>n){
            return -1;
        }

        for(int i=0;i<n;i++){
            if(haystack[i] == needle[0]){
                if(haystack.substr(i,m) == needle){
                    return i;
                }
            }
        }

        return -1;
    }
};

int main()
{
    Solution sol;
    cout<<sol.strStr("leetcode","tc")<<"\n";
    return 0;
}