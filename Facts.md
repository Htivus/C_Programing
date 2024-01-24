<html><body>

<h1>Facts for <strong>why? how? where?</strong></h1>

  <h4>Why do we get segmentation or core dump? in C!</h4>
<p>if someone not expert in C does not know what went wrong:
The error was in the scanf, since he needed to pass a pointer in the second argument but he passed a value, the value of x, instead of a pointer to x, which is &x. His compiler actually threw a warning... That's why you should take warning seriously.

The technical explanation of why SEGFAULT happened (access to a protected direction of memory) is because the scanf treated the second arg as a pointer and tried to write its read value into an unknown position of memory (unknown because x was not initialized). Variables in C when are not initialized can have trash values, values that in this case have been treated as a literal position of memory; and the most probable is that a trash value points to a protected position of memory, and when scanf tries to return what it read, it writes into a protected position of memory, which makes the OS throw a SEGFAULT, signaling that a process has tried to access memory positions outside of its memory segment</p>

<h4>why using buffer is not safe or recieving input!</h4>
<p>Why the program was not safe:
1. He did not check if argc was equal to 0, 1, or any other number.
2. He did not terminate the program when outside of parameters e.g. if argc > 2, exit program.
3. He used strcpy, which is considered unsafe as it may be used in buffer overflow attacks. Use strncpy instead.
Probably missed something.</p>

</body></html>
