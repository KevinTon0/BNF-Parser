/*
	Author: Kevin Ton,
	Project: File-Parser
	Filename: Parser.h
*/


#ifndef PARSER_H
#define PARSER_H
#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>

using namespace std;

class parser{
    	string line;
    	int index;
    	int trackCount;
    	public:
//Save original state of txt file
        	void setLine(std::string);
        	string getLine();
//Validity checker for id
        	bool id();
        	bool id2();
//Validity checker for expression
        	bool exp();
        	bool exp2();
//Validity Checker for OP and Assignment
		bool assign();
		bool op();
//Error checking
        	string error(string);
//Expression checker
         	bool isExp(string);

};



#endif
