# Guess the number

This repository builds a simple number guessing game in C.

## Description

This program builds a guessing game where the software chooses a random integer between 1-100. Then, the user guesses the number, while the software hints if the input is too low or too high. Once the guess is correct, the program outputs the number of attempts it took. It could be improved by stopping the loop if a maximum number of guesses is reached.

If you want to change the range for the random integer, modify the line:

```
int number = rand() % 100 + 1;
```

## Getting Started

### Dependencies

You will need a C compiler (as Visual Studio) - or an online editor would work too.
Dependencies are listed at the beginning of the code:

```
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
```


## Version History

* 0.1
    * Initial Release

## License

This project is licensed under The Unlicense License - see the LICENSE.md file for details
