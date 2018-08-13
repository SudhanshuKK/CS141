#!/bin/bash
echo "what is your name"
read NAME
echo "your name is $NAME"
mkdir $NAME
cd $NAME
touch $NAME.cpp
for i in 1 2 3 4 5
do
touch $NAME$1.cpp
done
