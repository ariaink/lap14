#include<iostream>
using namespace std;

const int N = 5;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]; 
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

//Do not modify source code above this line 
void inputMatrix(double x[][N]){
	for(int i = 0;i < N;i++){
		cout << "Row " << i+1 << ": ";
		for(int j = 0;j < N;j++){
			cin >> x[i][j];
		}
	}
}

void findLocalMax(const double a[][N],bool b[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			if((i == 0 || i == N - 1) || (j == 0 || j == N - 1)){
				b[i][j] = 0;
			}else{
				double key = a[i][j];
				b[i][j] = 1;
				if(a[i - 1][j] > key){
					b[i][j] = 0;
				}else if(a[i + 1][j] > key){
					b[i][j] = 0;
				}else if(a[i][j - 1] > key){
					b[i][j] = 0;
				}else if(a[i][j + 1] > key){
					b[i][j] = 0;
				}
			}
		}		
	}
}

void showMatrix(const bool a[][N]){
	for(int i = 0;i < N;i++){
		for(int j = 0;j < N;j++){
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
}