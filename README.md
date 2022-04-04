# C-Programming


## How to compile and run c program

1. ### Create a file 
    > test_file.c
    ```c
    #include<stdio.h>

    int main(){
        printf("Hello world!");
        return 0;
    }
    ```
    Here is a simple c program to demonstrate the compilation
2. ### How to Compile a `test_file.c`
    > Prerequisite for the following command to run
    >
    >> 1. Git Bash [gitbash](https://git-scm.com/)  (not compulsory)
    >> 2. **gcc** to compile c program [gcc]()(simplest Video tutorial to install gcc )

    #### Compile test_file.c
    1. Run the following command to compile c file
        ```bash
        foo@bar:~$ gcc test_file.c -o test_file
        ```
        This command will convert c program into .exe file.

2. ### Run the `test_file.exe` file 
    Execute the `.exe` file.
    ```bash
    user@username:~$ ./test_file.exe
    ```

3. ### Above commands in one line (git bash required)
    Compile and execute test_file.c and execute it.
    ```bash
    user@username:~$ gcc test_file.c -o test_file && ./test_file.exe
    ```

4. ### Output of the file
    The output of the program in `test_file.c` is
    ```bash
    user@username:~$ ./test_file.exe
    Hello world!
    ```
