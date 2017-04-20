#include "main.hpp"

void stop(int sig) {
	printf("stoped at:\n");
	magic->print();
	delete magic;
	exit(0);
}



int main() {
	magic = new magicSquare();
	signal(SIGINT, stop);
	while (magic->checkRepeat() || !magic->check()){
		magic->iterate2();
	}
	printf("found one:\n");
	magic->print();
	delete magic;
	exit(0);
}
