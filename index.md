## Welcom to GitHub Pages

You can use the [editor on GitHub](https://github.com/CaleGriggs/CaleGriggs.github.io/edit/gh-pages/index.md) to maintain and preview the content for your website in Mardown files.

Whenever you commit to this repository, GitHub Pages will run [Jekyll](https://jekyllrb.com/) to rebuild the pages in your site, from the content in you Markdown files.

### Markdown

Markdown is a lightweight and easy-to-use syntax for styling your writing. It includes conventions for

```markdown
Syntax highlighted code block

# Header 1
## Header 2
### Header 3

- Bulleted
- List

**Bold and _Italic_ and 'Code' text

[Link](url) and ![image](src)
```

For more details see [GitHub Flavored Markdown.](https://guides.github.com/features/mastering-markdown/)

## Jekyll Themes

Your Pages site will use the layout and styles from the Jekyll theme you have selected in you [repository settings.]() The name of this theme is saved in the Jekyll `_config.yml` configuration file.

## Support or contact

Having trouble with Pages? Check out our [documentation]() or [contact support]() and we'll help you sort it out.





## Farkle
'
	This artifact is called Farkel, it’s a dice rolling game in which one or more players try to score a predetermined number of points based on the dice that they roll. On their turn, each player will roll six dice. If they roll a one, five, three of a kind, or straight of five to six dice in a row, they earn points that add up to their total score. The project was first created for my final project of the IT 312 class that I took in August of 2020.
  	I chose this artifact because it demonstrates my ability to create a complex program from scratch. The program needs to account for multiple player objects so that it can store their names and keep track of their points. It needs to account for all the ways that players can earn and lose points. I feel this artifact dose a good job of demonstrating my abilities when it comes to solving logic problems in software by way of the calculations of the various ways for players to score points. I also think it demonstrates my ability to implement various skills and techniques for implementing design solutions and accomplishing goals related to the rules of the game.
    My plans for refining this artifact were to correct mistakes and errors with how the rules were followed by the program, to make the code more readable, and the expand the complexity of the program. To start, I made it so that if all the player’s dice become point dice, they can continue and roll all six dice again and continue to increase their score. ![image](src) Then, I fixed the rerolling mechanic, it used to incorrectly count the dice held from previous rolls along with the new roll, thereby allowing for cases where the dice would be falsely counted as three of a kind. It now keeps the score of held dice separated from the newly rolled dice. ![image](src) I also added functionality for earning points through straights of five or six numbers in a row, rolling dice numbered one through five, two through six, or one through six in a single roll now net the player extra points. ![image](src) I also fixed a problem that allowed players to reroll all of their dice without keeping at least one point die. I also added the option to quit the game via user input midway through the game, as well as the option to display the player’s score or the rules. ![image](src) To make the code more readable, I formatted the whole thing to follow the same convention, I aligned the comments and added more comments in areas that I felt needed them, and I removed a function that was only put in the program to fit the project’s original grading rubric.
    The biggest challenge that I faced while modifying the artifact was trying to figure out a good way of calculating the point dice after rerolling. I was trying to find a way to tell when all the dice became point dice so that I could get the player the opportunity to reroll all their dice. I eventually figured out a way to save the dice that the player wanted to keep while disposing and rerolling the rest. One other thing I thought of while working on this artifact was the idea of changing the dice to individual objects comprised of a face value variable and a reroll function, if I were to redo the project completely, I would probably explore that idea further to see if that could help with organizing the project. I also learned is that I tend to waste time trying to find the most efficient solution to a problem. I learned that it’s easier for me to worry less about the efficacy of the program and focus more on the functionality of the program to begin with. After I get everything working, then I can go back an improve the quality of the code and efficiency of the algorithms.

## Database
'	This artifact is an HTML interface that uses MongoDB and Python to display information from a  database in the form of a table that can be sorted through and updated by the user. The user can add new and remove existing entries to and from the database. This artifact was originally the final project of my CS 340 class created in February of 2021 but has been modified so that I can use it with a new database that I have full access to. 
	I chose this artifact because it showcases my ability to interface with a database using a program that I wrote. The program connects to a MongoDB database, displays the information clearly to the user, and allows the user to easily search through and manipulate the data. The enhancement allows the user to create new entries into the database, as well as delete data from the database. It also allows for easy sorting through the data from within the browser application.
  The objective I had planned for enhancing this project was to make a create a MongoDB interface that allows users to access and edit a database from their browser. I’m still working on getting the sorting functionality to work how I want it to, but otherwise, I think I’ve completed the goal that I set out to accomplish.
One of the biggest challenges that I faced while working on the enhancements was that the program relied on a database that I didn’t have access to anymore. To fix this, I had to download MongoDB and setup a local host and database and rewrite parts of the code to make everything it with the new database before I could make any improvements. Another issue I faced was that I couldn’t remember if I used Jupyter Lab or Jupyter Notebook. I guessed wrong and chose Lab to start and lost about an hour trying to find out why my program wasn’t working until I tried Notebook and it worked right away. One thing I learned is that it’s surprisingly easy to set up a database and server using MongoDB. I spent more time troubleshooting the Jupyter Lab vs Notebook issue than setting up the server.

