0. gcc -E $CFILE > c: A script to run a c file and save the result into file c.
1. gcc -c $CFILE > $(echo $CFILE|cut -d"." -f).o: a script to compile a c file but does not link.
2. gcc -S $CFILE > $(echo $CFILE|cut -d"." -f1).s: Generate the assemly code for a c file and save.
3. gcc $CFILE -o cisfun: compile a c file and generate a executable name cisfun.
