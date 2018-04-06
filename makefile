CXX = g++
CXXFLAGS = -Wall -g -lpng16 -std=c++17 -I/usr/include/freetype2
all: bin bin/main bin/out.png
dbg: init bin/main
	gdb bin/main
bin/out.png:
	bin/main
bin:
	mkdir -p bin
clean:
	rm -Rf bin
bin/main: $(shell for file in *.cpp;do echo $$file|sed 's/cpp/o/'|awk '{ print "bin/" $$0 }'; done|xargs echo)
	$(CXX) -o bin/main $^ $(CXXFLAGS)
# $(shell echo $@|tail -c +5|sed 's/o$$/cpp/'|xargs cat|grep '#include'|grep '"'|cut -d '"' -f2)
bin/%.o: %.cpp
	$(CXX) -c $< -o $@ $(CXXFLAGS)
show:
	ffplay bin/out.png
	ffplay bin/rev.png