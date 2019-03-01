###########################################################
#Name: Zach Selchau
#File: Makefile
#Notes: Allows for easy compilation of the program.

#Name: Darpan Beri
#File: Makefile
#Notes: Allows for easy compilation of the program.
###########################################################

#variables
CC=g++

all: xbd
	$(CC) xbd.cpp -o xbd
	export PATH="./:$PATH"

clean:
	rm -rf xbd
    
#######################[ EOF: Makefile ]###################
