string printString(string s, char ch, int count) 
    {
        unordered_map<char, int> m;
        bool found = 0;
        int index = 0;
        string res = "";
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]] ++;
            if(m[ch] == count)
            {
                found = 1;
                index = i;
                break;
            }
        }
        while(found && index < s.length())
        {
            index++;
            res += s[index];
        }
        return res;
    }
