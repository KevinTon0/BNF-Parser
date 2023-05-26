/*
	Author: Kevin Ton,
	Project: File-Parser
	Filename: Parser.cpp
*/

#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
#include "parser.h"

using namespace std;

//*********************************** Copy of original text ***********************************
void parser::setLine(string temp){
    line.clear();
    line.append(temp);
    index = 0;
}

// This prints out original read-in from text
string parser::getLine(){
    return line;
}

//*********************************** End Copy of original text ***********************************

//Expression checker
bool parser::isExp(string in){
    string line = in;
    for(int i = 0; i < line.size(); i++) 
        if(line[i] == '=') 
            return false;
    return true;
}

//Error statements
string parser::error(string err) {
    if(err == "assign")
        return "Invalid assignment";
    if(err == "exp")
        return "Invalid expression";
    //Can continue error checking here for expression, op code, id with same logic as above — we wrote it to just write invalid
}

//Assignment validation
bool parser::assign(){
    if(id()){
        if(line[index] == ' '){
            index++;
            if(line[index] == '='){
                trackCount++;
                index++;
                if(line[index] == ' '){
                    index++;
                    if(exp()){
                        if(line[index] == ';'){
                            index++;
                            if(line[index] == ' '){
                                return true;
                            }
                            
                        }
                    }
                }
            }
        }       
    }
    return false;
}

//Op validation
bool parser::op(){
    if(line[index] == '/'||line[index] == '*'||line[index] == '-'||line[index] == '+'||line[index] == '%'){
        index++;
        if(index <= line.size()-1){
            if(line[index] == ' '){
                index++;
                return true;
            }
        }
        else return false;
    }    
    else return false;
}
//*********************************** End of expression/assignment/op/id validation statement logic for BNF format ***********************************