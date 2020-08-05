CXX=g++
CXXFLAGS = -c -g -std=c++11 -Werror -pedantic
INCDIR= include
LDFLAGS= 
TESTDIR= tests
ODIR= obj


utility.o : utility.cpp $(INCDIR)/utility.h
	$(CXX) $(CXXFLAGS) utility.cpp -o $(ODIR)/utility.o

$(TESTDIR)/tests: $(ODIR)/utility.o $(ODIR)/tests.o 
		$(CXX) $(LDFLAGS) $(ODIR)/utility.o $(ODIR)/tests.o -o $(TESTDIR)/tests

$(ODIR)/tests.o : $(TESTDIR)/tests.cpp $(INCDIR)/utility.h
	$(CXX) $(CXXFLAGS) $(TESTDIR)/tests.cpp -o $(ODIR)/tests.o 

run_tests: $(TESTDIR)/tests
	./tests/tests

.PHONY : clean 
clean:
	rm -f $(TESTDIR)/tests utility *.o $(ODIR)/*.o *~ core $(INCDIR)/*~
