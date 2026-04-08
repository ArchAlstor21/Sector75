# Sector75 0.0.1-dev

A personal C++ OpenGL game application from scratch. This is experimental and in very early development! More is to be done soon! But as for now, it only launches a window.

NOTE: This project is being made exclusively on Linux. Windows support may come later when the game is more complete.

## Project Status

- [x] GLFW window initialization
- [x] OpenGL 3.3 core profile context creation
- [x] GLAD loader integration
- [x] Framebuffer resize callback
- [] TBD

## Requirements

- CMake >= 3.10
- GCC or Clang with C++17 support
- GLFW3 (development libraries)

## Building the Game Source

```bash
cmake -S . -B build
cd build
make -j$(nproc)
```

## Running the Game

```bash
./Sector75
```