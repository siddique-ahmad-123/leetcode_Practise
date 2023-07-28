class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
       int count=0;
        
        int i=1;
        vector<int> l=intervals[0];
        while(i<n){
           
            // vector<int> next_interval=intervals[j];

            // int cs=curr_interval[0];
            // int ce=curr_interval[1];

            // int ns=next_interval[0];
            // int ne=next_interval[1];
            
            int start=intervals[i][0];
            int end=intervals[i][1];
            int last_end=l[1];


            if(start>=last_end){//non overlapping
                l=intervals[i];
                i++;
            }
            else if(end>=last_end){
                i++;
                count++;
            }
            else if(end<last_end){
                l=intervals[i];
                i++;
                count++;
            }
        }
        return count;
        
    }
};