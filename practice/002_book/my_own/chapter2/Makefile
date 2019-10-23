INCLUDE := ../libsrc

all: main.o ${INCLUDE}/simpio.o ${INCLUDE}/strlib.o ${INCLUDE}/genlib.o ${INCLUDE}/random.o
	gcc main.o ${INCLUDE}/simpio.o ${INCLUDE}/strlib.o ${INCLUDE}/genlib.o ${INCLUDE}/random.o -o all

main.o: main.c
	gcc -c main.c -I ${INCLUDE} -o main.o

${INCLUDE}/simpio.o: ${INCLUDE}/simpio.c
	gcc -c ${INCLUDE}/simpio.c -o ${INCLUDE}/simpio.o

${INCLUDE}/strlib.o:${INCLUDE}/strlib.c
	gcc -c ${INCLUDE}/strlib.c -o ${INCLUDE}/strlib.o

${INCLUDE}/genlib.o:${INCLUDE}/genlib.c
	gcc -c ${INCLUDE}/genlib.c -o ${INCLUDE}/genlib.o

${INCLUDE}/random.o:${INCLUDE}/random.c
	gcc -c ${INCLUDE}/random.c -o ${INCLUDE}/random.o

.PHONY:clean

clean:
	rm -rf ${INCLUDE}/*.o *.o a.out all

