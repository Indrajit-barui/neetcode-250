class MyHashSet {
public:
bool arr[1000001];
    MyHashSet() {
      for(int i=0;i<=1000000;i++){
        arr[i]=false;
      }
    }
    
    void add(int key) {
        arr[key]=true;
    }
    
    void remove(int key) {
        if(arr[key]==true){
arr[key]=false;
        }
        
    }
    
    bool contains(int key) {
        if(arr[key]==true) return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */