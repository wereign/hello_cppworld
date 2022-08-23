#!
run_file(){
> g++ $1.cpp -o $1.exe
> ./$1.exe
> }