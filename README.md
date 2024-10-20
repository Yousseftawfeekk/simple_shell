# Simple Shell

## Table of Contents
- [Description](#description)
- [Authors](#authors)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#features)
- [Built-ins](#built-ins)
- [Examples](#examples)
- [License](#license)

## Description
`simple_shell` is a simple UNIX command interpreter written in C that mimics the behavior of the shell (sh). It reads commands from standard input, executes them, and returns the output. This project was developed as part of the ALX Software Engineering program to provide hands-on experience with system calls, processes, memory management, and I/O operations.

## Authors
- **Youssef Tawfeek** - [Yousseftawfeekk](https://github.com/Yousseftawfeekk)
- **Abdelrahman Ahmed** - [abdoAhmed704](https://github.com/abdoAhmed704)

## Installation
To install and use the `simple_shell`, follow these steps:

1. Clone this repository:
   \`\`\`bash
   git clone https://github.com/Yousseftawfeekk/simple_shell.git
   \`\`\`
2. Change directory to `simple_shell`:
   \`\`\`bash
   cd simple_shell
   \`\`\`
3. Compile the program:
   \`\`\`bash
   gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
   \`\`\`

## Usage
Once compiled, you can run the shell by typing:
\`\`\`bash
./hsh
\`\`\`
The `simple_shell` works both in **interactive mode** (waiting for user input) and **non-interactive mode** (reading from a file or piped input).

- **Interactive mode**:
   \`\`\`bash
   $ ./hsh
   ($) ls -l
   total 56
   -rw-r--r-- 1 user user 1442 Jan 1 12:00 file.c
   ($) exit
   \`\`\`

- **Non-interactive mode**:
   \`\`\`bash
   $ echo "ls -l" | ./hsh
   total 56
   -rw-r--r-- 1 user user 1442 Jan 1 12:00 file.c
   \`\`\`

## Features
- Supports the execution of UNIX commands like `ls`, `cat`, `echo`, etc.
- Handles commands with arguments.
- Environment variable handling (e.g., `$PATH`).
- Exit built-in to quit the shell.
- Support for file redirection and piping.
- Command execution in both interactive and non-interactive modes.

## Built-ins
The following built-ins are implemented in the `simple_shell`:
- **exit**: Exits the shell.
   \`\`\`bash
   ($) exit
   \`\`\`

- **env**: Prints the current environment variables.
   \`\`\`bash
   ($) env
   \`\`\`

## Examples
- Run `ls` in the shell:
   \`\`\`bash
   ($) ls
   file1 file2 directory1
   \`\`\`

- Run `env` to display environment variables:
   \`\`\`bash
   ($) env
   USER=user
   HOME=/home/user
   \`\`\`


## License
This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.
"""

# Write to a file
with open("/mnt/data/README.md", "w") as file:
    file.write(readme_content)
"/mnt/data/README.md file created successfully!"

