#automake_library makefile

objects = main.o hello.o

HelloWorld:$(objects)
	cc -o HelloWorld $(objects)
$(objects):hello.h

.PHONY:clean
clean:
	-rm HelloWorld $(objects)
