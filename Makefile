DEBUGFLAGS=-d
Target = compiler
SRCDIR = src
SOURCES =$(wildcard $(SRCDIR)/*.c)
HEADERS =$(wildcard $(SRCDIR)/*.h)
CC=gcc

all: $(Target)

$(Target): $(SOURCES) $(HEADERS)
	$(CC)  $< -o $@

debug: $(Target) test/hello.c
	./$< $(DEBUGFLAGS) test/hello.c

run: $(Target) test/hello.c
	./$< test/hello.c

