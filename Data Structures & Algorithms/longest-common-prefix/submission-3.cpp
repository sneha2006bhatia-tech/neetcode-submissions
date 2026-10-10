class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int index=0;
        
        string string1=strs[0];
        string string2=strs[strs.size()-1];
        int n=string1.size();
        for(int i=0;i<n;i++){
            if(string1[i]==string2[i]){
                index++;
            }
            else{
                break;
            }
        }
        if(index!=0){
            
            return string1.substr(0,index);
            
        }
        else {
            return "";
        }
    }
};