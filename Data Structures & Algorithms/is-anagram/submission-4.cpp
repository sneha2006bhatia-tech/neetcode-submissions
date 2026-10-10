class Solution {
public:
    bool isAnagram(string s, string t) {
        int st[26]={0};
        bool ans;
        int s1=s.size();
        int t1=t.size();
        if(s1!=t1){
            ans=false;
        }
        else{
            for(int i=0;i<s1;i++){
                int ann=s[i]-'a';
                st[ann]++;
            }
            for(int i=0;i<t1;i++){
                int ann=t[i]-'a';
                st[ann]--;
            }
            for(int i=0;i<26;i++){
                if(st[i]!=0){
                    ans=false;
                    break;}
                else ans=true;

                }
            
        }
        return ans;
        
    }
};
