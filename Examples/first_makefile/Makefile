
CC = clang-20
CFLAGS = $(CLANG_FLAGS) -std=c11
CXX = clang++-20
CXXFLAGS = $(CLANG_FLAGS) -std=c++11

CLANG_FLAGS = -Wall -Wextra -Werror

TARGET = main
SOURCES_C = c.c
SOURCES_CPP = main.cpp rust.cpp

make_c: $(SOURCES_C)
	$(CC) $(CFLAGS) -o $@ $^

make_cpp: $(SOURCES_CPP)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TARGET): make_cpp make_c
	@$(./$+)

