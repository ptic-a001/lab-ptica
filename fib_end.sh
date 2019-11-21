echo "1 2 3 4 5 6 7" > test1.txt
echo "19 20" > test2.txt
echo -e "1\n1\n2\n3\n5\n8\n13" > check1.txt
echo -e "4181\n6765" > check2.txt
gcc -std=c99 -Wall -pedantic fib_end.c
./fib_end<test1.txt | diff check1.txt - && echo "check1 - OK"
./fib_end<test2.txt | diff check2.txt - && echo "check2 - OK"


