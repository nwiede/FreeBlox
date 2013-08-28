all: build run
  
build:
  cc -o freeblox main.cpp
run:
  ./freeblox
