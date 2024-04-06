class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int>> PQ;
    unordered_set<int> addBacks;
    int i;

    SmallestInfiniteSet() {
        i = 1;
        PQ.push(i);
    }
    
    int popSmallest() {
        int min = PQ.top();
        if(min == i) {
            PQ.pop(); 
            i++; 
            PQ.push(i);
        }
        else {
            PQ.pop(); 
            addBacks.erase(min);
        }
        return min;
    }
    
    void addBack(int num) {
        if (num < i && addBacks.find(num) == addBacks.end()){
            PQ.push(num);
            addBacks.insert(num);
        } 
    }
};