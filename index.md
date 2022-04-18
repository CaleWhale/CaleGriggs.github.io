# CS 499 Cale Griggs

## Self Assessment

When I first started in the computer science program, I knew essentially nothing about programming. I had tried to learn a few times before, but I lacked the structure that comes from school. I also knew that having a degree on my resume would be much better for job applications than a high school diploma, so I applied for SNHU.

My first programming class CS 200 taught me how to write code in Python. I learned the basics of variables, datatypes, arrays, if else statements, various types of loops, and more. This was the class where programming first started to click in my brain and gave me a foothold on the path to understanding how programming works.

IT 312 is the class where I got one of my artifacts from and is what I attribute to being the most impactful class that I took in terms of learning how to write a complete program. This class taught me about taking all the basics I learned in CS 200 and turning that knowledge into a fully functional, standalone program.

Later, I took CS 260, a data structures and algorithms class that taught me about things like linked lists, trees, and hash tables. I learned about many different ways of parsing and sorting through data. Data structures and algorithms are a key part of programming as they provide both structure to the flow of data as well as efficiency to the overall program.

CS 310 is where I learned about git, version control, and collaboration on a group project. In this class I learned about reviewing other people’s code as well as correcting merge conflicts. This class taught me the importance of proper version control and commit protocol and how messy a big team project can get without them.

Another class I had was DAD 220 which taught me about servers and databases and how to directly interface with them using SQL. I later took CS 340 where I learned about interfacing with databases programmatically using Python. Databases are a big part of web applications and these classes taught me how to securely implement ways of communicating with them into a program.

I chose to use the Farkle game from IT 312 for both the software engineering/design and the algorithms/data structures artifact. And the CS 340 final project for the basics of my databases project. I chose these artifacts because I felt they were the best candidates for representing my computer science talents for each of the required categories.

## [Farkle](https://github.com/CaleGriggs/CaleGriggs.github.io/tree/gh-pages/Farkle)

![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/Farkel%20Welcome.png)

   This artifact is a dice rolling game called Farkle. It's a game in which one or more players try to score a predetermined number of points based on the dice that they roll. On their turn, each player will roll six dice. If they roll a one, five, three of a kind, or straight of five to six dice in a row, they earn points that add up to their total score. The project was first created for my final project of the IT 312 class that I took in August of 2020.
   
![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/Farkle%20Setup.png)
   
   I chose to use this artifact for both the software engineering/design and the algorithms/data structures categories. I feel that this artifact demonstrates my ability to create a complex program from scratch as it needs to account for multiple player objects so that it can store their names and keep track of their points. It needs to account for all the ways that players can earn and lose points. I feel this artifact dose a good job of demonstrating my abilities when it comes to solving logic problems in software by way of the calculations of the various ways for players to score points. I also think it demonstrates my ability to implement various skills and techniques for implementing design solutions and accomplishing goals related to the rules of the game.
   
   My plans for refining this artifact were to correct mistakes and errors with how the rules were followed by the program, to make the code more readable, and the expand the complexity of the program. To start, I made it so that if all the player’s dice become point dice, they can continue and roll all six dice again and continue to increase their score. 
   
   ![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/Farkle%20all%20dice.png) 
   
   Then, I fixed the rerolling mechanic, it used to incorrectly count the dice held from previous rolls along with the new roll, thereby allowing for cases where the dice would be falsely counted as three of a kind. It now keeps the score of held dice separated from the newly rolled dice. I also added functionality for earning points through straights of five or six numbers in a row, rolling dice numbered one through five, two through six, or one through six in a single roll now net the player extra points.
   
![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/Farkle%20straight.png) 
   
I also fixed a problem that allowed players to reroll all of their dice without keeping at least one point die. I also added the option to quit the game via user input midway through the game, as well as the option to display the player’s score or the rules. ![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/Farkle%20Rules.png) 

To make the code more readable, I formatted the whole thing to follow the same convention, I aligned the comments and added more comments in areas that I felt needed them, and I removed a function that was only put in the program to fit the project’s original grading rubric.
   
   The biggest challenge that I faced while modifying the artifact was trying to figure out a good way of calculating the point dice after rerolling. I was trying to find a way to tell when all the dice became point dice so that I could get the player the opportunity to reroll all their dice. I eventually figured out a way to save the dice that the player wanted to keep while disposing and rerolling the rest. One other thing I thought of while working on this artifact was the idea of changing the dice to individual objects comprised of a face value variable and a reroll function, if I were to redo the project completely, I would probably explore that idea further to see if that could help with organizing the project. I also learned is that I tend to waste time trying to find the most efficient solution to a problem. I learned that it’s easier for me to worry less about the efficacy of the program and focus more on the functionality of the program to begin with. After I get everything working, then I can go back an improve the quality of the code and efficiency of the algorithms.

## [Database](https://github.com/CaleGriggs/CaleGriggs.github.io/tree/gh-pages/DatabaseProject)

![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/default%20table.png)

   This artifact is an HTML interface that uses MongoDB and Python to display information from a  database in the form of a table that can be sorted through and updated by the user. The user can add new and remove existing entries to and from the database. This artifact was originally the final project of my CS 340 class created in February of 2021 but has been modified so that I can use it with a new database that I have full access to. 
   
   ![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/New%20Car1.png)
   
   ![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/New%20Car2.png)
   
   I chose this artifact because it showcases my ability to interface with a database using a program that I wrote. The program connects to a MongoDB database, displays the information clearly to the user, and allows the user to easily search through and manipulate the data. The enhancement allows the user to create new entries into the database, as well as delete data from the database. It also allows for easy sorting through the data from within the browser application.
   
   ![image](https://raw.githubusercontent.com/CaleGriggs/CaleGriggs.github.io/gh-pages/Pics/filtered.png)

   The objective I had planned for enhancing this project was to make a create a MongoDB interface that allows users to access and edit a database from their browser. I’m still working on getting the sorting functionality to work how I want it to, but otherwise, I think I’ve completed the goal that I set out to accomplish.
One of the biggest challenges that I faced while working on the enhancements was that the program relied on a database that I didn’t have access to anymore. To fix this, I had to download MongoDB and setup a local host and database and rewrite parts of the code to make everything it with the new database before I could make any improvements. Another issue I faced was that I couldn’t remember if I used Jupyter Lab or Jupyter Notebook. I guessed wrong and chose Lab to start and lost about an hour trying to find out why my program wasn’t working until I tried Notebook and it worked right away. One thing I learned is that it’s surprisingly easy to set up a database and server using MongoDB. I spent more time troubleshooting the Jupyter Lab vs Notebook issue than setting up the server.

## Code Review:


