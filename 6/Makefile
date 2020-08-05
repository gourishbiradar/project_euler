CXX=g++
CXXFLAGS = -c -g -std=c++11 -Werror -pedantic
UTILDIR = ../utility
UTILOBJ = ../utility/obj
INCDIR= ../utility/include
LDFLAGS= 

solution: solution.o $(UTILOBJ)/utility.o
	$(CXX) $(LDFLAGS) $(UTILOBJ)/utility.o solution.o -o solution

solution.o : solution.cpp $(INCDIR)/utility.h
	$(CXX) $(CXXFLAGS) solution.cpp -I $(INCDIR)

$(UTILOBJ)/utility.o: $(UTILDIR)/utility.cpp $(INCDIR)/utility.h
	$(CXX) $(CXXFLAGS) $(UTILDIR)/utility.cpp -o $(UTILOBJ)/utility.o

.PHONY : clean 
clean:
	rm -f solution *.o $(ODIR)/*.o *~ core $(INCDIR)/*~ 
