# Chapter 1

1. Give three reasons why C is the best choice for a programming language?

Powerful - C gives you a good options. <br/>
Flexible - The language places no constraints on you. <br/>
Modular - There are routines like functions to separate code. 
<br/><br/>


2. What does the compiler do?

A Compiler compiles source code into object code. 
<br/><br/>


3. What are the steps in the Program Development Cycle?

1 - Create file containing the source code. <br/>
2 - Compile the source code to object code. <br/>
3 - Link the compiled code to create an executable object file.
<br/><br/>


4. What command do you need to enter to compile a program called program1.c with your compiler?

```
$ gcc program1.c
```
<br/>


5. Does your compiler do both the linking and compiling with just one command, or do you have to enter separate commands?

The default in GCC is to automatically compile and link the given source code. By setting separate flags you can only link or only compile.
<br/><br/>


6. What extension should you use for your C source files?

.c
<br/><br/>


7. Is FILENAME.TXT a valid name for a C source file?

Yes
<br/><br/>


8. If you execute a program that you have compiled and it doesn't work as you expected, what should you do?

Fix it and try it again. The error message may help you find where the error came from.
<br/><br/>


9. What is machine language?

Machine language are the one's and zero's that the Processor can understand.
<br/><br/>


10. What does the linker do?

Combine multiple object files. If you for example include stdio.h then the linker will add this file to your program.