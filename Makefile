CXX=g++
CFLAGS := -Wall

vpath %.cpp src

.PHONY: all clean

all: stacker

stacker: obj/Stacker.o
	$(CXX) $(CFLAGS) $^ -o bin/$@

obj/%.o: %.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

clean:
	rm -rf obj/* bin/*
