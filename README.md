<h1 align="center">🎯 Number Guessing Game (C++)</h1>

<p align="center">
A simple console-based number guessing game written in <b>C++</b>.  
The program generates a random number between <b>1 and 100</b>, and the player must guess it with the help of hints.
</p>

---

## 🚀 Features

* Random number generation
* User input validation
* Hint system (Too high / Too low / Close / Very close)
* Tracks number of attempts
* Option to play multiple rounds
* Console-based interactive gameplay

---

## 🛠️ Technologies Used

* **C++**
* Standard Library:

  * `iostream`
  * `cstdlib`
  * `ctime`
  * `cmath`
  * `limits`

---

## ▶️ How to Run the Program

### 1️⃣ Clone the Repository

```
git clone https://github.com/RohanRathodOnline/GuessingGame.git
```

### 2️⃣ Navigate to the Folder

```
cd GuessingGame
```

### 3️⃣ Compile the Program

```
g++ Guessing_Game.cpp -o game
```

### 4️⃣ Run the Program

```
./game
```

---

## 🎮 How the Game Works

1. The program generates a **random number between 1 and 100**.
2. The player enters guesses.
3. The program provides hints:

* **Too high** – Guess a smaller number
* **Too low** – Guess a bigger number
* **Close** – You are near the correct number
* **Very close** – Almost correct

4. The game continues until the correct number is guessed.
5. The total **number of attempts** is displayed.
6. The player can choose to **play again**.

---

## 🖥️ Example Output

```
=====================================
=       NUMBER GUESSING GAME        =
=====================================

I have generated a number between 1 and 100.
Try to guess it!

Enter your guess: 50
Too low! Try again.

Enter your guess: 75
Close! Try a smaller number.

Enter your guess: 63
Correct! You guessed it in 3 attempts.
```

---

## 📂 Project Structure

```
GuessingGame
│
├── Guessing_Game.cpp
└── README.md
```

---

## 📈 Future Improvements

* Add difficulty levels (Easy / Medium / Hard)
* Limit the number of attempts
* Add a scoring system
* Create a graphical version of the game

---

## 👨‍💻 Author

**Rohan Rathod**
