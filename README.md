# Game-Competition-Application
A C++ Physical Gaming Competition Application which takes the details about the peoples who participated and provide you the result 
The code provided is a C++ program that functions as a race time calculator for different types of races: Triathlon, Aquathlon, and Duathlon. It calculates and displays the total time taken for each race based on the input of swim, bike, and run times.

Here's a breakdown of the program:

Main Function:

It starts by prompting the user to select the type of race: Triathlon, Aquathlon, or Duathlon.
Based on the user's input, it calls the respective functions for input, calculation, and printing for the selected race type.
Race Types: Triathlon, Aquathlon, Duathlon:

Each race type has its set of functions for input, calculation, and printing results.

Input Functions:

These functions prompt the user to input swim, bike, and run times in hours, minutes, and seconds for the respective segments of the race.
Calculation Functions:

These functions perform calculations to convert the entered times into seconds and then determine the total race time in seconds.
Print Functions:

These functions display the race times in hours, minutes, and seconds format.
The calculations involve converting input times into total seconds and then converting these seconds into hours, minutes, and seconds format to display the overall race time.

The code uses arrays and pointers to manage and pass the time data and units.

It's important to note that there's an issue in the main() function where the user input for race selection (cin >> suggest) is compared with strings like "Triathlon," "Aquathlon," and "Duathlon," but the actual input prompt uses lower-case strings ("trithlon," "aquathlon," "duathlon"). This mismatch in the input check might lead to the selection not matching the expected strings.

The program design is modular, using functions for different tasks, making it organized and easy to understand. However, corrections in input string comparison and potential refinements in the time calculations could be made for improved accuracy.
