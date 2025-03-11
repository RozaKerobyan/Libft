# LIBFT 📒

## Libft is a personal standard library that provides useful functions for C programming.
## 🚀 Setup

### 1. Clone the Repository
Clone the repository to your local machine using the following command:

``` bash
git clone git@github.com:RozaKerobyan/Libft.gi
```

### 2. Navigate to the Libft Directory
``` bash
cd Libft
```

### 3. Compile the Library
``` bash
make
```

### 📌 Usage
#### To include Libft in your C file, add:
``` c
#include "libft.h"
```

### Example: `main.c`
``` c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, Libft!";
    printf("String length: %zu\n", ft_strlen(str));
    return 0;
}
```
