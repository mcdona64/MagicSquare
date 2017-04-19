#include <stdlib.h>
#include <stdio.h>

bool check(int matrix[3][3]) {
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
	
}

int main() {
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	while (0){
	}
	printf("found one:\n");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++){
			printf("\t%d",matrix[i][j]);
		}
		printf("\n");
	}
}
