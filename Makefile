all: comp
comit:
	git add *
	git commit -a -m 'Commit'
	git push
comp:
	gcc -o magicSquare magicSquare.cpp -lstdc++
	
