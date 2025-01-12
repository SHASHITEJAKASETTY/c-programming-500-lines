// #include <stdio.h>

// int main() {
//     FILE *filePointer;

//     // Writing to a file
//     filePointer = fopen("example.txt", "w");
//     if (filePointer == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     fprintf(filePointer, "Hello, world!\n");
//     fclose(filePointer);

//     // Reading from a file
//     filePointer = fopen("example.txt", "r");
//     if (filePointer == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     char buffer[100];
//     while (fgets(buffer, 100, filePointer) != NULL) {
//         printf("%s", buffer);
//     }
//     fclose(filePointer);

//     // Appending to a file
//     filePointer = fopen("example.txt", "a");
//     if (filePointer == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }
//     fprintf(filePointer, "Appending more text.\n");
//     fclose(filePointer);

//     return 0;
// }



// #include <stdio.h>

// int main() {
//     char operator;
//     double num1, num2, result;

//     // Display menu
//     printf("Welcome to the Basic Calculator!\n");
//     printf("Choose an operation to perform:\n");
//     printf(" + : Addition\n");
//     printf(" - : Subtraction\n");
//     printf(" * : Multiplication\n");
//     printf(" / : Division\n");
//     printf("Enter your choice: ");
//     scanf(" %c", &operator);

//     // Input numbers
//     printf("Enter the first number: ");
//     scanf("%lf", &num1);
//     printf("Enter the second number: ");
//     scanf("%lf", &num2);

//     // Perform calculation
//     switch (operator) {
//         case '+':
//             result = num1 + num2;
//             printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
//             break;
//         case '-':
//             result = num1 - num2;
//             printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
//             break;
//         case '*':
//             result = num1 * num2;
//             printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
//             break;
//         case '/':
//             if (num2 != 0) {
//                 result = num1 / num2;
//                 printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
//             } else {
//                 printf("Error: Division by zero is not allowed.\n");
//             }
//             break;
//         default:
//             printf("Error: Invalid operator.\n");
//             break;
//     }

//     return 0;
// }






// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main() {
//     int randomNumber, guess, attempts = 0, maxAttempts = 5;

//     // Seed the random number generator
//     srand(time(0));
//     randomNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100

//     printf("Welcome to the Number Guessing Game!\n");
//     printf("I have selected a number between 1 and 100.\n");
//     printf("You have %d attempts to guess it correctly.\n\n", maxAttempts);

//     // Game loop
//     while (attempts < maxAttempts) {
//         printf("Enter your guess: ");
//         scanf("%d", &guess);

//         attempts++;

//         if (guess == randomNumber) {
//             printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
//             return 0;
//         } else if (guess < randomNumber) {
//             printf("Too low! Try again.\n");
//         } else {
//             printf("Too high! Try again.\n");
//         }

//         printf("Attempts left: %d\n\n", maxAttempts - attempts);
//     }

//     // If the user runs out of attempts
//     printf("Sorry, you've used all your attempts. The correct number was %d.\n", randomNumber);

//     return 0;
// }

// #include <stdio.h>

// // Function prototypes
// unsigned long long factorialIterative(int n);
// unsigned long long factorialRecursive(int n);

// int main() {
//     int number, choice;
//     unsigned long long result;

//     printf("Welcome to the Factorial Calculator!\n");
//     printf("Choose a method to calculate the factorial:\n");
//     printf("1. Iterative\n");
//     printf("2. Recursive\n");
//     printf("Enter your choice (1 or 2): ");
//     scanf("%d", &choice);

//     // Input validation for method choice
//     if (choice != 1 && choice != 2) {
//         printf("Invalid choice. Please restart the program and select 1 or 2.\n");
//         return 1;
//     }

//     // Input for the number
//     printf("Enter a non-negative integer: ");
//     scanf("%d", &number);

//     if (number < 0) {
//         printf("Factorial is not defined for negative numbers.\n");
//         return 1;
//     }

