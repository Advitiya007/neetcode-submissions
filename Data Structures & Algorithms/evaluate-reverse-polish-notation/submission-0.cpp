class Solution {
   public:
    int evalRPN(vector<string>& tokens) {
        // int ans =0;
        stack<int>st;
        for (auto it : tokens) {
            if (isdigit(it[0]) || it[0]=='-' && isdigit(it[1])) {
                st.push(stoi(it));
            } else {
                int ans;
                int val2 = st.top();
                st.pop();
                int val1 = st.top();
                st.pop();
                if (it == "+")
                    ans = val1 + val2;
                else if (it == "-")
                    ans = val1 - val2;
                else if (it == "/")
                    ans = val1 / val2;
                else if (it == "*")
                    ans = val1 * val2;
            st.push(ans);
            }
        }

        return st.top();
    }
};
