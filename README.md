# CS-210-Operating-Platforms

1. Summarizing the project:
In this project we were tasked with creating two clocks that show both a standard 12-hour time with AM and PM and a 24-hour clock. The clocks were also given inputs so the user can change the time and it should accurately reflect on both clocks.

2. What was particularly well:
I believe I worked very hard on the display for the user input. I would make sure that what the user is viewing was more than just numbers, it has borders as well as labels, so it makes it very understandable. I believe the actual code as well was written as condensed as possible, there were many sections where I was unable to condense the code, but I believe I did very well.

3.  How could the code be enhanced:
The most difficult section for me was the printing on the times with the correct formats. When the time had to be output there were multiple print statements for each block of time, this makes the code very cluttered and in the future I would definitely change the output to the user, I believe there is a more efficient way to print the time without multiple statements.

4. Any piece of code challenging:
When creating the output for the user I would have an integer that is supposed to represent hours, minutes, or seconds. When the values were 0-9 the output needed to have a 0 in front of the integer, this was extremely challenging because there was no easy way to add a 0 in front of an integer. Rounding typically only affects the decimal location and if I said 2 it would output #.#. So, I had to write multiple print statements that would add a 0 in front of an integer that was 0-9 for each part of the time. Using a large amount of if statements along with a good amount of copy and paste allowed me to quickly create the correct output for every time possible.

5. Skills from this project that are transferrable to other projects: 
The skill that I learned and that I was continuously using throughout this coursework is a set and fill code that changes the fill type and the amount of fill when printing out statements. Using setw(#) or setf(‘ ’) allowed me to align the outputs so they appeared in columns as well as allowed me to put asterisks or any other fill type so the lines appeared to have a display around them. I used this tool throughout the coursework, and I wished I would’ve learned it early in other courses.

 6. How did it become maintainable, readable, and adaptable:
When creating the program, I wanted to make sure that it was easily readable, so I added many comments in the code, so the user can understand what each section did. I also made sure that the main was not to cluttered, I wanted the main to a simple guide and many of the other programs would execute steps if they were selected. This made it very easy to maintain as most of the code was separated into different programs, this also made it easy to adapt. If I wanted to change how much time would be added every time it is selected, then I would be able to simple do that in a different program without affecting the main too much. Many of the programs were able to send a value and then return a value so updating the time makes it very simple. 
