# Libft - Custom C Library

A custom implementation of essential C standard library functions as part of the 42 School curriculum.



## 🎯 About

Libft is the first project in the 42 School curriculum where students must recreate several functions from the C standard library, as well as implement additional utility functions. This project serves as a foundation for future projects and helps develop a deep understanding of C programming fundamentals.



## 🚀 Installation

1. Clone the repository:
```bash
git clone [repository-url]
cd libft
```

2. Compile the library:
```bash
make
```

This will create `libft.a` - a static library containing all the functions.

## 💻 Usage

### Basic Usage

1. Include the header in your C files:
```c
#include "libft.h"
```

2. Compile your program with the library:
```bash
gcc your_program.c libft.a -o your_program
```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Hello, 42!";
    char *substr;
    int len;
    
    len = ft_strlen(str);
    printf("Length: %d\n", len);
    
    substr = ft_substr(str, 7, 2);
    printf("Substring: %s\n", substr);
    
    free(substr);
    return (0);
}
```



## 📝 Notes

- All functions follow the 42 Norm coding standards
- Memory allocation functions return NULL on failure
- String functions handle NULL pointers appropriately
- No global variables are used
- Functions are optimized for both readability and performance

## 👨‍💻 Developer

**Haktan Dalıcı**

---

*This project is part of the 42 School curriculum and serves as an introduction to C programming and memory management concepts.*
