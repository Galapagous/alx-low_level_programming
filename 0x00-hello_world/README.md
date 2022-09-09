0. gcc -E $CFILE > c: A script to run a c file and save the result into file c.
1. gcc -c $CFILE > $(echo $CFILE|cut -d"." -f): a script to compile a c file but does not link.
