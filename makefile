CFLAGS = -Wall -Wextra -Werror
CPPFLAGS = -MMD

bin/chess: obj/src/chess/main.o obj/src/libchess/libchess.a
	$(CC) $(CFLAGS) -o $@ $^

obj/src/chess/main.o: src/chess/main.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

obj/src/libchess/libchess.a: obj/src/chess/main.o
	ar rcs $@ $^

obj/src/chessmain.o: src/chess/main.cpp
	$(CC) -c $(CFLAGS) $(CPPFLAGS) -o $@ $<

-include main.d chess.d
