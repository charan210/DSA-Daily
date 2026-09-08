class Solution {
public:
    int characterReplacement(string s, int k) {
        int l=0,r=0,ml=0,mf=0;
        vector<int> hash(26,0);
        while(r<s.size()){
         hash[s[r]-'A']++;
         mf=max(mf,hash[s[r]-'A']);

        if((r-l+1)-mf > k){
            hash[s[l]-'A']--;
         
            l++;
        }
        if((r-l+1)-mf<=k){
            ml=max(ml,r-l+1);
        }
        r++;
        }
        return ml;
    }
};