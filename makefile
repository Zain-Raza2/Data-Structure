all: compile run

compile:
	mkdir -p bin
	gcc -o bin/main -Iincludes `find src -name "*.c"`

run: 
	./bin/main

clean:
	rm -rf bin