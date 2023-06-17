#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    
    int largestRectangleArea(vector<int>& heights) {
          
         vector<int> v1=first(heights);
        vector<int> v2=second(heights);
        vector<int> v;
        for(int i=0;i<heights.size();i++){
            v.push_back((v2[i]-v1[i]-1)*heights[i]);
            
        }
       int x=*max_element(v.begin(), v.end());
        return x;
    }

      vector<int> second(vector<int> &a)
    {
      vector<int> v2;
      stack<pair<int,int>> s;
      for(int i=a.size()-1;i>=0;i--){
          if(s.size()==0){
              v2.push_back(a.size());
          }
          else if(s.top().first<a[i]){
              v2.push_back(s.top().second);
          }
          else{
              while(s.size()!=0&&s.top().first>=a[i]){
                  s.pop();
              }
              if(s.size()==0){
                  v2.push_back(a.size());
              }
              else{
                  v2.push_back(s.top().second);
              }
          }
          s.push({a[i],i});
      }
      reverse(v2.begin(),v2.end());
      return v2;
    }


     vector<int> first(vector<int> &a)
    {
      vector<int> v1;
      stack<pair<int,int>> s;
      for(int i=0;i<a.size();i++){
          if(s.size()==0){
              v1.push_back(-1);
          }
          else if(s.top().first<a[i]){
              v1.push_back(s.top().second);
          }
          else{
              while(s.size()!=0&&s.top().first>=a[i]){
                  s.pop();
              }
              if(s.size()==0){
                  v1.push_back(-1);
              }
              else{
                  v1.push_back(s.top().second);
              }
          }
          s.push({a[i],i});
      }
      return v1;
    }
























};