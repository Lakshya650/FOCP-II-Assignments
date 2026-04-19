#include <iostream>
using namespace std;
int main() {
	long long l,r;
	cin>>l>>r;

	long long odd = (r+1) / 2 - (l / 2); 

	if(odd % 2 == 0){
		cout<<"even";
	}
	else{
		cout<<"odd";
	}
	return 0;
}