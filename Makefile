CXX = g++

CXXFLAGS = -std=c++20 - Iinclude -Wall

Target = facilis_demo

SRCS = $(wildcard src/*.cpp) examples/main.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
		$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
		rm -f $(OBJS) $(TARGET)