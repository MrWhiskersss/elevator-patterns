FLAGS := -Wall -g
BUILD := build/
CPP := $(wildcard ./*/*.cpp)
O := $(CPP:./%.cpp=$(BUILD)%.o)

run.out: $(O) main.o
	g++ $(FLAGS) $(O) $(BUILD)main.o -o run.out

main.o: main.cpp
	mkdir -p $(BUILD)
	g++ $(FLAGS) -c $^ -o $(BUILD)$@

$(O): $(BUILD)%.o: %.cpp %.hpp
	mkdir -p $(dir $@)
	g++ $(FLAGS) -c $(@:$(BUILD)%.o=%.cpp) -o $@

.PHONY: clean
clean:
	rm -r $(BUILD)
	rm run.out
