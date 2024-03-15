# Walking Calorie Counter
## About
This application will calculate the amount of calories burned during a walking session. The user will input their weight, walking speed (km/hr), and time spent walking (hrs). The user will also be able to select a different hill grade from -5% to +5%. The default grade will be set to 0 or level ground. The calories burned will be calculated each time a value controlled by the user is changed.



## Current Build
![giphy](https://github.com/JusDooEt/Walking-Calorie-Counter/assets/152052216/fa750d66-b293-4e70-bb87-4e0ab3b4576e)


## Objects
### Person
This object is defined in the file, person.h. All methods defined in the person class have definitions in the file person.cpp. This object is mainly used to make the code more readable and easier to edit or improve. As of the current build the person object only tracks the weight (Kg) input by the user. It has one method that will return the weight stored in the object.

### Calorie Formula
The calorie formula class definition can be found in caloryformula.h and all methods within the class are defined in caloryformula.cpp (Forgive the spelling error). This class is meant to help structure the formula used to calculate the amount of calories burned. This class consisted of 4 double type variable members that store the constants used in the formula back in widget.cpp. This class has four accessor functions to access the members representing the constants and has one mutator function that changes the constant’s values depending on the slope grade set by the user. The mutator will receive the index of the slope combo box and will use the index in a switch statement to store the correct values into the constant members according to the hill grade. In the file widgets.cpp, a signal will activate a slot calling for the function to change the formula constants when a new option from the combo box is chosen.
