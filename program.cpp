#include<iostream>

using namespace std;

int main(){
	
	int n = 0;

	cin >> n;
	
	if (n < 0){
		cout << "Wczytano wartosc ujemna";
	}
	else {
		cout << n;
	}
			
	return 0;
}
