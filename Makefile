# Author(s): Kevin Ton
# Project: Statement Parser
# Filename: Makefile

parse: parser.cpp parser.h main.cpp id.cpp expression.cpp
	g++ $(CFLAGS) $? $(LDFLAGS) -o $@

clean:
	rm out.txt parse
