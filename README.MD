# 🏢 Peak Overlap Analysis in Meeting Room Scheduling

<div align="center">

![Algorithm Analysis](https://img.shields.io/badge/Algorithm-Analysis-blue?style=for-the-badge)
![C++](https://img.shields.io/badge/C++-11%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![LaTeX](https://img.shields.io/badge/LaTeX-Report-008080?style=for-the-badge&logo=latex&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-green?style=for-the-badge)

**A comprehensive algorithmic analysis of the Meeting Room Scheduling Problem**

[📖 View Report](#-project-structure) · [🚀 Quick Start](#-quick-start) · [📊 Results](#-performance-comparison) · [👥 Team](#-team)

[![GitHub](https://img.shields.io/badge/GitHub-romisaa5-181717?style=for-the-badge&logo=github)](https://github.com/romisaa5)

</div>

---

## 🎯 Project Overview

This project presents an in-depth analysis of the **Meeting Room Scheduling Problem**, comparing two distinct algorithmic approaches:

- **Naive Algorithm** (Brute Force) - O(n²) time complexity
- **Optimized Algorithm** (Sweep Line) - O(n log n) time complexity

### 🔍 Problem Statement

> Given a list of meetings with start and end times, determine the **minimum number of meeting rooms** required so that all meetings can be held without any overlap.

### 💡 Why This Matters

This problem has real-world applications in:
- 🏢 Corporate meeting room management
- 💻 Server resource allocation
- ✈️ Airport gate scheduling
- 🏥 Hospital operating room scheduling
- 🎪 Event venue management

---

## ✨ Key Features

- ✅ **Two Complete Implementations**: Naive and Optimized solutions
- 📈 **Performance Benchmarking**: Automated testing and comparison
- 🧪 **Comprehensive Testing**: Predefined examples + random test generation
- 📊 **Scalability Analysis**: Tests from 50 to 1000+ meetings
- 📝 **Professional Documentation**: Complete LaTeX report with complexity analysis
- 🎨 **Clean Code**: Well-commented, production-ready C++ implementation

---

## 🏗️ Project Structure

```
📦 Peak-Overlap-Analysis
├── 📄 README.md                              # This file
├── 📁 report/
│   └── 📄 peak_overlap_analysis_report.tex  # Complete LaTeX report
├── 📁 code/
│   ├── 📄 meeting_rooms_scheduler.cpp       # Full implementation (both algorithms)
│   ├── 📄 naive_meeting_rooms.cpp           # Naive algorithm only
│   └── 📄 optimized_meeting_rooms.cpp       # Optimized algorithm only
├── 📁 docs/
│   └── 📄 peak_overlap_analysis_report.pdf  # Compiled PDF report
└── 📁 examples/
    └── 📄 test_cases.txt                     # Sample test cases
```

---

## 🚀 Quick Start

### Prerequisites

```bash
# C++ Compiler (GCC 7.0+ or Clang 5.0+)
g++ --version

# LaTeX (for generating PDF report)
pdflatex --version
```

### Installation & Compilation

```bash
# Clone the repository
git clone https://github.com/romisaa5/peak-overlap-analysis.git
cd peak-overlap-analysis

# Compile the code
cd code
g++ -std=c++11 -O2 meeting_rooms_scheduler.cpp -o meeting_rooms

# Run the program
./meeting_rooms
```

### 📄 Generate PDF Report

```bash
cd report
pdflatex peak_overlap_analysis_report.tex
pdflatex peak_overlap_analysis_report.tex  # Run twice for correct TOC
```

---

## 🧮 Algorithm Comparison

### 🐌 Naive Algorithm (Brute Force)

**Approach**: For each meeting, check against all other meetings to count overlaps.

```cpp
Time Complexity:  O(n²)
Space Complexity: O(1)
```

**Pros**:
- ✅ Simple to understand and implement
- ✅ No additional space required

**Cons**:
- ❌ Poor performance for large datasets
- ❌ Doesn't scale beyond ~1000 meetings

---

### ⚡ Optimized Algorithm (Sweep Line)

**Approach**: Separate start/end times, sort them, then use two pointers to sweep through the timeline.

```cpp
Time Complexity:  O(n log n)
Space Complexity: O(n)
```

**Pros**:
- ✅ Excellent performance even for large datasets
- ✅ Scales to millions of meetings
- ✅ Industry-standard solution

**Cons**:
- ❌ Uses O(n) additional space
- ❌ Slightly more complex implementation

---

## 📊 Performance Comparison

### Execution Time Analysis

| Input Size | Naive (O(n²)) | Optimized (O(n log n)) | Speedup |
|:----------:|:-------------:|:----------------------:|:-------:|
| 50         | ~2 ms         | ~0.1 ms                | **20x** |
| 100        | ~8 ms         | ~0.2 ms                | **40x** |
| 200        | ~30 ms        | ~0.4 ms                | **75x** |
| 500        | ~200 ms       | ~1.2 ms                | **167x** |
| 1,000      | ~800 ms       | ~2.5 ms                | **320x** |

> 💡 **Note**: Actual performance may vary based on hardware and system load.

### 📈 Visual Growth Rate

```
Operations Count for Different Input Sizes:

n = 100:
  Naive:     10,000 operations
  Optimized: ~664 operations

n = 1,000:
  Naive:     1,000,000 operations
  Optimized: ~9,966 operations

n = 10,000:
  Naive:     100,000,000 operations
  Optimized: ~132,877 operations
```

---

## 🧪 Test Cases

### Example 1: Mixed Overlap ✅

```cpp
Meetings:
  M1: [09:00 - 09:10]
  M2: [09:40 - 12:00]
  M3: [09:50 - 11:20]
  M4: [11:00 - 11:30]

Peak overlap at 11:00-11:20: 3 meetings running simultaneously
Result: 3 rooms needed
```

### Example 2: No Overlap ✅

```cpp
Meetings:
  M1: [09:00 - 09:30]
  M2: [10:00 - 10:30]
  M3: [11:00 - 11:30]

All meetings are sequential
Result: 1 room needed
```

### Example 3: Complete Overlap ✅

```cpp
Meetings:
  M1: [09:00 - 12:00]
  M2: [09:30 - 11:30]
  M3: [10:00 - 11:00]
  M4: [10:30 - 12:30]

All 4 meetings overlap between 10:30-11:00
Result: 4 rooms needed
```

---

## 🎓 Learning Outcomes

This project demonstrates:

1. **Algorithm Design Patterns**
   - Brute force vs. optimization
   - Sweep line technique
   - Two-pointer approach

2. **Complexity Analysis**
   - Time complexity calculation
   - Space complexity trade-offs
   - Big O notation in practice

3. **Real-World Problem Solving**
   - Resource allocation
   - Scheduling optimization
   - Performance benchmarking

4. **Professional Development**
   - Clean code practices
   - Comprehensive documentation
   - Academic report writing

---

## 🛠️ Technologies Used

<div align="center">

| Technology | Purpose |
|:----------:|:-------:|
| ![C++](https://img.shields.io/badge/C++-00599C?style=flat&logo=c%2B%2B&logoColor=white) | Algorithm Implementation |
| ![LaTeX](https://img.shields.io/badge/LaTeX-008080?style=flat&logo=latex&logoColor=white) | Report Documentation |
| ![Git](https://img.shields.io/badge/Git-F05032?style=flat&logo=git&logoColor=white) | Version Control |
| ![Markdown](https://img.shields.io/badge/Markdown-000000?style=flat&logo=markdown&logoColor=white) | Documentation |

</div>

---

## 📚 Documentation

### 📖 Full Report Contents

The complete LaTeX report includes:

- ✅ Problem definition and formal specification
- ✅ Detailed algorithm explanations with pseudocode
- ✅ Step-by-step complexity analysis
- ✅ Complete C++ implementation with comments
- ✅ Performance benchmarking and results
- ✅ Visual comparisons and charts
- ✅ Mathematical proofs and correctness verification
- ✅ Real-world applications and extensions

**[📥 Download PDF Report](docs/peak_overlap_analysis_report.pdf)**

---

## 🔧 Advanced Usage

### Custom Test Cases

```cpp
// Create your own test cases
vector<Meeting> myMeetings = {
    Meeting(900, 1000),   // 09:00 - 10:00
    Meeting(930, 1030),   // 09:30 - 10:30
    Meeting(1000, 1100)   // 10:00 - 11:00
};

int result = minMeetingRoomsOptimized(myMeetings);
cout << "Rooms needed: " << result << endl;
```

### Performance Profiling

```bash
# Compile with profiling enabled
g++ -std=c++11 -O2 -pg meeting_rooms_scheduler.cpp -o meeting_rooms

# Run and generate profile data
./meeting_rooms
gprof meeting_rooms gmon.out > analysis.txt
```

### Large-Scale Testing

```bash
# Test with 10,000 meetings
./meeting_rooms --size 10000

# Test with custom time range
./meeting_rooms --size 5000 --maxtime 10000
```

---

## 🤝 Contributing

Contributions are welcome! Here's how you can help:

1. 🍴 Fork the repository
2. 🌱 Create a new branch (`git checkout -b feature/improvement`)
3. ✨ Make your changes
4. 💾 Commit your changes (`git commit -am 'Add new feature'`)
5. 📤 Push to the branch (`git push origin feature/improvement`)
6. 🎉 Create a Pull Request

### Areas for Contribution

- 🎨 Add visualization of meeting schedules
- 🧪 Add more test cases and edge cases
- 📊 Create performance graphs and charts
- 🌐 Add GUI interface
- 🔧 Optimize memory usage further
- 📝 Improve documentation

---

## 👥 Team

<div align="center">

### 🎓 CS312T - Algorithms Analysis and Design

#### 👨‍🏫 Course Instructors

- **Dr. Amr El-Edkawy** - Course Professor
- **Dr. Samir El-Mougy** - Course Professor
- **Eng. Abdelrahman Gamal** - Teaching Assistant

#### 👥 Team Members

| # | Name | ID |
|:-:|:-----|:--:|
| **1** | **Eman Ahmed Gabr** | 1000287526 |
| **2** | **Ahmed Mohamed Othman** | 1000288167 |
| **3** | **Ibrahim Reda Mohamed Abo El Ela** | 1000287457 |
| **4** | **Hanan Waleed Nasr** | 1000288297 |
| **5** | **Romisaa Mohamed Fadel** | 1000287325 |

**Project Date**: December 2025

</div>

---

## 🙏 Acknowledgments

- 📚 **Course**:Algorithms Analysis and Design
- 👨‍🏫 **Professors**: 
  - Dr. Amr El-Edkawy
  - Dr. Samir El-Mougy
- 👨‍💻 **Teaching Assistant**: Eng. Abdelrahman Gamal
- 📖 **References**:
  - *Introduction to Algorithms* by Cormen et al.
  - *Algorithm Design* by Kleinberg & Tardos
  - LeetCode Problem 253: Meeting Rooms II

---

<div align="center">

### ⭐ Star this repository if you found it helpful!

**Made with ❤️ by the Peak Overlap Analysis Team**

[![GitHub stars](https://img.shields.io/github/stars/romisaa5/peak-overlap-analysis?style=social)](https://github.com/romisaa5/peak-overlap-analysis/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/romisaa5/peak-overlap-analysis?style=social)](https://github.com/romisaa5/peak-overlap-analysis/network/members)
[![GitHub watchers](https://img.shields.io/github/watchers/romisaa5/peak-overlap-analysis?style=social)](https://github.com/romisaa5/peak-overlap-analysis/watchers)

---

**[⬆ Back to Top](#-peak-overlap-analysis-in-meeting-room-scheduling)**

</div>