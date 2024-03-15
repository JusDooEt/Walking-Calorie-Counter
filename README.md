# Walking Calorie Counter
## About
This application will calculate the amount of calories burned during a walking session. The user will input their weight, walking speed (km/hr), and time spent walking (hrs). The user will also be able to select a different hill grade from -5% to +5%. The default grade will be set to 0 or level ground. The calories burned will be calculated each time a value controlled by the user is changed.



## Current Build
![giphy](https://github.com/JusDooEt/Walking-Calorie-Counter/assets/152052216/fa750d66-b293-4e70-bb87-4e0ab3b4576e)


## Objects
### Person
This object is defined in the file, person.h. All methods defined in the person class have definitions in the file person.cpp. This object is mainly used to make the code more readable and easier to edit or improve. As of the current build the person object only tracks the weight (kg) input by the user. It has one method that will return the weight stored in the object.

### Calorie Formula
The calorie formula class definition can be found in caloryformula.h and all methods within the class are defined in caloryformula.cpp (Forgive the spelling error). This class is meant to help structure the formula used to calculate the amount of calories burned. This class consists of 4 double type variable members that store the constants used in the formula back in widget.cpp. This class has four accessor functions to access the variable members representing the constants and one mutator function that changes the constant’s values depending on the grade of the slope set by the user. The mutator function will receive the index of the slope combo box and use it in a switch statement to determine the correct values to store in the constant variable members according to the hill grade. In the file widgets.cpp, a signal will activate a slot function calling the mutator function to change the formula constants when a new option from the slope combo box is chosen.
