class RandomizedSet {
public:
    unordered_map<int,int>m;
    vector<int>v;
    RandomizedSet() {
       
        
    }
    
    bool insert(int val) {
        if(m.find(val)!=m.end())return false;
        {//!m[val]
            
            m[val]=v.size();
            v.push_back(val);
            return true;
            
        }
      //  return false;
    }
    
    bool remove(int val) {
        if(m.find(val)==m.end())
        return false;
        {
            
            //swap(v[m[val]],v.back());
            v[m[val]]=v.back();
            m[v.back()]=m[val];
            v.pop_back();
            m.erase(val);
    
            return true;
            
    }
    }
        
    
    int getRandom() {
// auto it =m.begin();
//         int ran= rand() % m.size();
//          advance(it,ran);
//         return it->first;
        
        return v[rand()%(v.size())];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */