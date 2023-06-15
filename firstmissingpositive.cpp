class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int n = nums.size();
        
        unordered_set<int> st;
        for(auto x:nums) 
        st.insert(x);

        for(int i=1; ;i++){
            if(st.find(i)==st.end())
            return i;
        }

        return 0;


        
    }
};