# AED, last modified abl 2020.10.21
#
# To compile progs:
#    make   OR  make sorwords  OR qsortwords
# To run tests:
#    make t     OR: make qt     OR (Valgrind):  make tv  ETC
#
# NOTE:
# In case of trouble with the shell for loop, GNU Make has 'foreach':
#	$(foreach file,$(FILES),./labconn $(file);)
# https://stackoverflow.com/questions/1490949/how-to-write-loop-in-a-makefile
#----------------------------------------------------------------------
#   Compiler, Compiler Flags

CC = gcc
CFLAGS = -g -Wall -ansi -pedantic

#   Sources
SOURCES = word.c sortwords.c qsortwords.c

#   Objects  ('make' automatically compiles .c to .o)
OBJECTS = word.o sortwords.o
QOBJECTS = word.o qsortwords.o

sortwords: $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)

word.o: word.c word.h defs.h

sortwords.o: sortwords.c word.h defs.h

qsortwords: $(QOBJECTS)
	$(CC) $(CFLAGS) -o $@ $(QOBJECTS)

word.o: word.c word.h defs.h

qsortwords.o: qsortwords.c word.h defs.h

clean:
	rm -f *.o  sortwords qsortwords


FILES = $(shell ls ../AED_Lab_05-tests/*.txt)

VALG = valgrind --leak-check=full

t-comprimento:
	for F in ${FILES}; do  ./sortwords $${F} -comprimento; done;

t-alfabetica:
	for F in ${FILES}; do  ./sortwords $${F} -alfabetica; done;

t-ocorrencias:
	for F in ${FILES}; do  ./sortwords $${F} -ocorrencias; done;

tv:
	for F in ${FILES}; do ${VALG} ./sortwords $${F} ; done;


tt:
	for F in ${FILES}; do  time ./sortwords $${F} ; done;



qt-comprimento:
	for F in ${FILES}; do  ./qsortwords $${F} -comprimento; done;

qt-alfabetica:
	for F in ${FILES}; do  ./qsortwords $${F} -alfabetica; done;

qt-ocorrencias:
	for F in ${FILES}; do  ./qsortwords $${F} -ocorrencias; done;

qtv:
	for F in ${FILES}; do ${VALG} ./qsortwords $${F} ; done;


qtt:
	for F in ${FILES}; do  time ./qsortwords $${F} ; done;


