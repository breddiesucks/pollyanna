pollyanna: main.o funcStrings.o funcEncrypt.o
	gcc -g bin/main.o bin/funcStrings.o bin/funcEncrypt.o -o pollyanna

pollyanna-cli: mainCli.o funcStrings.o funcEncrypts.o
	gcc -g bin/mainCli.o bin/funcStrings.o bin/funcEncrypt.o -o pollyanna-cli

main.o: src/main.c
	gcc -g -c src/main.c -o bin/main.o

mainCli.o: src/mainCli.c
	gcc -g -c src/mainCli.c -o bin/mainCli.o

funcStrings.o: src/funcStrings.c
	gcc -g -c src/funcStrings.c -o bin/funcStrings.o

funcEncrypt.o: src/funcEncrypt.c
	gcc -g -c src/funcEncrypt.c -o bin/funcEncrypt.o
