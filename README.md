# IMC_Assignment

1. Clone the repository/Download the repository in zipped folder
2. Open the terminal/command prompt in that downloaded folder
3. Go to src folder
```
cd src
```
4. Compile all the cpp files using C++11 standard or above.
  - For macOS
```
g++ -std=c++11 -o rockPaperScissors *.cpp
```
  - For Linux
```
g++ -std=c++11 -o rockPaperScissors.out *.cpp
```
  - For Windows
```
g++ -std=c++11 -o rockPaperScissors.exe *.cpp
```
5. Once the files are compiled, open the .out/.exe file in the terminal by writing
```
./rockPaperScissors.out
```
Example:
```
(base) Mriganks-MacBook-Pro:IMC_Assignment mrigank$ pwd
/Users/mrigank/Documents/Study Material/Project/IMC_Assignment
(base) Mriganks-MacBook-Pro:IMC_Assignment mrigank$ cd src
(base) Mriganks-MacBook-Pro:src mrigank$ g++ -std=c++11 -o rockPaperScissors *.cpp
(base) Mriganks-MacBook-Pro:src mrigank$ ./rockPaperScissors
```
## Test Cases
1. The unit tests for the program is in the test folder.
2. To build and run the unit tests you need to have the CMake installed. In this program I have used GTest to configure and run the unit test suite.
3. To see the outputs of the unit tests, you can run ```../build/test/RockPaperScissors_tst```
4. To check the unit test cases, open ```../test/unitTest.cpp```

## UML class Diagram
![Alt text](/resources/class_UML_diagram.jpeg?raw=true "Class UML diagram")

