# Sector75 0.0.1-dev

A C++ OpenGL game application from scratch. This is experimental and in very early development!

NOTE: This project was made on Linux! Windows support is untested!

## Project Status

- [x] Get window to open
- [x] Render spinning cube
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
