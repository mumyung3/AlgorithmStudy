# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Repository Overview

This is an algorithm study repository containing C++ solutions organized by problem directories (problem1, problem2, etc.).

## Development Environment

- **Compiler**: MinGW g++ (located at `C:\Strawberry\c\bin\g++.exe`)
- **Platform**: Windows (MINGW64)
- **IDE**: VSCode with C++ build tasks configured

## Build Commands

### Compile C++ files
```bash
# Using the configured g++ compiler
C:\Strawberry\c\bin\g++.exe -g problem1/main.cpp -o problem1/main.exe

# Or for any problem directory:
g++ -g problem<N>/main.cpp -o problem<N>/main.exe
```

### VSCode Build Task
- Press `Ctrl+Shift+B` in VSCode to build the active C++ file
- The build task is configured as the default build task in `.vscode/tasks.json`

## Project Structure

- Each problem solution is in its own directory (`problem1/`, `problem2/`, etc.)
- Each problem directory contains:
  - `main.cpp` - The C++ source file with the solution
  - `main.exe` - The compiled executable (after building)

## Code Conventions

- Standard C++ with STL usage
- Problem solutions typically implement a `solution` function that takes input parameters and returns the answer
- Use `using namespace std;` for convenience in algorithm problems