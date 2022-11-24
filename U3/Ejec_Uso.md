# <div align="center"> **CAT´S GAME**

## ***Execution***
Below are the code execution instructions:

1. Start **execution** of the code.

2. The code asks for the **player names** and ***saves*** them after being entered.

3. The player **selects the mark** to be displayed on the game board, represented by a **character** such as ***"X"*** or ***"O"***, depending on what you entered.

4. The user (or player) enter a numerical value that indicates the space or square that belongs to him on the game board, which will be occupied with the corresponding mark.

5. The code again asks the user for the square (or play) to place it on the board, but this time it is the other player's turn, and so on, alternating the participants, until all the spaces are filled.

6. When all the boxes have been filled in by the participants, the program determines the ***winner*** of the game, and if there was not, it will declare that there was a tie.

## **Use**

This program includes various functions that they make use of, which are the following:

- ***SetMarker()***, is the number of the square that will be occupied by the mark, to put it on the game board.

- ***winner()***, to determine the winner of the game among the participants.

- ***createBoard()***, the game board that will be drawn by the program, representing the game.

- ***game()***, the game of the move that the users will make.

- ***swap_player_and_marker()**, swaps the player and the player after the game, to indicate and give the user his turn when it's time.
<br><br>

### **Game variables**
These variables that were used in the program were created, those that are global and those that are not, and are the following:

* ***current_marker***, is the mark or symbol to be placed and displayed on the board, depending on what the user has chosen and entered.

* ***player***, to give the corresponding player a turn.

* ***player1***, one of the participants.

* ***player2***, another of the participants.

* ***board***, the game board, defined as an array.

* ***row***, the rows that represent and divide the game board.

* ***col***, the columns that represent and divide the game board.

* ***i***, locate the marks on the board.

* ***marker_player***, is the game symbol on the board that identifies the player on it.

* ***slot***, the space on the game board to be occupied.

* ***player_winner***, player who is the winner of the game.