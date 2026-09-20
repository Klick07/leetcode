class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, maxfreq = 0, maxlen = 0;
        int mp[26] = {0};

        while(r<s.size()){
            mp[s[r] -'A']++;
            maxfreq = max(maxfreq, mp[s[r]-'A']);

            while((r-l+1) - maxfreq > k){
                mp[s[l]-'A']--;
                l++;
                int max = 0;
                for(int i = 0; i<26; i++){
                    if(max < mp[i]){
                        max = mp[i];
                    }
                }
                maxfreq = max;
            }

            if((r-l + 1) - maxfreq <= k){
                maxlen = max(maxlen, r-l+1);
            }
            r++;
        }
        return maxlen;
    }
};