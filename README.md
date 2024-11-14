# What's This
A Simple Executable To Open Images Using OpenCV's HighGUI Image Viewer, Useful When Testing/Debugging with OpenCV's C++ API From a Foreign Function Interface, (When Retrieving An Image with Points, etc ...) As The OpenCV Viewer Shows Information About Each Pixel, Location on The Axis, Etc...

# Compilation
- Using G++
``` g++ src/opencv_viewer.cpp -o viewer.exe `pkg-config --libs --cflags opencv4` ```
