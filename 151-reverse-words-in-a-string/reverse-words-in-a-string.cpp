class Solution {
public:
    string reverseWords(string s) 
    {
        stack<string>st;
        int indx;
        for(int j=0;j<s.size();j++)
        {
            if(s[j]!=' ')
            {
                indx=j;
                cout<<indx;
                break;
            }
        }
           string p="";
        for(int i=indx;i<s.size();i++)
        {
          
            if(s[i]!=' ')
            {
                p=p+s[i];

            }
            else if(s[i]==' ' && s[i-1]!=' ')
            {
                st.push(p);
                p="";

            }
        }
        if(p!="")
        {
            st.push(p);
        }
        string ans=st.top();
        st.pop();
        while(!st.empty())
        {
            ans=ans+" "+st.top();
            st.pop();

        }
        return ans;

        
    }
};