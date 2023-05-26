/*
	Author: Kevin Ton
	Project: File-Parser
	Filename: main.cpp
*/

#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
#include "parser.h"

using namespace std;

int main(int argc, char *argv[]) {

string filename(argv[1]);

//Checking input from cmd line
    if(argc !=  2) {
        cout << "Invalid number of arguments" << endl;
        return 1;
    }

//input file
    ifstream file;
    file.open(filename.c_str());

//output file
    ofstream out("out.txt");

    parser p;
    string line;

//File reader
    if(file) {
        while(getline(file, line)) {
            p.setLine(line); 
            out << p.getLine() << " ";
//Error checking
            if(p.isExp(line)){

                if(!p.exp())
                    out << "invalid: " << p.error("exp");
                else
                    out << "valid";
                out << endl;
            }
            else {

                if(!p.assign())
                    out << "invalid: " << p.error("assign");
                else
                    out << "valid";
                out << endl;
            }

        }

    }
    file.close();
    out.close();
    return 0;
}
