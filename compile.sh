#!/bin/bash

clear
clear

rm -f EXE


c++ -Wall -g3 -ggdb -gdwarf-3 -fsanitize=address -I. -I./living -I./world -I./turn -o EXE *.cc world/*.cpp turn/*.cpp living/*.cpp





