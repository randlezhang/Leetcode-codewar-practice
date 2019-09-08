vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    vector<int>::iterator start=nums.begin();
    vector<int>::iterator it;
    for(it=nums.begin();it!=nums.end();++it){
        vector<int>::iterator b=find(it+1,nums.end(),target-(*it));
        if((b!=nums.end())&&(b!=it)){
            res.push_back(distance(start,it));
            res.push_back(distance(start,b));
            break;
        }
    }
    return res;    
    }
}