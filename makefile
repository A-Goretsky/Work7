executor: executor.c
	gcc -o executor executor.c

run: executor
	./executor
