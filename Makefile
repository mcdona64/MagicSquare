all:
	gcc -o magicSquare magicSquare.cpp -lstdc++
	git add *
	git commit -a -m 'Commit'
	git push
	
