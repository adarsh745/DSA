class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& vec) {
        vector<int> arr=vec;
        if(vec.size()==1)return{1};
        if(vec.size()==0)return vec;
        sort(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        int r=1;
        mp[arr[0]]=1;
        

        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[i-1]){
                mp[arr[i]]=++r;
                
            }
            else{
                mp[arr[i]]=r;
                
            }
            
        }
        for(int i=0;i<vec.size();i++){
            vec[i]=mp[vec[i]];
        }
    return vec;}
};