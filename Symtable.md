<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Symbol Table and Data Segment Overview</title>
</head>
<body>

<h1>Symbol Table and Data Segment Overview</h1>

<h2>Symbol Table:</h2>

<p>The symbol table is a data structure maintained by the compiler or linker that stores information about symbols in the program.</p>
<ul>
    <li>Symbols can include function names, variable names, labels, and other identifiers used in the program.</li>
    <li>For each symbol, the symbol table typically includes information such as its name, type, scope, size (if applicable), and memory address.</li>
    <li>The symbol table is used by the compiler during the compilation process to resolve symbol references and generate machine code instructions.</li>
    <li>It's also used by the linker during the linking process to resolve external symbol references and combine object files into an executable or shared library.</li>
</ul>

<h3>Simplified Symbol Table for the Example C Program:</h3>

<table border="1">
    <tr>
        <th>Name</th>
        <th>Type</th>
        <th>Scope</th>
        <th>Memory Address</th>
        <th>Size</th>
        <th>Initialization Value</th>
    </tr>
    <tr>
        <td>main</td>
        <td>Func</td>
        <td>Global</td>
        <td>0x00400000</td>
        <td>N/A</td>
        <td>N/A</td>
    </tr>
    <tr>
        <td>a</td>
        <td>Var</td>
        <td>Local</td>
        <td>0x00401000</td>
        <td>4</td>
        <td>5</td>
    </tr>
    <tr>
        <td>b</td>
        <td>Var</td>
        <td>Local</td>
        <td>0x00401004</td>
        <td>4</td>
        <td>Uninitialized</td>
    </tr>
    <tr>
        <td>sum</td>
        <td>Var</td>
        <td>Local</td>
        <td>0x00401008</td>
        <td>4</td>
        <td>Uninitialized</td>
    </tr>
</table>

<h2>Data Segment:</h2>

<p>The data segment is a section of a program's memory space that stores initialized and uninitialized data.</p>
<ul>
    <li>Initialized data, also known as data with explicit initial values, is stored in the initialized data segment (.data section).</li>
    <li>Uninitialized data, also known as data without explicit initial values (initialized to zero), is stored in the uninitialized data segment (.bss section).</li>
    <li>The data segment typically includes global variables, static variables, and constant data.</li>
</ul>

<h2>Example C Program:</h2>

<pre>
<code>
#include &lt;stdio.h&gt;

int main() {
    int a = 5;     // Initialized data stored in the .data segment
    int b;         // Uninitialized data stored in the .bss segment
    int sum;       // Uninitialized data stored in the .bss segment

    b = 10;

    sum = a + b;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
</code>
</pre>

<p>In this program:</p>
<ul>
    <li>`a`, `b`, and `sum` are symbols.</li>
    <li>The symbol table will contain entries for these symbols, indicating their names, types (`int`), memory addresses, and other attributes.</li>
    <li>The initialized data (`a = 5`) will be stored in the initialized data segment (`.data` section).</li>
    <li>The uninitialized data (`b`, `sum`) will be stored in the uninitialized data segment (`.bss` section).</li>
    <li>During compilation, the compiler will generate machine code instructions that reference these symbols and allocate memory for them in the appropriate segments.</li>
    <li>The linker will resolve external symbol references and combine the object files (if any) into an executable file.</li>
</ul>

</body>
</html>

