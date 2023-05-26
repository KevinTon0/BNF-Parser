/*
	Author: Kevin Ton
	Project: File-Parser
	Filename: expression.cpp
*/

#include <string.h>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <exception>
#include <valarray>
#include "parser.h"
using namespace std;

bool parser::exp(){
    if(line[index] == '('){
        index++;
        if(line[index] == ' '){
            index++;
	}

//Check expression after confirming index is valid, check for specific statements with each string passed.
        if(exp()){
            if(line[index] == ')'){
                if(line[++index] == ' '){
                    index++;
                    if(index <= line.size() -1 && line[index] != ')'){
                        if(exp2()){
                            return true;
                        }
                        return false;  
                    }
                    return true;
                }
            }
        }
    }
    else if(id()){
        if(line[index] == ' '){
            index++;
            if(exp2()){
                return true;
            }
        }  
    }
    return false;
}
//2nd case when exp passes

bool parser::exp2(){
    if(line[index] == ';' && trackCount > 0){
        return true;
    }
    if(op()){
        if(line[index] == '('){
            index++;
            if(line[index] == ' '){
                index++;
            }
            if(exp()){
                if(line[index] == ')'){
                    if(line[++index] == ' '){
                        index++;
                        if(index <= line.size() -1 && line[index] != ')'){
                            if(exp2()){
                                return true;
                            }
                            return false;
                        }
                        return true;
                    }
                }                
            }
            
        }
        else if(id()){
            if(line[index] == ' '){
                index++;  
                if(index <= line.size()-1 && line[index] != ')'){                   
                   if(exp2()){
                       return true;
                   }
                   return false;
                }
                return true;
            }
            else if(line[index] == ')'){
                if(index <= line.size()-1 && line[index] != ')'){  
                   if(exp2()){
                       return true;
                   }
                   return false;
                }
                return true;
                
            }
        }
    }
    return false;
}