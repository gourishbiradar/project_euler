CXX=g++
CXXFLAGS = -c -g -std=c++11 -Werror -pedantic
IDIR=
LDFLAGS= 

solution: solution.o
	$(CXX) $(LDFLAGS) solution.o -o solution

solution.o : solution.cpp
	$(CXX) $(CXXFLAGS) solution.cpp

.PHONY : clean 
clean:
	rm -f solution *.o $(ODIR)/*.o *~ core $(INCDIR)/*~
