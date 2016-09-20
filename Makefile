CC=g++
CFLAGS=-c -Wall
LDFLAGS=-lsfml-graphics -lsfml-window -lsfml-system
SOURCES=main.cpp game.cpp sprite.cpp prop.cpp actor.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=app

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(OBJECTS) $(LDFLAGS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
