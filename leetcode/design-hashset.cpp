class MyHashSet {

private:
    unordered_map<int, bool> m;
public:
    MyHashSet() {
        
    }
    
    void add(int key) {
       // cout << "add" << endl;
        m[key] = true;
    }
    
    void remove(int key) {
        m[key] = false;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        //if(key == 59) cout << 59 << " " << m[key] << endl;
        return m[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
