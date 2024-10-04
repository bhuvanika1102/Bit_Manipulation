#include<iostream>
#include<bitset>
using namespace std;
int main(){
	int num=13;
	bitset<4> binary(num);
	bitset<4> complement= (~binary).to_ulong() + 1;
	cout<<complement;
	return 0;
}