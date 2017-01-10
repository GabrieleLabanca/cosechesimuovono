#!/bin/bash

clear
clear

rm -f EXE


c++ -Wall -g3 -ggdb -gdwarf-3 -fsanitize=address -I. -I./living -I./world -I./turn -o EXE *.cc world/*.cpp  #1> ../output/compile_output.txt #2> ../output/compile_errors.txt

#./EXE input bragg_events.txt ranges energyRanges hist hh.root dump dist bgcalc 1> ../output/output_file.txt #2> ../output/run_errors.txt
 
#./EXE sim 1000 seed 234 dump dist bgcalc 1> ../output/output_random.txt #2> ../output/run_errors.txt




