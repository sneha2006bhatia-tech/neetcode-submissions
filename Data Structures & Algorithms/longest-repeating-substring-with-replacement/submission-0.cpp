class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        int max_fr=0;
        int max_len=0;
        int n=s.size();
        int hash[26]={0};
        
            for(int right=0;right<n;right++){
                hash[s[right]-'A']++;
                max_fr=max(max_fr,hash[s[right]-'A']);
                int window=right-left+1;
            
                if(window-max_fr<=k){
                    max_len=max(max_len,window);
                }
                else{
                    hash[s[left]-'A']--;
                    left++;
                }
            }
            
        
        return max_len;
    }
};
