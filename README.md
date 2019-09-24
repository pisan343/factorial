# factorial

Calculate factorial and test it using assert statements. Currently
broken, so needs to be fixed.

Check that style conforms to clang-tidy options

## Included Files

- `CMakeLists.txt`: For complex projects, `cmake CMakeLists.txt` will
  generate a `Makefile`. We can then use `make` to compile the
  project. Optional for a small project like this, but included as an
  example.

- `factorial.cpp`: Definitions for factorial functions

- `factorialtest.cpp`: Test functions to test factorial

- `main.cpp`: A generic main file to call testAll() to run all tests

- `simplecompile.sh`: Unix bash script file to compile, run clang-tidy
  as well as other programs and then delete the executable. Can be
  used to create an output.txt file

- `.clang-tidy`: Specify the options for clang-tidy program, so we do
  not have to enter them on the command line each time.
  Usage: `clang-tidy *.cpp -- -std=c++14`

- `.gitattributes`: Options for git. Making sure that simplecompile.sh
  always has the correct line endings when moving between Windows and
  unix systems

- `.gitignore`: Files that should not be checked into git. Mostly ide
  files and executables.

- `.travis.yml`: When GitHub is configured correctly, checking the
  project into GitHub should trigger Travis CI to compile and run the
  program.

## Compile and Run

```
cmake CmakeLists.txt
make
./factorial
```

or

```
clang++ -std=c++14 -Wall -Wextra *.cpp -o factorial
./factorial
```

## Style check

```
clang-tidy *.cpp -- -std=c++14
```

## Misc

This files is part of a repository located at
https://github.com/pisan343/factorial BUT most students will use it as
the starting code for GitHub Classroom exercise

**IF** you are not using this as part of Github Classroom, you can
clone the repository using
`git clone https://github.com/pisan343/factorial`