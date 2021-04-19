### Self-Assessment

### [Code Review]()

### [Farkle](https://github.com/CaleGriggs/CaleGriggs.github.io/tree/gh-pages/Farkle)

```
void Game::RunGame() {
	srand((unsigned int)time(0));				// Seed for random number generation
	bool gameOver = false;
	int numPlayers = 0, winningScore = 10000, endGame = -1;
	unsigned int  turn = 0;

	cout << "=============================================\n============= Welcome to Farkle =============\n=============================================\n";
	cout << "\n\nHow many players?" << endl << endl;
	cin >> numPlayers;
 
 
 .......
```
This artifact is a game of Farkel, a dice rolling game where one or more players attempt to score a certain number of points. Each player takes turns rolling six, six-sided dice seeking either ones, fives, or three of a kind groups that add points to their score. The first player to reach the winning score wins. This artifact was originally created as the final project of my IT 312 class in August of 2020. 
 
The reason I chose this artifact is because I think it showcases my ability to create a complex, functioning program. The program has to account for multiple player objects to store names and points for each player. It also needs to account for each way the player can score points or fail to score points. The artifact, I feel, is a good demonstration of my ability to implement various skills and techniques to accomplish the goals dictated by the ruleset of the game. Furthermore, I think that by accurately calculating a dice game like Farkel, I have also demonstrated my ability to program solutions to solve logic problems. 

The objectives I had planned for enhancing this project was to simplify the structure of the code, make it more readable while also expanding the complexity of the artifact's functionality. To make the program more pleasant to use, I formatted the output to make it easier to read and added more messages to better explain what was happening in the game. I also added a custom score option if the player(s) want to change how long the game plays out for. To add more complexity to the program, I added some more opportunities for the players to earn points by checking for straights of dice (1-5, 2-6, or 1-6). I also added options to quit the game via user input midway through the game, as well as display the player’s scores and the rules midway through.

One of my biggest gripes with the program originally was that, because of the requirement for the project in the course, it had to have a certain number of methods within it. So, when I originally wrote the code, I had a reroll method that, due to the way I had set everything else up, needed to be a pair object that passed a vector and an integer both into and out of the method. With my enhancement, I got rid of the method completely, opting instead to hold all the relevant functionality within a while loop in the game method. Doing this made the everything far more readable and less complicated.

I fixed the scoring system to follow the rules more accurately. Before, the player wasn’t given the option to reroll  their dice if all six had become point dice. Also, as the player saved more dice, their score would update incorrectly. It’s supposed to score each roll separately, but it was functioning as if the dice they saved after each roll were calculated together as one, undeservedly giving the player bonuses for triplets of dice. Another problem was that the player could reroll all their dice, it didn’t check to make sure they were keeping at least one per roll. All these issues were fixed as part of my enhancements.

One of the biggest issues I came across was while I was attempting to fix the problems with calculating point dice after rerolling. I was struggling to figure out a way to determine when all dice had become point dice while also trying to accurately calculate the score for that roll. My problem stemmed from having the player choose which dice they want to reroll. I was essentially throwing out the numbers being input by the player. To fix the problem, I simply changed the prompt to ask the user which dice they would like to keep. This allowed me to save the old dice and score them accurately, then reroll the rest. One thing I learned is that I tend to get hung up on trying to find the most efficient solution to a problem and I end up wasting a lot of time. But I’ve found that if I just get the program to work, even if it’s not very elegant, I’ll usually be able to come back with a better solution later on.

### [Databases](https://github.com/CaleGriggs/CaleGriggs.github.io/tree/gh-pages/Database)


This artifact is a MongoDB interface that uses Python and HTML. It takes information from a database and displays it in a table format that the user can sort through by a couple of dropdown menus. The user is also able to add an entry to the database through the interface. This artifact was originally created as the final project of my CS 340 class in February of 2021. 

The reason I chose this artifact is because I think it showcases my ability to create a program that correctly interfaces with a database. The program connects to a MongoDB database, retrieves the desired information, displays the information clearly to the user, and allows the user to easily search through and manipulate the data. The enhancement allowed for the creation of new entries into the database, as well as sorting through the data within the browser application. The objective I had planned for enhancing this project was to make a create a MongoDB interface that allows users to access and edit a database from their browser.

The biggest challenge that I faced while working on this artifact was that it relied on a database that I no longer have access to. Which meant that I had to download MongoDB and setup a local host with a new database and reconfigure the artifact to make everything work with the new database before I could even think about making improvements. Along the way, I learned that It’s surprisingly easy to get a database server setup with MongoDB. I also learned that I don’t like developing web applications, they seem to be more persnickety than non-web-based applications.
