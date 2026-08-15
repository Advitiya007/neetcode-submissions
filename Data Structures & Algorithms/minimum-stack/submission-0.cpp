class MinStack {
    vector<int> veci;

   public:
    MinStack() {}

    void push(int val) { veci.push_back(val); }

    void pop() { veci.pop_back(); }

    int top() {
        // if( start==-1) return -1;
        return veci.back();
    }

    int getMin() {
        int mini = INT_MAX;
        for (auto it : veci) mini = min(it, mini);
        return mini;
    }
};
