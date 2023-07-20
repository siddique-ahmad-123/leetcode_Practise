class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        int n =  a.size();
        stack<int> st;
        for(int i=0;i<n;i++){
            if(st.empty() || a[i]>0){
                st.push(a[i]);
            }
            else
            {
                while(!st.empty() && st.top()>0 && st.top()<abs(a[i])){
                    st.pop();
                }
                if(!st.empty() && st.top()==abs(a[i])){
                    st.pop();
                }
                else{
                    if(st.empty() || st.top()<0){
                        st.push(a[i]);
                    }
                }
            }
        }

        vector<int> v;

         while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());

        return v;
    }
};