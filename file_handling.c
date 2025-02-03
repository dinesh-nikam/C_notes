/**
 * File Handling in C
 *
 * File handling in C is a mechanism to create, read, write, and close files.
 * The standard I/O library in C provides functions to perform these operations.
 *
 * Commonly used functions:
 * - fopen(): Opens a file and returns a file pointer.
 * - fclose(): Closes an opened file.
 * - fprintf(): Writes formatted output to a file.
 * - fscanf(): Reads formatted input from a file.
 * - fputc(): Writes a character to a file.
 * - fgetc(): Reads a character from a file.
 * - fwrite(): Writes a block of data to a file.
 * - fread(): Reads a block of data from a file.
 *
 * File modes:
 * - "r": Opens a file for reading.
 * - "w": Opens a file for writing (creates a new file or truncates an existing file).
 * - "a": Opens a file for appending.
 * - "r+": Opens a file for both reading and writing.
 * - "w+": Opens a file for both reading and writing (creates a new file or truncates an existing file).
 * - "a+": Opens a file for both reading and appending.
 *
 * Example usage:
 * FILE *file = fopen("example.txt", "r");
 * if (file == NULL) {
 *     // Handle error
 * }
 * // Perform file operations
 * fclose(file);
 */

#include<stdio.h>
int main(){
    
}