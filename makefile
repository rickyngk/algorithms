all:
	g++ -c ralg/sequence_cycle_detection/floyd.cpp -D RALG_VERBOSE=1
	g++ -c main.cpp
	g++ -o main floyd.o main.o

run:
	./main