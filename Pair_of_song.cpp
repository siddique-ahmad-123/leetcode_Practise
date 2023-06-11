class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {

        int n= time.size();
        unordered_map<int,long long> m;
        for(int i=0;i<n;i++){
            time[i]=time[i]%60;
            m[time[i]]++;
        }
        long long count=0;
        for(auto x:m){
            if(x.first==0 || x.first==30)
            count+=((x.second-1)*(x.second))/2;

            else if(x.first<30 && m.count(60-x.first)){
                count+=(m[x.first]*m[60-x.first]);
            }
        }
        return count;
   
        
    }
};