#include<iostream>
#include<cstring>
using namespace std;

void reverse(char word[],int n)
{
    int st = 0;
    int end = n-1;
    while(st < end)
    {
        swap(word[st],word[end]);
        st++;
        end--;
    }
        
    cout<<word;
}

bool isPalindrome(char str[],int n)
{
    //Time Complexity : O(n/2) -> O(n)
    int st = 0,end = n-1;
    while(st<end)
    {
        if (str[st++] != str[end--])
        {
            cout<<"Not a Valid Palindrome\n";
            return false;
        }     
    }
    cout<<"Valid Palindrome\n";
    return true;
}

int main()
{
    char word[] = "Apple";
    char str[] = "madam";
    
    reverse(word,strlen(word));
    //isPalindrome(str,strlen(str));
    return 0;
}