# GrblParser

This is a library to make it easier to write programs to interface
with Grbl and FluidNC.  It parses Grbl messages and provides callbacks
whereby your program can extract information conntained therein.

It also has an "e4math" feature that lets you handle decimal numbers
with up to 4 postdecimal digits without resorting to floating point
arithmetic.
