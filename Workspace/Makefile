CXX = g++
CXXFLAGS = -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion -DLOCAL

all: run

build: solve.cpp
	$(CXX) $(CXXFLAGS) solve.cpp -o solve

run: build
	./solve < debug/input.txt > debug/output.txt
	@echo "Execution finished. Output saved to debug/output.txt"

clean:
	rm -f solve
