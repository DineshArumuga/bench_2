cc=gcc
run : main.o binary.o set_bit.o clear_bit.o toggle_bit.o toggle_range.o set_or_not.o swap_data.o odd_even.o clear_last_bit.o set_last_bit.o power_2.o count_set.o
	$(cc) $^ -o $@
.o:.c
	$(cc) -g $<
clean:
	rm *.o
	rm -f run
