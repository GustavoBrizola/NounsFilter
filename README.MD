# NounsFilter

A simple C program that filters lines from a text file based on a specific search term.

## Description

NounsFilter is a command-line utility written in C that allows you to search for a specific word or number within a source file and save all matching lines into a new output file. This is particularly useful for filtering large CSV files.

## Features

- **Custom Input/Output**: Specify the source file and the destination file at runtime.
- **Keyword Filtering**: Search for any specific string (word or number) to filter your data.
- **Lightweight**: Written in standard C for maximum portability and performance.

## How it Works

1. The program prompts you for the name of the input file (including the extension).
2. It then asks for the name of the output file where the filtered results will be saved.
3. Finally, it asks for the specific string you want to find.
4. The program reads the input file line by line and writes any line containing the search term to the output file.

## Getting Started

### Prerequisites

- A C compiler (e.g., `gcc` or `clang`)

### Compilation

Compile the program using a C compiler:

```bash
gcc main.c -o nounsfilter
```

### Usage

Run the compiled executable:

```bash
./nounsfilter
```

Follow the on-screen prompts to provide the input file, output file, and the search term.

## Example

**Input Prompt:**
```text
File Name *add extension*: data.csv
filtered file name *Add extension*: results.csv
what number/word find: 2021
```

The program will then create `results.csv` containing only the lines from `data.csv` that include the text "2021".
