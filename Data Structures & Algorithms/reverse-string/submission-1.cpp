class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size()-1;
        char left=0;
        char right=n;
        while(left<right){
            char a=s[left];
            s[left]=s[right];
            s[right]=a;
            left++;
            right--;

        }
    }
};