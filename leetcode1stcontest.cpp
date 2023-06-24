class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int n = words.size();
        int count=0;
        vector<string> v;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
           reverse(words[j].begin(),words[j].end());
            if(words[i]==words[j])
                count++;
                
            }
        }
        
        return count;
        
            
    
    }
};