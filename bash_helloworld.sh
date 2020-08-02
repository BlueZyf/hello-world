#!/bin/bash
# Author : zyf
# Copyright (c) 
# Script follows here:

: '
	This is single note
'

<<BLOCK 
	This is the first comment
BLOCK

echo "Hello World!"
echo "What is your name?"
read PERSON
echo "Hello," $PERSON",it is your home"
