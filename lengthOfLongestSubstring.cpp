//
// Created by zhangxh on 2019-09-08.
//
int lengthOfLongestSubstring(string s) {
    int max=0;
    string subs=s.substr(0,1);
    for(int i =1;i<s.size();++i){
        auto pos=subs.find(s[i]);
        if (pos==npos) {s.append(s[i]);continue;}
        max=(subs.size()>max)? subs.size(),max;
        subs.erase(0,npos);
        subs.append(s[i])
    }
    return max;
}
