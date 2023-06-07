class RandomizedSet {
public:

unordered_map<int,int> mp;
vector<int> ans;

    RandomizedSet() {
        
    }
    
    bool insert(int val) {
   if(mp.find(val)!=mp.end()){
       return false;
   }

   ans.push_back(val);
   mp[val]=ans.size()-1;
   return true;
        
    }
    
    bool remove(int val) {
        if(mp.find(val)==mp.end())
        return false;

        auto it=mp.find(val);

        ans[it->second]=ans.back();
        ans.pop_back();
        mp[ans[it->second]]=it->second;
        mp.erase(val);
        return true;
        
    }
    
    int getRandom() {
        return ans[rand()%ans.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */