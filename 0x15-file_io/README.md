the project contains information about file descriptrs and how to create them
we also learn the different operations such as opening ,reading ,writing, closing,repositioning and others
The flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR` are constants commonly used in Unix-like operating systems when opening files to specify the desired access mode. These flags indicate whether the file should be opened for reading only, writing only, or both reading and writing. Here's a breakdown of these flags:

1. `O_RDONLY`: This flag indicates that the file should be opened in read-only mode. When using this flag, the file can be read from, but any attempts to write or modify the file will result in an error. This flag is typically used when you only need to read data from a file and have no intention of modifying its contents.

2. `O_WRONLY`: This flag indicates that the file should be opened in write-only mode. When using this flag, you can write data to the file but cannot read from it. If you attempt to read from the file descriptor associated with this flag, it will result in an error. This flag is useful when you only need to write data to a file and don't need to read its existing contents.

3. `O_RDWR`: This flag indicates that the file should be opened in read-write mode, allowing both reading and writing operations. With this flag, you can read data from the file and write new data to it. This flag provides the most flexibility as it allows both read and write operations on the file. It's typically used when you need to perform both reading and writing on a file.

To use these flags when opening a file, you need to combine them with other flags using bitwise OR (`|`). For example:

```c
#include <fcntl.h>

int fileDescriptor = open("filename.txt", O_RDONLY); // Opens file for reading only

// OR

int fileDescriptor = open("filename.txt", O_WRONLY); // Opens file for writing only

// OR

int fileDescriptor = open("filename.txt", O_RDWR); // Opens file for reading and writing
```

In the above C code snippet, the `open()` function is used to open the file "filename.txt" with the specified access mode indicated by the flags `O_RDONLY`, `O_WRONLY`, or `O_RDWR`. The resulting file descriptor can then be used for subsequent read or write operations on the file.

It's important to note that the availability and behavior of these flags may vary depending on the operating system and programming language you are using. It's recommended to refer to the documentation or specific resources for your chosen language and operating system to ensure correct usage of these flags.
