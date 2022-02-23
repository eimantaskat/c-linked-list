main:
	g++ -o main main.c functions.c
run:
	g++ -o main main.c functions.c; ./main
clean:
	rm main.exe
