/* int myAtoi(string str) {
    string num("-+0123456789");
    string nums("0123456789");
    long int atio=0;
    int flag=0;
    auto pos = str.find_first_of(num);
    for(int i=0;i<pos;++i) {
        if(str[i]!=' ') return 0;
    }
    if((str[pos]=='-')||(str[pos]=='+')) {if(str[pos]=='-') flag=1;++pos;}
    auto npos=str.find_first_not_of(nums,pos);
    if(npos==(-1)) npos=str.size();
    for(int j=pos;j<npos;++j){
        atio=atio*10+(str[j]-'0');
        if(atio>INT_MAX) return (flag)? INT_MIN:INT_MAX;
    }
    atio=(flag)? -atio:atio;
    if(atio<INT_MIN) return INT_MIN;
    if(atio>INT_MAX) return INT_MAX;
    return atio;
} */
int myAtoi(string str) {
    long int atio=0;
    int flag = 0;
    int state=0;
    for(int i=0;i<str.size();++i){
        if(state==0){
            if(str[i]==' ') continue;
            if(str[i]=='-'){flag=1;state=1;continue;}
            if(str[i]=='+'){state=1;continue;}
            if((str[i]>='0')&&(str[i]<='9')) {state=1;atio=10*atio+str[i]-'0';continue;}
            return 0;
        }
        if(state==1){
            if((str[i]>='0')&&(str[i]<='9')) {
                atio=10*atio+str[i]-'0';
                if(atio>INT_MAX) return (flag)? INT_MIN:INT_MAX;
                continue;}
            break;
        }
        }
    atio=(flag)? -atio:atio;
    if(atio<INT_MIN) return INT_MIN;
    if(atio>INT_MAX) return INT_MAX;
    return atio;
}