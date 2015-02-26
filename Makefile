
default: test; ./$<
clean:; rm -f test.o test trim.o
test: test.o trim.o; $(CXX) -o $@ $^
test.o: test.cc
trim.o: trim.cc trim.h

.INTERMEDIATE: test.o trim.o
.PHONY: default clean
