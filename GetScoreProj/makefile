OBJ = score.o eval.o classify.o output.o getscore.o
APPNAME = score

$(APPNAME) : $(OBJ)
	gcc -o $(APPNAME) $(OBJ)
%.o : %.c		#compiling rule, for each .c file in the folde	
	gcc -c -o $@ $<
clean:
	rm $(OBJ) $(APPNAME)

