#include <stdlib.h>
#include <stdio.h>
#include <signal.h>


class magicSquare {
	public:

void print() {	
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
};
			
bool check() {
	int test[3][3];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			test[i][j] = matrix[i][j]*matrix[i][j];
		}
	}
	int one = test[0][0]*test[1][0]*test[2][0];
	int two = test[0][1]*test[1][1]*test[2][1];
	int three = test[0][2]*test[1][2]*test[2][2];
	int four = test[0][0]*test[0][1]*test[0][2];
	int five = test[1][0]*test[1][1]*test[1][2];
	int six = test[2][0]*test[2][1]*test[2][2];
	int sevan = test[0][0]*test[1][1]*test[2][2];
	int eight = test[0][2]*test[1][1]*test[2][0];
	
	if(one != two || one != three || one != four || one != five ||
			one != six || one != sevan || one != eight) {
		return false;
	}
	return true;
	
};

bool checkRepeat(){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			for (int ii = 0; ii < 3; ii++) {
				for (int jj = 0; jj < 3; jj++){
					if (matrix[ii][jj] == matrix[i][j] ){
						if (ii != i || jj != j) {
							return true;
						}			
					}
				}
			}
		}
	}
	return false;
};

void iterate() {
	int r1 = rand() % 3;
	int r2 = rand() % 3;
	matrix[r1][r2]++;

}



	private:
		int matrix[3][3]; 
	
};
