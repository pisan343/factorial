# factorial

Calculate factorial and test it using assert statements. Currently
broken, so needs to be fixed.

Check that style conforms to clang-tidy options

There should be no warning or errors when compiled, 
style checked using clang-tidy or run

## Included Files

- `CMakeLists.txt`: For complex projects, `cmake CMakeLists.txt` will
  generate a `Makefile`. We can then use `make` to compile the
  project. Optional for a small project like this, but included as an
  example.

- `factorial.cpp`: Definitions for factorial functions

- `factorialtest.cpp`: Test functions to test factorial

- `main.cpp`: A generic main file to call testAll() to run all tests

- `output.txt`: Output from `./simple.compile.sh > output.txt 2>&1`
showing how the program is compiled and run

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

### Style Explanation
These options are defined in `.clang-tidy` file.

Perform all check except the following:

- cppcoreguidelines-pro-bounds-array-to-pointer-decay: do not give warnings on assert
- google-build-using-namespace: for simplicity allow `using namespace std;`
- google-readability-braces-around-statements: allow compact code without `{`
- readability-braces-around-statements: allow compact code without `{` (this option
is not available in CSS Linux lab under LLVM 3.8.1, but is needed on my PC when using
9.0.0)

Based on LLVM style in https://llvm.org/docs/CodingStandards.html#the-low-level-issues

```
CheckOptions:
 - { key: readability-identifier-naming.ClassCase,           value: CamelCase  }
 - { key: readability-identifier-naming.StructCase,          value: CamelCase  }
 - { key: readability-identifier-naming.EnumCase,            value: CamelCase  }
 - { key: readability-identifier-naming.VariableCase,        value: CamelCase  }
 - { key: readability-identifier-naming.GlobalConstantCase,  value: UPPER_CASE }
 - { key: readability-identifier-naming.FunctionCase,        value: camelBack  }
 - { key: readability-identifier-naming.PublicMethodCase,    value: camelBack  }
 - { key: readability-identifier-naming.PrivateMethodCase,   value: camelBack  }
 - { key: readability-identifier-naming.PublicMemberCase,    value: CamelCase  } 
```

## Misc

This files is part of a repository located at
https://github.com/pisan343/factorial BUT most students will use it as
the starting code for GitHub Classroom exercise

**IF** you are not using this as part of Github Classroom, you can
clone the repository using

`git clone https://github.com/pisan343/factorial`

When Travis CI runs the automated build, the results would be at

https://travis-ci.com/pisan343/factorial

When using via GitHub Classroom, the Travis CI output will be at

https://travis-ci.com/uwbclass/fixfactorial-yusufpisan
