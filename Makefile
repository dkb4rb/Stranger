Stranger:
	gcc *.c -o Stranger 2>/dev/null

Stranger_dbg:
	gcc -g *.c -o a.out

Cl_cache:
	rm -rf *.out Stranger DB/*.tmp


r_Stranger:
	./Stranger $1
