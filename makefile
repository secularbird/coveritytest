SRC := .
SOURCES := $(wildcard $(SRC)/*.c)
SOURCES += $(wildcard $(SRC)/*.cpp)
OBJECTS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(filter %.c, $(SOURCES)))
OBJECTS += $(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(filter %.cpp, $(SOURCES)))
EXECUTABLES := $(patsubst $(SRC)/%.c, %_test, $(filter %.c, $(SOURCES)))
EXECUTABLES += $(patsubst $(SRC)/%.cpp, %_test, $(filter %.cpp, $(SOURCES)))

all: $(EXECUTABLES)

%_test: %.o
	g++ $< -o $@

%.o:%.c
	gcc -c $< -o $@

%.o:%.cpp
	g++ -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJECTS)
	rm -rf $(EXECUTABLES)
