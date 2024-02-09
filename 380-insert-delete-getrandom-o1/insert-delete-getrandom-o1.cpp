class RandomizedSet {
public:
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if (map.find(val) == map.end()) {
            map[val] = vec.size();
            vec.push_back(val);
            return true;
        }
        return false;
    }
    
    bool remove(int val) {
        if (map.find(val) != map.end()) {
            map[vec[vec.size() - 1]] = map[val];
            vec[map[val]] = vec[vec.size() - 1];
            vec.pop_back();
            map.erase(val);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        return vec[std::rand() % vec.size()];
    }
private:
    std::vector<int> vec;
    std::unordered_map<int, int> map;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */