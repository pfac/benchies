EXECS = sizeof

CFLAGS = -Wall -Wextra -std=c99 -pedantic

default: sizeof

all: $(EXECS)

sizeof.o: sizeof.c

clean:
	$(RM) $(EXECS)
	$(RM) *.o
