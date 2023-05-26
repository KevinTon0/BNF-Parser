**************************************************************************************************************************
Author: Kevin Ton
**************************************************************************************************************************
LIST OF FILES:

Code Repository:
main.cpp
parser.h
parser.cpp
expression.cpp
id.cpp

File Repository:
Makefile
README.txt
test.txt
test2.txt


**************************************************************************************************************************
COMPILE INSTRUCTIONS:
In directory, type "make"
**************************************************************************************************************************
OPERATION INSTRUCTIONS:
	~/BNF_Parser_Ton_Kevin make
	~/BNF_Parser_Ton_Kevin parse <filename>.txt
	~/BNF_Parser_Ton_Kevin vim out.txt			To read validity statements

List/description of novel/significant design decisions:

	- General file parsing and formatting. Separating line by line.
	- Read in "assignments" and "expressions"
	- Expressions and assignments are fully evaluated
	- Each "string" is separated as either an assignment, expression, or invalid(Fail case)
**************************************************************************************************************************
List/description of any extra features/algorithms/functionality you included which were not 
required:
N/A
**************************************************************************************************************************
LIST/DESCRIPTION OF ALL KNOWN DEFICIENCIES OR BUGS
N/A
**************************************************************************************************************************
LESSONS LEARNED: 
Developing BNF grammar which describes a valid statement for reading in text
Pair Programming efficiency
Understand dependencies of tools required in making a grammar.
**************************************************************************************************************************