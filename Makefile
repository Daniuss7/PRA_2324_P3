bin/testTableEntry: testTableEntry.cpp TableEntry.h
	mkdir -p bin
	g++ -o bin/testTestTableEntry testTableEntry.cpp

clean:
	rm -rf *.o *.gch bin
