chess.exe: main.cpp
	g++ -Wall -Werror -o chess.exe main.cpp

runChess:
	./chess.exe
