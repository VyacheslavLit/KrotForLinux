main: main.cpp Menu.cpp Menu.h krot.cpp krot.h
	g++ -o main -std=c++17 main.cpp Menu.cpp krot.cpp

cl:
	rm *.a *.o

in:
	install ./main ~/bin

ui:
	rm -rf ~/bin/main


