string removeDups(string str) {
        unordered_set<char> st;
        int n = str.length();
        string temp;
        for(int i=0;i<n;i++)
        {
            char ch = str[i];
            if(st.find(ch) == st.end())
            {
                temp += str[i];
                st.insert(ch);
                
            }
        }
        return temp;
    }
