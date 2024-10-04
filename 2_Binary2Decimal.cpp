#include<iostream>
using namespace std;
int power_fn(int a,int b){
	int res=1;
	for(int i=1;i<=b;i++){
		res=res*a;
	}
	return res;
}
int binary2decimal(int num){
	int power=0;
	int new_num=0;
	while(num>0){
		int num1=0;
		int rem=num%10;
		num1=rem*power_fn(2,power);
		power++;
		new_num=new_num+num1;
		num=num/10;
	}
	return new_num;
}
int main(){
	int num=1101;
	cout<<binary2decimal(num);
	return 0;
}