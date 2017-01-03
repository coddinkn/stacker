CXX=g++
CFLAGS := -Wall

vpath %.cpp src
vpath %.hpp include

.PHONY: all clean

all: stacker

stacker: obj/Stacker.o obj/model/Model.o
	$(CXX) $(CFLAGS) $^ -o bin/$@

obj/%.o: %.cpp
	$(CXX) $(CFLAGS) -c $^ -I include -o $@

clean:
	rm -f obj/*.o bin/* obj/model/*.o obj/view/*.o obj/controller/*.o
