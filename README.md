# COMPILER-DESIGN-BASICS

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: PRIYANKA PRIYADARSHINI SWAIN

*INTERN ID*: CT04DZ418

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

*TASK DESCRIPTION*:

Task 3: Compiler Design Basics – Lexical Analyzer
As part of understanding the fundamentals of compiler design, I performed a key task: building a Lexical Analyzer using the C programming language. This task represents the first phase of a compiler and is crucial for analyzing source code at the token level. The primary goal was to read an input source file and identify different components like keywords, operators, and identifiers.

What I Did
To begin with, I studied the role of the lexical analyzer in the compilation process. Its job is to scan the input program and break it into tokens — the smallest meaningful units such as data types, variable names, arithmetic symbols, etc.
I implemented a simple lexical analyzer in C that takes a .c file as input and processes it character by character. The program uses a combination of string handling and conditional logic to detect:
Keywords (like int, if, while)
Operators (like +, -, =, ==)
Identifiers (such as variable and function names)

To identify keywords, I stored a list of standard C keywords in an array and used string comparison (strcmp) to check matches. For operators, I created conditions to match arithmetic and relational symbols. I used functions like fopen(), fgetc(), and isalpha() from C's standard libraries to perform file reading and character analysis. I also handled token buffering, token printing, and skipping whitespaces or irrelevant characters.

The program then displays each token type with its corresponding value, helping simulate what a real compiler would do in its lexical analysis phase.

Tools and Platforms Used
To complete this task, I used multiple tools and platforms to code, debug, and learn effectively:
Visual Studio Code (VS Code): My primary coding environment. I used its syntax highlighting, built-in terminal, and C extension support to write and run my program.
Google Search: I used Google to find C syntax references, definitions of token types, and explanations for character handling functions.YouTube: I watched several tutorials explaining the concept of tokenization and how lexical analyzers work. Visual examples helped me understand how characters are grouped into tokens.
Gemini (by Google): I also explored Gemini to compare answers and suggestions, which gave me additional insights and multiple perspectives for implementing file parsing and keyword recognition.
These combined tools made my development process smoother, faster, and more insightful.

Programming Preferences
I chose C language for this task because it provides low-level access to file streams and character operations, making it ideal for building basic compilers. I avoided using external libraries to better understand how compilers process text manually at the character level.
I preferred a command-line interface (CLI) to input file names and view token output directly in the terminal. This gave me a compiler-like feel while testing the program with different .c files.

Applicability of the Task
This lexical analyzer task is not only academic but also highly practical in areas such as:
Compiler design and development
Syntax highlighting in code editors
Static code analysis tools
Custom scripting language interpreters
Source code transformation tools

It serves as the foundation for further compiler stages like syntax analysis and semantic analysis. This task also enhances logic building, pattern recognition, and text processing skills — all essential for roles in system software, language development, and toolchain engineering.

*OUTPUT*
