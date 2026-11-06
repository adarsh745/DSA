class Solution {
public:
    bool isPalindrome(string s) {

        string newS="";

        for(char c : s)
        {
            if(isalnum(c))
            {
                newS+=tolower(c);

            }
        }

        cout<<newS;
        string Ss=newS;
        reverse(newS.begin(), newS.end());

        if(Ss==newS) return true;

        return false;



        
        
    }
};