#Author :Aman Kumar
#Date : 27th july 2021
#This whole program is all about the linked list
fun = Linked_List_functions.c
output : driver.c header.h fun.o
	gcc driver.c header.h fun.o -o output
fun.o :$(fun)
	gcc -c $(fun) -o fun.o
clean :
	rm -rf output fun.o

