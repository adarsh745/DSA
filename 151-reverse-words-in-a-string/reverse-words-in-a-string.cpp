class Solution {
public:
    string reverseWords(string s) {

        string ans="";

        stack<string> st;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
            {
                ans=ans+s[i];
            }
           else
            {
                if(ans != "")
                {
                    st.push(ans);
                    ans = "";
                }
            }
        }

        if(ans.size()!=0)
        {
            st.push(ans);
        }

        string res="";

        while(!st.empty())
        {
            res=res+st.top();
            st.pop();
            if(!st.empty())
            {
                 res += " ";

            }   
            
        }
        
        return res;
    }
};