class Solution {
public:
    int scoreOfString(string s) {
        int sum = 0;
        for(int i=1;i<s.length();i++){
            sum += abs(s[i-1] - s[i]);
        }

        return sum;
    }
};

int main(){
  Solution S1;
  cout<<S1.scoreOfString("hello")<<endl;
  return 0;
}
