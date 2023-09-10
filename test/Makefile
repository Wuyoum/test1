VERSION 	=1.00
CC			=gcc
DEBUG 		=-DUSE_DEBUG
CFLAGS		=-Wall 
SOURCES	 	=$(wildcard ./src/*.cpp)
INCLUDES  	=-I./inc -I./inc/3rd/testLib
LIB_NAMES 	=-ltestLib
LIB_PATH 	=-L./lib -L./lib/3rd/testLib
OBJ			=$(patsubst %.cpp, %.o, $(SOURCES))
TARGET		=test



#links
$(TARGET):$(OBJ)
	@mkdir -p output
	@make -f ./3rd/testLib/Makefile
	$(CC) $(OBJ) $(LIB_PATH) $(LIB_NAMES)  -o output/$(TARGET)$(VERSION)
	@rm -rf $(OBJ)
	
#compile
%.o: %.cpp
	$(CC) $(INCLUDES) $(DEBUG) -c $(CFLAGS) $< -o $@
 
.PHONY:clean
clean:
	@echo "Remove linked and compiled files......"
	@make -f ./3rd/testLib/Makefile clean
	rm -rf $(OBJ) $(TARGET) output 