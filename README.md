# Word-Search-Puzzle-Game
Take a look at my console-based Word Search Puzzle Game, developed in C++ with varying difficulty levels and a dynamic scoring system! 🔍

## Table of Contents
1. [Introduction](#introduction)
2. [Project Overview](#project-overview)
3. [Live Preview](#live-preview)
4. [Features](#features)
5. [Installation](#installation)
6. [Game Instructions](#game-instructions)
7. [File Structure](#file-structure)
8. [Technologies Used](#technologies-used)
9. [Code Explanation](#code-explanation)
10. [Future Improvements](#future-improvements)
11. [Conclusion](#conclusion)

## Introduction
The *Word Search Puzzle Game* is a console-based application developed in C++. It allows players to search for words hidden in a grid of letters. Players can choose from three difficulty levels: Easy, Intermediate, and Hard. The game tracks player scores and maintains a leaderboard of the highest scores.

## Project Overview
The game is designed to be engaging and educational, promoting vocabulary skills and problem-solving abilities. Players can input their names, select difficulty levels, and attempt to find words from a predefined list. The game also features a scoring system based on the player's performance.

## Live Preview

To help visualize the game in action, we have provided two screen recordings:

- [ScreenRecordingPart1](ScreenRecordingPart1)  
  Overview of the game initialization, level selection, and board display.

- [ScreenRecordingPart2](ScreenRecordingPart2)  
  Demonstration of the word search logic, life and scoring system, and high score management.

Feel free to check out these videos to get a better understanding of the game's functionality and user experience.
> **Note:** The quality of these screen recordings has been reduced to comply with GitHub's 25MB file size limit.

## Features
- *Three Difficulty Levels*: Easy, Intermediate, and Hard.
- *Dynamic Word Search*: Players can search for words in various orientations (horizontal, vertical, diagonal).
- *Score Tracking*: Scores are recorded in a [score.txt](score.txt) file.
- *Leaderboard*: The top 5 highest scores are stored in a [highestscore.txt](highestscore.txt) file.
- *Custom Word Lists*: Each difficulty level has its own set of words and boards.
- *Life System*: Players start with 3 lives, and they lose a life for every incorrect word guess. Once all lives are lost, the game ends.

## Installation
To run the **Word Search Puzzle Game**, ensure you have a C++ compiler installed (like `Dev-C++`) and follow these steps:

1. **Download the Source Code**: Obtain the source code files from the repository.
   
2. **Create Required Files**: Ensure the following files are created in the same directory as the executable:
   - [easyboard.txt](easyboard.txt)
   - [mediumboard.txt](mediumboard.txt)
   - [hardboard.txt](hardboard.txt)
   - [easydictionary.txt](easydictionary.txt)
   - [mediumdictionary.txt](mediumdictionary.txt)
   - [harddictionary.txt](harddictionary.txt)
   - [score.txt](score.txt) (initially empty)
   - [highestscore.txt](highestscore.txt) (initially empty)

3. **Compile the Code**: Open your terminal or command prompt, navigate to the directory containing the source code, and use the following command:

   ```bash
   g++ -o word_search_game Finalform.cpp
   
4. **Run the Game:** Execute the compiled program using:

   ```bash
   ./word_search_game

### Alternative: Play Directly

If you prefer not to compile the code yourself, you can directly play the game using the provided executable file:

- **Finalform.exe**: Run this application to play the game without needing to compile the source code. Ensure that all the required files (listed above) are in the same directory as [Finalform.exe](Finalform.exe).

## Game Instructions

1. **Start the Game**: Upon launching, players are greeted with a welcome message and presented with options:
   - Press `n` for a new game.
   - Press `h` to view high scores.
   - Press `e` to exit the game.

2. **Enter Your Name**: After selecting the new game option (`n`), you will be prompted to enter your name. The game will greet you and wish you luck!

3. **Select Difficulty Level**: Players can choose from three difficulty levels:
   - **Easy**: Words are placed in a single row or column.
   - **Intermediate**: Words can be placed in any direction, including backward.
   - **Hard**: Words can be placed diagonally, in any direction.

4. **Lives**: Players start the game with 3 lives. For each incorrect guess, one life is lost. Once all lives are lost, the game ends, and the player’s final score is recorded.

5. **View the Board**: Once a difficulty level is selected, the game will display a grid of letters and a word bank containing the words you need to find.

6. **Enter a Word**: The player is prompted to enter the word they are searching for. Make sure the first letter of the word is capitalized. Then, the player must enter the starting and ending coordinates (row and column) of where they believe the word is located.

7. **Scoring**: For each correct guess, you earn points based on your remaining lives. The score is displayed at the end of each round.

8. **Winning the Game**: If you successfully find all the words, the game congratulates you, and you can choose to either continue (`c`) or exit (`e`).

9. **View High Scores**: Players can view the top 5 high scores by pressing `h` at the main menu. High scores are stored in [highestscore.txt](highestscore.txt).

10. **Exit**: Players can exit the game at any time by pressing `e`.

## File Structure

Here's a quick overview of the project files:

- [Finalform.cpp](Finalform.cpp)  
  Main game source code.

- [easyboard.txt](easyboard.txt)  
  Game board for Easy level.

- [mediumboard.txt](mediumboard.txt)  
  Game board for Intermediate level.

- [hardboard.txt](hardboard.txt)  
  Game board for Hard level.

- [easydictionary.txt](easydictionary.txt)
  Word list for Easy level.

- [mediumdictionary.txt](mediumdictionary.txt)  
  Word list for Intermediate level.

- [harddictionary.txt](harddictionary.txt)  
  Word list for Hard level.

- [score.txt](score.txt)  
  Stores player names and scores.

- [highestscore.txt](highestscore.txt)  
  Stores top 5 highest scores.

## Technologies Used

 - **Compilers:** Dev-C++, VisualStudio

 - **Languages:** C++

  ## Code Explanation

The main components of the code include:

- **Game Initialization:**  
  The game starts by displaying a welcome message and presenting the main menu.

- **Level Selection:**  
  Players can choose their desired difficulty level, which determines the board and word list used.

- **Board Display:**  
  The game reads from the respective board file and displays it to the player.

- **Word Search Logic:**  
  Players input their guesses, and the game checks if the guessed coordinates correspond to a valid word in the dictionary.

- **Life and Scoring System:**  
  Players begin with 3 lives and lose one life with each incorrect guess. The score is calculated based on performance and is stored in [score.txt](score.txt).

- **High Score Management:**  
  The game reads from [score.txt](score.txt) to update the leaderboard in [highestscore.txt](highestscore.txt).

## Future Improvements

- **User Interface:**  
  Enhance the user interface with a graphical representation of the game.

- **Multiplayer Mode:**  
  Introduce a multiplayer mode where players can compete against each other.

- **More Levels:**  
  Add additional difficulty levels and more complex word arrangements.

- **Mobile Version:**  
  Develop a mobile version of the game for broader accessibility.

## Conclusion

The Word Search Puzzle Game is a fun and interactive way to enhance vocabulary skills while providing a competitive edge through scoring and leaderboards. With its engaging gameplay and structured file management, it serves as an excellent project for both educational purposes and entertainment. Enjoy the game and happy word searching
