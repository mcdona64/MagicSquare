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
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			matrix[i][j] = matrix[i][j]*matrix[i][j];
		}
	}
	int one = matrix[0][0]*matrix[1][0]*matrix[2][0];
	int two = matrix[0][1]*matrix[1][1]*matrix[2][1];
	int three = matrix[0][2]*matrix[1][2]*matrix[2][2];
	int four = matrix[0][0]*matrix[0][1]*matrix[0][2];
	int five = matrix[1][0]*matrix[1][1]*matrix[1][2];
	int six = matrix[2][0]*matrix[2][1]*matrix[2][2];
	int sevan = matrix[0][0]*matrix[1][1]*matrix[2][2];
	int eight = matrix[0][2]*matrix[1][1]*matrix[2][0];
	
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
					if (matrix[ii][jj] == matrix[i][j] 
&& i != ii && j != jj){
						return true;
					}
				}
			}
		}
	}
	return false;
};

	private:
		int matrix[3][3]; 
	
};
