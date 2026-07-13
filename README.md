# Smart-voting-System
Smart Voting System developed in C++ using Object-Oriented Programming (OOP) with secure voter authentication, candidate management, vote casting, and result generation.
#  Smart Voting System (C++ OOP Project)

A console-based **Smart Voting System** developed in **C++** using **Object-Oriented Programming (OOP)** concepts. The system simulates a real election process where an administrator manages elections, registers voters and candidates, conducts voting, declares results, and generates reports.

---

##  Project Overview

This project demonstrates how Object-Oriented Programming can be used to build a simple election management system.

The system allows:

- Admin registration and management
- Candidate registration
- Voter registration
- Election management
- Vote casting
- Result declaration
- Report generation

The project is completely menu/console based and is intended for educational purposes.

---

##  Features

###  Admin

- Register voters
- Register candidates
- Start election
- Pause election
- End election
- View all voters
- View all candidates
- Generate election report

---

###  Voter

- Eligible voters can cast a vote
- Underage voters cannot vote
- Duplicate voting is prevented
- View voter card

---

###  Candidate

- Candidate registration
- Age verification (25+)
- Vote counting
- Winner status

---

###  Political Party

- Store party information
- Party ID
- Party Name
- Election Symbol
- Party Leader

---

###  Election

- Start election
- Pause election
- End election
- Accept votes
- Store vote records
- Declare winner
- Generate reports

---

###  Result

- Calculate total votes
- Find winner
- Display election result

---

###  Report

- Generate election summary
- Display votes per candidate
- Export report

---

#  Project Structure

```
Smart-Voting-System/
│
├── Admin.cpp
├── Admin.h
│
├── Person.cpp
├── Person.h
│
├── Candidate.cpp
├── Candidate.h
│
├── PoliticalParty.cpp
├── PoliticalParty.h
│
├── Election.cpp
├── Election.h
│
├── Result.cpp
├── Result.h
│
├── Report.cpp
├── Report.h
│
├── Voter.cpp
├── Voter.h
│
├── Vote.cpp
├── Vote.h
│
├── main.cpp
│
└── README.md
```

---

#  OOP Concepts Used

This project demonstrates the following OOP concepts:

- ✅ Classes
- ✅ Objects
- ✅ Inheritance
- ✅ Encapsulation
- ✅ Polymorphism (Virtual Functions)
- ✅ Abstraction
- ✅ Composition
- ✅ Constructors
- ✅ Function Overriding

---

#  Class Diagram

```
                Person
                   │
      ┌────────────┴────────────┐
      │                         │
   Admin                    Candidate
      │
      │
    Voter

Election
   │
   ├── Vote
   ├── Result
   └── Report

PoliticalParty
```

---

# ⚙️ Validation Rules

### Candidate

- Minimum age: **25 years**

### Voter

- Minimum age: **18 years**

### Voting

- One voter can vote only once.
- Election must be started before voting.
- Voting stops after election ends.

---

#  Program Flow

1. Create Political Parties
2. Create Admin
3. Create Election
4. Register Candidates
5. Register Voters
6. Display Registered Data
7. Start Election
8. Cast Votes
9. End Election
10. Declare Winner
11. Generate Report
12. Display Voter Cards

---

#  Sample Output

```
SMART VOTING SYSTEM

Registering Candidates...

Candidate Registered Successfully

Registering Voters...

Voter Registered Successfully

Election Started

Voting Phase...

Vote Recorded Successfully

Election Closed

Winner: Ali Hassan

Total Votes Cast: 4

Report Generated Successfully
```

---

#  Technologies Used

- C++
- Object-Oriented Programming (OOP)
- Standard Template Library (STL)
- Visual Studio Code / Dev C++
- GCC Compiler

---

#  How to Run

### Clone the repository

```bash
git clone https://github.com/yourusername/Smart-Voting-System.git
```

### Open project

Open all source files in your preferred C++ IDE.

Examples:

- Visual Studio Code
- Dev C++
- Code::Blocks

### Compile

```bash
g++ *.cpp -o VotingSystem
```

### Run

```bash
./VotingSystem
```

Windows:

```bash
VotingSystem.exe
```

---

#  Learning Outcomes

After completing this project, you will understand:

- Real-world implementation of OOP
- Inheritance
- Virtual Functions
- Encapsulation
- Object Interaction
- Election Management Logic
- Basic Software Design

---

# Developed By

** Hassnain Rao**

BS Artificial Intelligence

Air University, Multan Campus

---

#  License

This project is created for educational purposes only.

Feel free to use and modify it for learning.

---

 If you found this project helpful, don't forget to give it a star on GitHub
