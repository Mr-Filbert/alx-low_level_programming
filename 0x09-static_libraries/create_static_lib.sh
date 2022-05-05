#!/bin/bash
gcc -c *.c
<<<<<<< HEAD
ar rc liball.a *.o
=======
ar -rcs liball.a *.o
>>>>>>> b1014d9bea7b5898b02d805999e81c6f3721f401
ranlib liball.a
