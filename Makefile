1.1:
	gcc src/1/1.1/main.c src/lib/*.c -o main
clear:
	rm main
dev: 1.1
	./main

amdahl_law:
	gcc src/amdahl_law/main.c -o main
