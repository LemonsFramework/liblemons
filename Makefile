# fuck you windows users!!!!!! get trolled by using an objectively superior build system
CC = gcc
CXX = g++

# append glfw guff
CFLAGS += $(shell pkg-config --cflags glfw3)
LDFLAGS += $(shell pkg-config --static --libs glfw3)
# append openal guff
CFLAGS += $(shell pkg-config --cflags openal)
LDFLAGS += $(shell pkg-config --static --libs openal)


CFLAGS += -Ilib/include

ifeq ($(OS),Windows_NT)
	CFLAGS += -I$(HASHLINK)/include
	LDFLAGS += $(HASHLINK)/libhl.dll
else
	LDFLAGS += -lhl
endif

OUTPUT_LIB := build/lemons.hdll	
	
SRCFILES := $(wildcard src/*.c)
OBJFILES := ${SRCFILES:%.c=build/%.o}

$(OUTPUT_LIB): $(OBJFILES)
	$(CXX) $^ -shared $(LDFLAGS) -fPIC -o $@

build/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) -w -c $(CFLAGS) -fPIC $< -o $@ 

.PHONY: clean
clean:
	rm -r build
