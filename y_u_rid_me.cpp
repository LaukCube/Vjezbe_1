#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

void brojevi(int x){
	ofstream myfile;
	myfile.open ("brojevi.txt", ios::out | ios::app | ios::binary);
	myfile << x << endl;
	myfile.close();
}

void dijeli(float x){
	for (int i = 1; i <= (x/2); i++){
		if (!((int)x%i)) cout << i <<endl;
	}
	cout << x << endl;
}

void minimax(int x[]){
	int min[] = {x[0], 0};
	int max[] = {x[0], 0};
	for (int i = 0; i < 10; i++){
		if (x[i] < min[0]){
			min[0] = x[i];
			min[1] = i;
		}
		if (x[i] > max[0]){
			max[0] = x[i];
			max[1] = i;
		}
	}
	cout << "Najmanji broj je na poziciji " << min[1]+1 << ", a najveci na " << max[1]+1 << endl << endl;
}

int main(){
	
	// Zadatak 5
	cout << "Zadatak 5" << endl;
	
	int y;
	do {
		cout << "Unesi broj: ";
		cin >> y;
		if (y > 0 && y < 100) brojevi(y);
	} while (y > 0 && y < 100);
	cout << endl;
	
	// Zadatak 4
	cout << "Zadatak 4" << endl;
	
	int x1;
	do {
		cout << "Unesi x: ";
		cin >> x1;
		if (x1) dijeli(x1);
	} while (x1);
	cout << endl;
	
	// Zadatak 3
	cout << "Zadatak 3" << endl;
	
	int polje_a[10];
	for (int i = 0; i < 10; i++){
		cout << "Unesi [" << i+1 << "] broj u polje: ";
		cin >> polje_a[i];
	}
	minimax(polje_a);
	
	// Zadatak 2
	cout << "Zadatak 2" << endl;
	
	int *min = new int;
	cout << "Unesi broj minuta: " << endl;
	cin >> *min;
	
	cout << *min << " minuta iznosi " << *min/60 << " sati i " << *min%60 << " minuta" << endl << endl;
	
	delete min;
	
	// Zadatak 1
	cout << "Zadatak 1" << endl;
	
	int x;
	cout << "Unesi x: ";
	cin >> x;
	
	string rjeci[10];
	for (int i = 0; i < 10; i++){
		cout << "Unesi [" << i+1 << "] rijec: ";
		cin >> rjeci[i];
	}
	
	int j = 0;
	for (int i = 0; i < 10; i++){
		if (rjeci[i].length() == x) j++;
	}
	
	cout << j << endl << endl;
	

	system("pause");
	return 0;
}
