all:
	c++			\
	src/game.cpp		\
	src/main.cpp	      	\
	-I src		      	\
	-o tiles              	\
	-I /usr/local/include 	\
	-L /usr/local/lib     	\
	-l sfml-system        	\
	-l sfml-window        	\
	-l sfml-graphics

.PHONY: all
