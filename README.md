# Sector75 0.0.1-dev

A C++ OpenGL game application from scratch. This is experimental and in very early development!

NOTE: This project was made on Linux! Windows support is untested!

## Project Status
NOTE ON AI USAGE: I have reverted to earlier steps so that I will properly learn OpenGL. I found the overuse of AI in this project made it harder to understand and keep up with. So I will be using AI for simple questions and explainations when I got stuck. All edits to files themselves will be made by me alone. AI will not be touching this project or its files in any way.

- [x] Get window to open
- [ ] Render a triangle
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
