class Solution {
public:

    string encode(vector<string>& arr) {

         string stri="";
        for(auto num : arr){
            int len = num.size();
            stri= stri + to_string(len)+"/:"+  num;
        }
        // cout<< stri;
        return stri;
        // write your logic to encode the strings
    }

    vector<string> decode(string s) {
 vector<string> arr;
    int i = 0;
    int n = s.size();
    // cout<< s.size()<<endl;
    // write your logic to decode the string
    while (i < s.size())
    {
        int len = 0;
      while (i< n &&  s[i] >= '0' && s[i] <= '9')
        {
            len = len * 10 + (s[i] - '0');
            i++;
        }
i+=2;
        // cout << "len: " << len << " i: " << i << endl;
        // cout << "substr: " << s.substr(i + 2, len) << endl;
        if( i<= n)
        arr.push_back(s.substr(i , len));
        i = len + i;
        // k++;
    }
    return arr;

    }
};
