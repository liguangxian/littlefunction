#!/bin/sh

OBJS=main.o display.o

edit: $(OBJS)
	cc -o edit $(OBJS)

all:
	echo $(OBJS)
.PHONY:clean
clean:
	rm edit $(OBJS)
