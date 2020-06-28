//============================================================================
// Name        : Project.cpp
// Author      : Nicholas Wood
//============================================================================

#include <iostream>
using namespace std;

int displayMenu(){ // this function display the menu and it returns the response by the user, this could've been added in main but I decided to make it its own.
	int user;
	cout << "**************************" << endl;
	cout << "* 1 - Add One Hour       *" << endl;
	cout << "* 2 - Add One Minute     *" << endl;
	cout << "* 3 - Add One Second     *" << endl;
	cout << "* 4 - Exit Program       *" << endl;
	cout << "**************************" << endl;
	cin >> user;
	return user;
}
// displayTime is very large
void displayTime(int userHour, int userMinute, int userSecond){
	int hours = userHour;
	int minutes = userMinute;
	int seconds = userSecond;
//the following line of code for displayTime() goes through every scenario of hours and display them, I had an issue with adding a 0 infront of values less than 10,
//so I decided to add many if statements, in retrospect this is not the most efficient way, I should have used more set fill or set width functions but did not.
	if (hours < 10 && minutes < 10 && seconds <10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours << ":0" << minutes << ":0" << seconds << " A M       *     *        0" << hours << ":0" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours < 10 && minutes < 10 && seconds >=10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours << ":0" << minutes << ":" << seconds << " A M       *     *        0" << hours << ":0" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours < 10 && minutes >= 10 && seconds >=10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours << ":" << minutes << ":" << seconds << " A M       *     *        0" << hours << ":" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours < 10 && minutes >= 10 && seconds <10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours << ":" << minutes << ":0" << seconds << " A M       *     *        0" << hours << ":" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}

	if ((hours >= 10 && hours <12) && minutes < 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":0" << minutes << ":0" << seconds << " A M       *     *        " << hours << ":0" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours >= 10 && hours <12) && minutes < 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":0" << minutes << ":" << seconds << " A M       *     *        " << hours << ":0" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours >= 10 && hours <12) && minutes >= 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":" << minutes << ":" << seconds << " A M       *     *        " << hours << ":" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours >= 10 && hours <12) && minutes >= 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":" << minutes << ":0" << seconds << " A M       *     *        " << hours << ":" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours == 12 && minutes < 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":0" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours == 12 && minutes < 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":0" << minutes << ":" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours == 12 && minutes >= 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":" << minutes << ":" << seconds << " P M       *     *        " << hours << ":" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours == 12 && minutes >= 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours << ":" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours > 12 && hours < 22) && minutes < 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours-12 << ":0" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours > 12 && hours < 22) && minutes < 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours-12 << ":0" << minutes << ":" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours > 12 && hours < 22) && minutes >= 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours-12 << ":" << minutes << ":" << seconds << " P M       *     *        " << hours << ":" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if ((hours > 12 && hours < 22) && minutes >= 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     0" << hours-12 << ":" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours >= 22 && minutes < 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours-12 << ":0" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours >= 22 && minutes < 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours-12 << ":0" << minutes << ":" << seconds << " P M       *     *        " << hours << ":0" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours >= 22 && minutes >= 10 && seconds >= 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours-12 << ":" << minutes << ":" << seconds << " P M       *     *        " << hours << ":" << minutes << ":" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}
	if (hours >= 22 && minutes >= 10 && seconds < 10){
		cout << "**************************     **************************" << endl;
		cout << "*     12-Hour Clock      *     *     24-Hour Clock      *" << endl;
		cout << "*     " << hours-12 << ":" << minutes << ":0" << seconds << " P M       *     *        " << hours << ":" << minutes << ":0" << seconds << "        *" << endl;
		cout << "**************************     **************************" << endl;
	}

}

int addHour(int hour){ // this function allows the user to add 1 hour to the current value of hours and returns it, if hours >= 24 then the value becomes 0
	int hourTime = hour + 1;
	if (hourTime >= 24){
		hourTime = 0;
		return hourTime;
	}
	else{
		return hourTime;
	}
}

int addMinute (int minute){// this function allows the user to add 1 minute to the current value of minutes and returns it
	int minTime = minute + 1;
	return minTime;
}

int addSecond (int second){// this function allows the user to add 1 second to the current value of seconds and returns it
	int secTime = second + 1;
	return secTime;
}

int main() {// this runs the program, it takes user input and based on what they put it goes through a while loop

	int userInput;
	int hours = 0;
	int minutes = 0;
	int seconds = 0;

	userInput = displayMenu();
	while (userInput != 4){
		if (userInput == 1){//if 1 is pressed than an hour is added to the clock and it is displayed
			hours = addHour(hours);
			displayTime(hours, minutes, seconds);
		}
		else if(userInput == 2){//if a 2 is pressed than a minute is added to the clock and it is displayed, it also has an if statement that checks minutes and hours
			minutes = addMinute(minutes);
			if (minutes >= 60){
				hours = hours + 1;
				minutes = 0;
				if (hours >= 24){
					hours = 0;
				}
				displayTime(hours, minutes, seconds);
			}
			else{
				displayTime(hours, minutes, seconds);
			}
		}
		else if (userInput == 3){// this adds 1 second to the seconds and has if statments to check if the value exceeds the max for second, minutes, or hours
			seconds = addSecond(seconds);
			if (seconds >= 60){
				minutes = minutes + 1;
				seconds = 0;
				if (minutes >= 60){
					hours = hours + 1;
					minutes = 0;
					if (hours >= 24){
						hours = 0;
					}
				}
				displayTime(hours, minutes, seconds);
			}
			else {
			displayTime(hours, minutes, seconds);
			}
		}
		else if (userInput == 4){// this statement ends the program
					break;
		}
		else {
			cout << "Incorrect Input" << endl;// if the input is not 1-4 than it outputs a message
		}
		userInput = displayMenu(); // once complete with the desired function another input is required
}

	return 0;
}
