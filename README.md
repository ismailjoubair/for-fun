# for-fun
🚀 C-Codes for FunWelcome to my personal collection of C programs and shell scripts! This repository is a playground where I practice logic, play with arrays, and build simple terminal tools. Most of these were created while learning the fundamentals of programming.
#📂 Project GalleryHere 
is a breakdown of what I've built so far:
File             |||||||||||||                   Description              ||||||||||||||                Highlights                                               

calc.c                                   A multi-function calculator.                     Handles +, -, *, and / using user input.                               

fabunocci.c                              An infinite Fibonacci generator.                 Calculates the sequence up to 255 in a continuous loop.               

classe.c                                 A student grade checker.                         Uses strcmp to find names in a list and return grades/mentions.        

etoile.c                                 A geometric star pattern generator.              Generates a right-angled triangle of * based on user height.           

moy.c                                    Grade statistics tool.                           Calculates the average and finds the maximum from a list of notes.     

inv.c                                    Array inverter.                                  Takes a custom -sized array and prints it in reverse order.            

pari.c                                   Even/Odd checker.                                Uses the modulo operator % to determine number parity.                

chech.c                                  A search simulation.                             Searches for a specific number within a 10-element array.              

sc.sh                                    A Bash utility.                                  A custom shell function to display a visual progress bar.              

print.c                                  The classic.                                     Every journey starts with "Hello World!".                              

#🛠️ How to Compile & Run
To run the C programs, use gcc. 
For the bash script, you can source it.  
For C files:
Bash# Compile
gcc filename.c -o output

# Run
./output
For the Bash Script:Bash# Source the file to use the progress-bar function
source sc.sh

# Example usage:
progress-bar 50 100
🧠 Logic ExperimentsMemory & Arrays: Scripts like inv.c and chech.c helped me understand how to navigate data in memory.Conditionals: calc.c and classe.c explore nested logic and string comparisons.Loops: fabunocci.c demonstrates how to manage variables during iterative calculations.📝 Notes & Error HandlingI’ve included some "Easter eggs" and error messages in my code, like the custom Error 404 in calc.c if you choose an invalid operator!
