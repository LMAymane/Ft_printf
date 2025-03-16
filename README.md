# 🖨️ **ft_printf** 

![Printf Result](https://i.postimg.cc/Z97q7Jp4/Screen-Shot-2025-03-16-at-12-43-48-AM.png)

### 🛠️ **Reimplementing printf in C**  

---

## 🎯 **Overview**  
**ft_printf** is a project at **[1337 Coding School](https://1337.ma)** (part of the **42 Network**) where you reimplement the **printf** function from the C standard library. This project teaches you how to handle **formatted output**, **variadic functions**, and **string manipulation** in C. It’s a great way to deepen your understanding of how **printf** works under the hood.

---

## 🧠 **What You'll Learn**  
- **📖 Variadic Functions**:  
  Learn how to use `va_list`, `va_start`, `va_arg`, and `va_end` to handle a variable number of arguments.  
- **🧩 Format Specifiers**:  
  Implement support for format specifiers like `%c`, `%s`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%p`.  
- **⚙️ String Manipulation**:  
  Build functions to handle strings, numbers, and memory addresses.  
- **🧠 Memory Management**:  
  Manage dynamic memory allocation for formatted strings.  

---

## 🚀 **Features**  
- **✅ Core Functionality**:  
  Reimplement the `printf` function with support for the following format specifiers:  
  - `%c` (char)  
  - `%s` (string)  
  - `%d` / `%i` (signed integers)  
  - `%u` (unsigned integers)  
  - `%x` / `%X` (hexadecimal numbers)  
  - `%p` (pointer addresses)  
  - `%%` (percent sign)  

- **✨ Bonus Features**:  
  - Support for flags like `-`, `0`, `.`, `#`, and ` ` (space).  
  - Handle minimum field width and precision.  

- **📦 Organized Code**:  
  Clean, modular, and well-documented code for easy readability and maintenance.  

---

## 💡 **Why ft_printf Matters**  
The **ft_printf** project is a critical step in understanding how **formatted output** works in C. By reimplementing `printf`, you’ll:  
- **🔧 Understand how variadic functions work.**  
- **🧠 Learn to handle complex string formatting.**  
- **🚀 Prepare for more advanced projects in the 42 curriculum.**  

---

## 🛠️ **Technologies Used**  
- **💻 C Programming Language**  
- **📜 Variadic Functions (`va_list`, `va_arg`, etc.)**  
- **🧠 Manual Memory Management**  

---

## 🌟 **Skills Gained**  
- **🧩 Problem Solving**  
- **📚 Deep Understanding of C**  
- **⚙️ Efficient Code Optimization**  
- **🧠 Algorithm Design**  

---

## 📂 **Project Structure**  
```bash
ft_printf/  
├── Makefile             # Compilation automation  
├── ft_printf.h          # Header file with function prototypes  
├── ft_printf.c          # Main function and parsing logic  
├── ft_*.c               # Helper functions for each format specifier  
└── libft/               # Optional: Use your LIBFT library for helper functions  
