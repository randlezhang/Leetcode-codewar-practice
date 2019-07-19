int myAtoi(string str) {
	const  int INT_MIN=-pow(2,31);
	const  int INT_MAX=pow(2,31)-1;
	int num=0;
	bool neg_flag=false;
	for(int i=0;i<str.size();++i)
	{
		if (str[i]==' ' && num==0) continue;
		if (str[i]=='-' && !neg_flag) {neg_flag=true;continue;}
		if (str[i]>='0' && str[i]<='9') {
                if (num>INT_MAX/10) return (neg_flag)? INT_MIN:INT_MAX;
                num=num*10+str[i]-'0';continue;}
		return (neg_flag)? max(-num,INT_MIN):min(INT_MAX,num);
	}
	return (neg_flag)? max(-num,INT_MIN):min(INT_MAX,num);
}

int main(){
	cout<<"the return is"<<myAtoi("-91283472332")<<endl;
}
