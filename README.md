# 🧮 Basic Calculator in C

A simple command-line calculator written in C that supports four basic arithmetic operations.

---

## 📋 Features

- Addition
- Subtraction
- Multiplication
- Division (with divide-by-zero protection)
- Loop menu until user chooses to exit

---

## 🗂️ Project Structure

```
calculator/
└── program.c       # Main source file containing all functions and logic
```

---

## ⚙️ How It Works

The program displays a menu in a loop and prompts the user to select a function (1–5):

| Option | Function     |
|--------|--------------|
| 1      | Plus         |
| 2      | Minus        |
| 3      | Multiply     |
| 4      | Divide       |
| 5      | Exit         |

After selecting an operation (1–4), the user enters two numbers and the result is displayed with 2 decimal places.

---

## 🔧 Functions

```c
float plus_function(float number1, float number2);
float minus_function(float number1, float number2);
float multiply_function(float number1, float number2);
float devide_function(float number1, float number2);
```

Each function takes two `float` arguments and returns a `float` result.

> ⚠️ Division by zero is handled — if `number2 == 0`, the program prints `Error!!` instead of computing.

---

## 🚀 How to Compile and Run

### Compile
```bash
gcc main.c -o calculator
```

### Run
```bash
./calculator
```

---

## 💡 Example Usage

```
______________________________________
|----------Basic Calculator----------|
|----------Select Function-----------|
|-1.Plus|2.Minus|3.Multiply|4.Devide-|
|---------------5.Exit---------------|
______________________________________
Select Function : 1
Input Number1 : 10
Input Number2 : 5
Ouput : 15.00
```

---

## 📌 Notes

- All inputs and outputs use `float` type.
- Entering an invalid option (not 1–5) will also exit the program (via `default` case).
- The program loops continuously until option `5` or an invalid option is entered.
