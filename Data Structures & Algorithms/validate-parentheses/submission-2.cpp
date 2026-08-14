class Solution {
   public:
    bool isValid(string s) {
        stack<int> st;

        for (auto p : s) {
            if (p == '{' || p == '[' || p == '(')
                st.push(p);
            else {
                if (st.empty()) {
                    if (p == ']' || p == ')' || p == '}') return false;
                    // cout << "false";
                } else {
                    if (st.top() == '{' && p == '}' || st.top() == '(' && p == ')' ||
                        st.top() == '[' && p == ']')
                        st.pop();
                        else return false;
                }
            }
        }
        return st.empty();
    }
};
