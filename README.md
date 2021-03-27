# C++ Shapes Program

---
### Overview
This program prints out squares, triangles, circles, and points inside of a grid based on given input.
Input consists of: 
  1. Name of the shape you want to print (square, triangle, circle, point)
  2. Followed by X and Y coordinates for print location (triangle 10 10 or circle 5 16)
  3. Special cases:
        - Square takes in the x and y coordinates but also requires a third size input variable.
        For example: (square 0 0 24)
        - Point also takes in the x and y coordinates but also requires the character you want to print as your point.
        For example: (point 15 3 ?)

> The goal of this program is to practice implementing inheritance and polymorphism, using virtual functions, and practice using 2D arrays in C++.
&nbsp;
---
### Installation
Clone my repo:
```bash
git clone https://github.com/glaurent96/Shapes.git
```
---
### Compile and run the program
Compile the program:
```bash
cd Shapes
make
```
Run the created executable file:
```bash
./Shapes
```
Type in your input and then press Ctrl-Z on Windows or Ctrl-D on UNIX:
```bash
square 0 0 24
square 2 5 4
triangle 10 10
circle 5 16
point 15 3 ?
```
---
### Run Automated Tests
Double click on tests.zip file to unzip the tests folder.
&nbsp;
Run executable testing script:
```bash
./run_tests Shapes
```

>The script will create a results folder with all the program outputs generated from the tests. Check the tests folder if any tests fail to compare with expected output.
---
