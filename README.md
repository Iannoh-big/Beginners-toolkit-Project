# Prompt Kickstart: Building a Beginner's Toolkit for C++ (CLI Fundamentals)

[![Language](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-Linux%20Ubuntu-orange.svg)](https://ubuntu.com/)

## 📋 Overview

This project is a beginner-friendly toolkit for learning C++ CLI programming on Linux (Ubuntu). It demonstrates how to use generative AI prompts to learn a new programming language and create a simple, functional CLI application.

The toolkit includes a complete learning guide, working code example, and documentation of the AI-assisted learning process.

## 🎯 Project Goal

- Learn C++ basics using AI-assisted prompts
- Build a simple interactive CLI greeting tool
- Document the learning process for others to replicate
- Provide clear setup instructions and troubleshooting tips

## 🛠️ What's Included

- **Interactive CLI Greeting Tool** - A simple C++ program that accepts user input and displays personalized greetings
- **Complete Toolkit Document** - Comprehensive guide with setup instructions, code walkthrough, and learning reflections
- **AI Prompt Journal** - Documentation of prompts used and learning insights
- **Troubleshooting Guide** - Common issues and their solutions

## 💻 System Requirements

- **Operating System:** Linux (Ubuntu)
- **Compiler:** g++ (GNU C++ Compiler)
- **Text Editor:** VS Code, Nano, Vim, or any preferred editor
- **Terminal:** Bash or compatible shell

## 🚀 Quick Start

### 1. Install g++ Compiler

```bash
# Update package list
sudo apt update

# Install g++ compiler
sudo apt install g++

# Verify installation
g++ --version
```

### 2. Clone the Repository

```bash
git clone https://github.com/yourusername/prompt-kickstart-cpp.git
cd prompt-kickstart-cpp
```

### 3. Compile the Program

```bash
cd src
g++ main.cpp -o greeting
```

### 4. Run the Program

```bash
./greeting
```

### Expected Output

```
Enter your name: Ian
Hello, Ian! Welcome to C++ CLI programming.
```

## 📁 Project Structure

```
prompt-kickstart-cpp/
│
├── README.md                           # This file
├── toolkit/
│   └── Prompt_Kickstart_Cpp_Toolkit.md # Toolkit document (Markdown)
│
├── src/
│   └── main.cpp                        # C++ source code
│
└── docs/
    └── Prompt_Kickstart_Cpp_Toolkit.pdf # Toolkit document (PDF)
```

## 📖 How the Code Works

The greeting tool demonstrates fundamental C++ concepts:

- **Input/Output Streams:** Using `std::cin` and `std::cout`
- **String Handling:** Working with `std::string`
- **User Interaction:** Reading user input with `std::getline()`
- **Compilation Process:** Using g++ to compile C++ code
- **Binary Execution:** Running compiled programs from the terminal

## 🔧 Troubleshooting

### Issue: `g++: command not found`
**Solution:** Install the g++ compiler:
```bash
sudo apt install g++
```

### Issue: `Permission denied` when running program
**Solution:** Ensure you're using the correct execution command:
```bash
./greeting
```

### Issue: Program doesn't wait for input
**Solution:** Use `std::getline()` instead of `std::cin >>` to handle input with spaces.

## 📚 Learning Resources

- [C++ Official Documentation](https://isocpp.org/)
- [GNU g++ Manual](https://gcc.gnu.org/onlinedocs/gcc/)
- [Linux Command Line Basics](https://ubuntu.com/tutorials/command-line-for-beginners)
- [Learn C++ Tutorial](https://www.learncpp.com/)

## 🎓 About This Project

This project was created as part of a capstone assignment focused on using generative AI to learn new technologies. The toolkit demonstrates:

- How to leverage AI prompts for learning programming languages
- Clear documentation practices for technical projects
- Step-by-step guidance for beginners
- Practical troubleshooting and problem-solving

## 👥 Peer Feedback

Peer feedback will be documented in the full toolkit document after testing sessions.

## 📄 License

This project is created for educational purposes.

## 👤 Author

**Ian** - Data Science & AI Student

---

*For the complete learning guide, AI prompt journal, and detailed explanations, see the toolkit document in `/docs/Prompt_Kickstart_Cpp_Toolkit.pdf`*
