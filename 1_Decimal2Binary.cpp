#include<iostream>
using namespace std;
string reverse(string str){
	string result="";
	for(int i=str.length()-1;i>=0;i--){	
	result+=str[i];
	}
	return result;
}
string convert2binary(int num){
	string result="";
	while(num!=1){
		int rem=num%2;
		if(rem==1){
			result+='1';
		}
		else{
			result+='0';
		}
		num=num/2;		
	}
	if(num==0){
		result+='0';
	}
	else{
		result+='1';
	}
	string answer=reverse(result);
	
	return answer;
}
int main(){
	int num=13;
	cout<<convert2binary(num);
	return 0;
}