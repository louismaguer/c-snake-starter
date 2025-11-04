CXX=gcc
CXXFLAGS=-Wall -ggdb -Iinclude
AR=/usr/bin/ar -r 

src := $(wildcard src/*.c)
obj := $(subst src, build, $(src:.c=.o))


.PHONY: directories

all: directories libsnake.a snake 
	@echo $(obj)

snake: main.c libsnake.a
	$(CXX) $(CXXFLAGS) $^ -o $@ 

libsnake.a: ${obj}
	${AR} $@ $^

build/%.o: src/%.c include/%.h
	$(CXX) $(CXXFLAGS) -o $@ -c $<


directories: build
build:
	mkdir -p $@


clean: 
	rm snake
	rm libsnake.a
	rm -r build
