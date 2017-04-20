all: comp
comit:
	git add *
	git commit -a -m 'Commit'
	git push
comp:
	gcc -o magicSquare main.cpp main.hpp magicSquare.hpp -lstdc++
	
