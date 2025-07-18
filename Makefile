.PHONY: all 

all:
	mkdir -p bin
	clang ./src/deadjuice.c -o ./bin/deadjuice


clean:
	rm -rf bin
