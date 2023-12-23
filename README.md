# Elevator

A program created to explore a few [object oriented design patterns](https://en.wikipedia.org/wiki/Design_Patterns) in C++. The program emulates the functionality of an elevator traveling to different floors.

### Object Oriented Design Patterns Utilized Here:
- State pattern
- Chain of Responsibility pattern
- Strategy Pattern

### Required Tools:
- GNU Make
- g++
- git 
These tools are standard for many development environments so they may be installed on your system by default <\br><\br>

Check to see if you have the **GNU Make** build tool installed <\br>
```bash
$ make --version
```
<\br><\br>

Check to see if you have the **g++** C++ compiler installed
```bash
$ g++ --version
```
<\br><\br>

Check to see if you have the **git** version control tool installed <\br>
```bash
$ git --version
```
<\br><\br>

If a tool is not installed when the above commands are run, the system may alert you that the command was not found. If this is the case, please use your systems package manager to install the necessary tools then run the commands again to ensure the tool was installed properly.

## Installation Instructions
Clone the repository to your local machine
```bash
$ git clone https://github.com/MrWhiskersss/elevator-patterns.git ./elevator
```
<\br><\br>

Change the current working directory to the directory the repository was cloned to
```bash
$ cd elevator
```
<\br><\br>

Compile the source code into an executable
```bash
$ make
```
<\br><\br>

The executable should now be present in the repository directory

## Usage Instructions
Running the program from the repository directory
```bash
$ run.out
```
<\br><\br>

Running the program with the provided example input file
```bash
$ run.out test.txt
```

## Tips
Remove the generated object files and the program executable
```bash
$ make clean
```
