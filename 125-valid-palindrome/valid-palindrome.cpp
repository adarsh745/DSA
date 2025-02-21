class Solution {
public:
    bool isPalindrome(string s) 
    {
        string s1;
        string s2="";
        int n=s.size();
         for (char c : s) 
         {
            if (isalnum(c)) 
            {
                s1+= tolower(c);
            }
        }
        s2=s1;
        reverse(s1.begin(),s1.end());
        if(s1==s2) return true ;
        cout<<s1;
        
         return false;

        
    }
};