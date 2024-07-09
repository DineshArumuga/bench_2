cc=gcc
run : main.o display.o createNode.o count.o asscending_order.o reverse_data.o
	$(cc) $^ -o $@
.o:.c
	$(cc) -g $<
clean:
	rm *.o
	rm -f run
