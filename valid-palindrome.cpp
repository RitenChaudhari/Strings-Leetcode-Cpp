#include<iostream>
#include<string>
using namespace std;

bool isAlphaNum(char ch){
    if((ch >= 0 && ch <= 9 )||
        (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
}

bool isPalindrome(string s){
    int start=0,end=s.length()-1;

    while(start<end){
        if(!isAlphaNum(s[start])){
            start++;
        }
        else if(!isAlphaNum(s[end])){
            end--;
        }

        if(tolower(s[start]) != tolower(s[end])){
            cout<<"invalid palindrome\n";
            return false;
        }

        start++;
        end--;
    }

    cout<<"valid palindrome\n";
    return true;
}

int main()
{
    isPalindrome("A man, a plan, a canal: Panama");
}