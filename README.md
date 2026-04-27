# to run all tests
`make run_all`

# to run individual tests
`cd tests`
`bash ./<test.sh>`

# to clean 
`make clean`


# some key takeaways
I read the c programming language by kernighan and ritchie, and turned every example into a small library.

Going through the book really helped me understand malloc. It is just a buffer of character strings, but you can cast to add structs to the buffer instead of characters. The buffer is static memory, and the program tracks pointers to the buffer. The pattern is useful in other contexts: creating a big buffer of data that doesn't move, and then a second buffer of pointers to the first buffer, where you can move around the pointers.

Another common problem is segfaults. The most common way to get a segfault is trying to printf a pointer to the first letter of a string, when that character is NULL. Here is a quick breakdown:
```
	char *word = NULL; 
	printf("%s\n", word) //this should segfault, but compiler/optimizer/linter is too smart
```
```
#include <stdio.h>

void crash(char *p)
{
    printf("%c\n", *p);
}

int main(void)
{
    char *p = NULL;
    crash(p); //this will segfault
}
```
## Two common C patterns. 
	- caller-owned buffer pattern, the caller allocates memory and passes a pointer to the first element and size of the array to a function. The function makes a copy of the pointer, and may increment its local copy of the pointer, but the caller retains ownership and later reads the data from the original pointer, which is still the first element. This creates somewhat weird looking code until you get it. See kr_getword() on [pg. 127] as an example, with *w++; see also, kr_countkeysptr [pg. 128] with p < keytab + NKEYS, where keytab is first element address and NKEYS is length.

	- function-owned static pattern, the function uses static storage and returns a pointer to it. The memory persists across calls but is shared and not thread-safe. Use it for simple, fixed-size results when allocation overhead or API simplicity matters. See [pg 80] for explanation of static memory, but I don't think it is explains the idea well enough, so see the example below, for a better understanding.

```
#include <stdio.h>

int *get_vals(void) {
    static int vals[3] = {1,2,3};
	/*
	for(int i = 0; i < 3; i++)
		vals[i]++;
	*/
    return vals;
}

int main(){
	int* vals = get_vals();
	printf("%d %d %d\n", vals[0], vals[1], vals[2]);
	return(0);
}
```

## Building Clear Functions
Many of the functions in this book are now in one of three libraries:
	- stdio.h
	- stdlib.h
	- string.h

I added kr_ to the front of every function to distinguish, the book functions from the standard library functions.

The style of the functions is both unique and elegant in my opinion. Sometimes clarity is sacrificed for brevity, but spending a little time to understand something written with just a few characters is rewarding. 

The most obvious example is having the statement execute in an if statement.
```
	while ((c = getchar()) != EOF)
```
The style allows execution of getchar and control flow of results on a single line. 

I think after reading this book, I prefer having function inputs as base types as much as possible. The output can be a struct, but starting from clear constitutent parts makes the rest of the function easily digestable even if it is written in a unique style. A great example is the hash example on pages 135-136. The pattern relies on structs, but there is no need to use the struct as input.

## One Last Note on Tests

At first, I wrote a makefile to just run every file with test in the name, but then I deleted that an created small bash scripts to test each file. This allows for custom input via `cat input.txt | ./a.out` for each test.

Tests can be run individually in the tests folder:
```
bash ./run_hash.sh
```

There is one weird thing about the pattern for running tests. 

When you run the makefile the scope of the makefile is the root directory, but when I run individual tests from the command line, I run them from the /tests folder. Because paths are relative, I had to write the makefile so it would run tests as if it was in the tests folder. 
