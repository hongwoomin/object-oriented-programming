#include <iostream>
using namespace std;

int main(){
	
	int a,b,c,d;
	cin>> a >> b >> c >> d;
	if (b<c || d<a){
		cout << "No";
	}
	else{
		cout << "Yes";
	}
	return 0;
}
