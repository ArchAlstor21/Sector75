# Sector75 0.0.1-dev

A C++ OpenGL game application from scratch. This is experimental and in very early development!

NOTE: This project was made on Linux! Windows and MacOS support is untested!

## Project Status
NOTE ON AI USAGE: I will only be using AI for simple questions and explainations. I will not be using it to generated any code or text for this project. This entire project is and will be hand written.

- [x] Get window to open
- [x] Render a triangle
- [ ] Render a rectangle with an EBO
- [ ] TBD

## Requirements to Build Project

- CMake >= 3.10
- GCC or Clang with C++17 support
- GLFW3 (development libraries)

# Installing and Building Source:
## Linux:
### Building the Game Source

```bash
cmake -S . -B build
cd build
make -j$(nproc)
```

### Running the Game

```bash
./Sector75
```
