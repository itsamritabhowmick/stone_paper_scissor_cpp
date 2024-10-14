
# Stone Paper Scissors Game 🎮

A simple **Stone Paper Scissors** game built in C++ that pits the user against the computer. The goal is to reach a specified score first and claim victory!

## Features
- **Interactive Gameplay:** Users input their choice (Stone, Paper, or Scissors) and play against the computer.
- **Randomized Computer Moves:** Computer generates a random choice for fairness.
- **Score Tracking:** Both the user and computer have their scores tracked.
- **Clear Winner Announcement:** The first to reach the specified score wins.

---

## How to Play
1. **Choose a Target Score:** Enter the number of points required to win.
2. **Input your Choice:**
   - **1** = Stone  
   - **2** = Paper  
   - **3** = Scissors  
3. The game will display both the user and computer's choice.
4. If the score is tied, the game continues until someone reaches the winning score.
5. The winner is announced at the end!

---

## How to Run
1. Clone this repository:
   ```bash
   git clone https://github.com/your-username/stone-paper-scissors.git
   cd stone-paper-scissors
   ```
2. Compile the code using a C++ compiler:
   ```bash
   g++ -o stone_paper_scissors stone_paper_scissors.cpp
   ```
3. Run the executable:
   ```bash
   ./stone_paper_scissors
   ```

---

## Rules of the Game
- **Stone (1)** beats Scissors (3).
- **Paper (2)** beats Stone (1).
- **Scissors (3)** beats Paper (2).
- Same choices result in a **draw**, and no points are awarded.

---

## Example Game Output
```
Enter score: 3
Stone Paper Scissor Game

Enter input number for user: 1
Computer input is: 2
Computer Score is: 1
User Score is: 0

Enter input number for user: 3
Computer input is: 1
Computer Score is: 2
User Score is: 0

The winner is:
Computer is winner
```

---

## Prerequisites
- **C++ Compiler**: Ensure you have a C++ compiler installed, such as `g++` or `clang++`.
- **Windows OS** (for `windows.h`): This game uses Windows-specific functions like `system("cls")` and `Sleep()`.

---

## Future Improvements
- Add input validation to avoid incorrect inputs.
- Create a menu for better user interaction.
- Make the code cross-platform by replacing `windows.h` functions.

---

## Contributing
Feel free to fork the project, submit issues, and send pull requests. Contributions are welcome!

---

## License
This project is open-source and available under the **MIT License**.

---

Enjoy the game and have fun! 🎉
