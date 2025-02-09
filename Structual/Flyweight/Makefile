TARGET := main
INCLUDE := include
INTERFACES := interfaces
SRC := src
BUILD := build
OBJS := $(patsubst ${SRC}/%.cpp,${BUILD}/%.o,$(wildcard ${SRC}/*.cpp))
MAIN_SRC := main.cpp

CXX := g++
COMPILE_ONLY_FLAG := -c
INCLUDE_FLAG := -I${INCLUDE} -I${INTERFACES}
OUTPUT_FLAG := -o
CPPFLAGS := -O2

.DEFAULT_GOAL := all
all: ${TARGET}

${TARGET}: ${MAIN_SRC} ${OBJS}
	${CXX} $^ ${CPPFLAGS} ${INCLUDE_FLAG} ${OUTPUT_FLAG} $@

${BUILD}/%.o: ${SRC}/%.cpp ${INCLUDE}/%.h | ${BUILD}
	${CXX} ${COMPILE_ONLY_FLAG} $< ${INCLUDE_FLAG} ${OUTPUT_FLAG} $@

${BUILD}:
	mkdir -p ${BUILD}

.PHONY: clean
clean:
	rm -rf ${BUILD} ${TARGET}

