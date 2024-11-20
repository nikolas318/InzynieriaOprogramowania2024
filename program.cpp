#include<iostream>

using namespace std;

int silnia(int a){
	if (a == 0){
		return 1;
	}
	else{
		return a * silnia(a - 1); 
	}
}

int main(){
	
	int n = 0;

	cin >> n;
	
	if (n < 0){
		cout << "Wczytano wartosc ujemna";
	}
	else {
		cout << silnia(n);
	}

	return 0;
}
