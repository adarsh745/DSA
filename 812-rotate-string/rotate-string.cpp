class Solution {
public:
    bool rotateString(string s, string goal) {

        int l=s.size();
        int r=goal.size();

        if(l!=r) return false;

        string a = s+s;

        int pos = a.find(goal);

        if(pos==-1) return false;

        return true;
        
    }
};