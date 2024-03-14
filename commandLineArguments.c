#include <stdio.h>

int main(int argc, char* argv[])
// the arguments are passed to the main function through cmd is called commandlineArguments.
/*
1) (int argc, char* argv[]) = argument-count, argument-value.
2) int argc = number of arguments given to it, 1 argument is the path or name of the file.
    ex: D:\C++ course>.\commandLineArguments.exe hi this ---> this contains 3 arguments i.e (argc=3).
                                   |              |   |
                             1st argument       2nd  3rd  
3) char* argv[] = it is a array of character pointer which stores the address of first or 0th index value.

*/
{
    printf("The value of argc is: %d\n", argc);
    printf("The value of argc is: %s\n", *argv); // 1st argument is path of file or name--> D:\C++ course\commandLineArguments.exe
    for (int i = 0; i < argc; i++)
    {
        printf("This argument at index number %d has a value of %s \n", i, argv[i]);
    }
    return 0;
}
// type this in cmd of windows

// D:\C++ course>.\commandLineArguments.exe hi this is rohan ramesh raut in cmd
// The value of argc is: 9
// This argument at index number 0 has a value of .\commandLineArguments.exe
// This argument at index number 1 has a value of hi
// This argument at index number 2 has a value of this
// This argument at index number 3 has a value of is
// This argument at index number 4 has a value of rohan
// This argument at index number 5 has a value of ramesh
// This argument at index number 6 has a value of raut
// This argument at index number 7 has a value of in
// This argument at index number 8 has a value of cmd

