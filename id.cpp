/*
	Author: Kevin Ton
	Project: File-Parser
	Filename: id.cpp
*/

#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
#include "parser.h"
using namespace std;

//ID validation
bool parser::id(){
    bool isValid = false;
    if(line[index] == 'a'|| line[index] == 'b'|| line[index] == 'c'|| line[index] == 'd'|| line[index] == 'e'|
            line[index] == 'f'||line[index] == 'g'||line[index] == 'h'||line[index] == 'i'||line[index] == 'j'|
            line[index] == 'k'||line[index] == 'l'||line[index] == 'm'||line[index] == 'n'||line[index] == 'o'|
            line[index] == 'p'||line[index] == 'q'||line[index] == 'r'||line[index] == 's'||line[index] == 't'|
            line[index] == 'u'||line[index] == 'v'||line[index] == 'w'||line[index] == 'x'||line[index] == 'y'|
            line[index] == 'z'|
            line[index] == 'A'||line[index] == 'B'||line[index] == 'C'||line[index] == 'D'||line[index] == 'E'|
            line[index] == 'F'||line[index] == 'G'||line[index] == 'H'||line[index] == 'I'||line[index] == 'J'|
            line[index] == 'K'||line[index] == 'L'||line[index] == 'M'||line[index] == 'N'||line[index] == 'O'|
            line[index] == 'P'||line[index] == 'Q'||line[index] == 'R'||line[index] == 'S'||line[index] == 'T'|
            line[index] == 'U'||line[index] == 'V'||line[index] == 'W'||line[index] == 'X'||line[index] == 'Y'|
            line[index] == 'Z'||
            line[index] == '_'){
        index++;
        isValid = true;
    }
    else return false;

//Move to id2() for extra validation
    if(isValid && index <= line.size()-1){
            if(id2()) return true;
            else return false;
    }
    if(isValid) return true;
}

//A continuation for checking id
bool parser::id2(){
    bool isValid = false;
    if(line[index] == ' '||line[index] == '='||line[index] == '/'||line[index] == '*'||line[index] == '-'|
            line[index] == '+'||line[index] == '%'||line[index] == ')'||line[index] == '('){
        return true;
    } 
    else if(line[index] == 'a'||line[index] == 'b'||line[index] == 'c'||line[index] == 'd'||line[index] == 'e'||
            line[index] == 'f'||line[index] == 'g'||line[index] == 'h'||line[index] == 'i'||line[index] == 'j'|
            line[index] == 'k'||line[index] == 'l'||line[index] == 'm'||line[index] == 'n'||line[index] == 'o'|
            line[index] == 'p'||line[index] == 'q'||line[index] == 'r'||line[index] == 's'||line[index] == 't'|
            line[index] == 'u'||line[index] == 'v'||line[index] == 'w'||line[index] == 'x'||line[index] == 'y'|
            line[index] == 'z'|
            line[index] == 'A'||line[index] == 'B'||line[index] == 'C'||line[index] == 'D'||line[index] == 'E'|
            line[index] == 'F'||line[index] == 'G'||line[index] == 'H'||line[index] == 'I'||line[index] == 'J'|
            line[index] == 'K'||line[index] == 'L'||line[index] == 'M'||line[index] == 'N'||line[index] == 'O'|
            line[index] == 'P'||line[index] == 'Q'||line[index] == 'R'||line[index] == 'S'||line[index] == 'T'|
            line[index] == 'U'||line[index] == 'V'||line[index] == 'W'||line[index] == 'X'||line[index] == 'Y'|
            line[index] == 'Z'|
            line[index] == '_'|
            line[index] == '0'||line[index] == '1'||line[index] == '2'||line[index] == '3'||line[index] == '4'|
            line[index] == '5'||line[index] == '6'||line[index] == '7'||line[index] == '8'||line[index] == '9'){
        index++;
        isValid = true;     
    }
    else return false;
    if(isValid && index <= line.size()-1){
    	if(id2()) return true;
    else return false;
    } 
    if(isValid) return true;
}
