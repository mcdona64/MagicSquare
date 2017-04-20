#include "main.hpp"

void stop(int sig) {
	printf("stoped at:\n");
	magic->print();
	exit(0);
}



int main() {
	magic = new magicSquare();
	signal(SIGINT, stop);
	while (!magic->check() || magic->checkRepeat()){
		printf("TODO: implement iterating\n");
	}
	printf("found one:\n");
	magic->print();
	exit(0);
}
