class MyHashSet {
set<int> ss;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
        ss.insert(key);
    }
    
    void remove(int key) {
        ss.erase(key);
    }
    
    bool contains(int key) {
        return ss.find(key) != ss.end();
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */