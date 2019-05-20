all:
	c++			\
	src/scene.cpp		\
	src/renderer.cpp	\
	src/game.cpp		\
	src/main.cpp	      	\
	-I src		      	\
	-o tiles              	\
	-I /usr/local/include 	\
	-L /usr/local/lib     	\
	-l sfml-system        	\
	-l sfml-window        	\
	-l sfml-graphics	\
	-g			\
	-std=c++17

.PHONY: all
