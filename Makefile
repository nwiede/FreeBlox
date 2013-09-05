all: build run
  
build:
	cxx main.cpp -o freeblox
run:
	./freeblox
