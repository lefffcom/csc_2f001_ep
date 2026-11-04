CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Werror -g
OBJ = main.o location.o shortest_path.o

bilbao: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o bilbao

main.o: main.cpp location.h shortest_path.h
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

location.o: location.cpp location.h
	$(CXX) $(CXXFLAGS) -c location.cpp -o location.o

shortest_path.o: shortest_path.cpp shortest_path.h location.h
	$(CXX) $(CXXFLAGS) -c shortest_path.cpp -o shortest_path.o

clean:
	rm -f $(OBJ) bilbao

.PHONY: clean