//     // Calculate factorial based on the chosen method
//     if (choice == 1) {
//         result = factorialIterative(number);
//     } else {
//         result = factorialRecursive(number);
//     }

//     // Display the result
//     printf("The factorial of %d is: %llu\n", number, result);
//     return 0;
// }

// // Function to calculate factorial iteratively
// unsigned long long factorialIterative(int n) {
//     unsigned long long fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }

// // Function to calculate factorial recursively
// unsigned long long factorialRecursive(int n) {
//     if (n == 0 || n == 1) {
//         return 1;
//     }
//     return n * factorialRecursive(n - 1);
// }

// #include <stdio.h>

// // Function prototypes
// void celsiusToOthers(double temp);
// void fahrenheitToOthers(double temp);
// void kelvinToOthers(double temp);

// int main() {
//     int choice;
//     double temperature;

//     printf("Welcome to the Temperature Converter!\n");
//     printf("Select the temperature scale you want to convert from:\n");
//     printf("1. Celsius\n");
//     printf("2. Fahrenheit\n");
//     printf("3. Kelvin\n");
//     printf("Enter your choice (1-3): ");
//     scanf("%d", &choice);

//     // Validate choice
//     if (choice < 1 || choice > 3) {
//         printf("Invalid choice. Please restart the program and select a valid option.\n");
//         return 1;
//     }

//     // Get the temperature input
//     printf("Enter the temperature: ");
//     scanf("%lf", &temperature);

//     // Perform conversion based on user choice
//     switch (choice) {
//         case 1:
//             celsiusToOthers(temperature);
//             break;
//         case 2:
//             fahrenheitToOthers(temperature);
//             break;
//         case 3:
//             kelvinToOthers(temperature);
//             break;
//     }

//     return 0;
// }

// // Function to convert Celsius to Fahrenheit and Kelvin
// void celsiusToOthers(double temp) {
//     double fahrenheit = (temp * 9 / 5) + 32;
//     double kelvin = temp + 273.15;
//     printf("\n%.2lf°C in Fahrenheit: %.2lf°F\n", temp, fahrenheit);
//     printf("%.2lf°C in Kelvin: %.2lfK\n", temp, kelvin);
// }

// // Function to convert Fahrenheit to Celsius and Kelvin
// void fahrenheitToOthers(double temp) {
//     double celsius = (temp - 32) * 5 / 9;
//     double kelvin = celsius + 273.15;
//     printf("\n%.2lf°F in Celsius: %.2lf°C\n", temp, celsius);
//     printf("%.2lf°F in Kelvin: %.2lfK\n", temp, kelvin);
// }

// // Function to convert Kelvin to Celsius and Fahrenheit
// void kelvinToOthers(double temp) {
//     if (temp < 0) {
//         printf("\nTemperature in Kelvin cannot be negative.\n");
//         return;
//     }
//     double celsius = temp - 273.15;
//     double fahrenheit = (celsius * 9 / 5) + 32;
//     printf("\n%.2lfK in Celsius: %.2lf°C\n", temp, celsius);
//     printf("%.2lfK in Fahrenheit: %.2lf°F\n", temp, fahrenheit);
// }



















// #include <stdio.h>

// // Function prototype
// void displayInstructions();

// int main() {
//     printf("Welcome to the Game!\n");
    
//     // Call the function to display instructions
//     displayInstructions();
    
//     // Your game logic here
    
//     return 0;
// }

// // Function to display game instructions
// void displayInstructions() {
//     printf("\nGame Instructions:\n");
//     printf("1. This is a simple game where you need to follow the rules.\n");
//     printf("2. Depending on the game, you may be required to guess a number, make a move, or solve a puzzle.\n");
//     printf("3. Pay attention to the hints or feedback provided during the game.\n");
//     printf("4. Make your moves carefully, as some games may have limited attempts.\n");
//     printf("5. Enjoy the game and try to achieve the highest score or best outcome!\n");
//     printf("\nGood luck!\n\n");
// }




