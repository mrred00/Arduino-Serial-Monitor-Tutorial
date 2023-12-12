# Arduino Serial Monitor Tutorial

# Support Me
<p><a href="https://www.buymeacoffee.com/mailharunts"> <img align="left" src="https://cdn.buymeacoffee.com/buttons/v2/default-yellow.png" height="50" width="210" alt="" /></a></p><br><br>


## Project 1: Serial Monitor Usage

[View Code](https://github.com/mrred00/Arduino-Serial-Monitor-Tutorial/blob/main/proje1/proje1.ino)

### Objective:

This simple Arduino project aims to display constant values on the screen at specific intervals through the serial monitor without requiring user input.

### Used Libraries:

1. **Arduino.h**: Library containing basic Arduino functions.
2. **Serial.h**: Library facilitating serial communication.

### Code:

```cpp
#include <Arduino.h>
#include <Serial.h>

// Define constant integer values
const int constantInteger1 = 10;
const int constantInteger2 = 20;
const int constantInteger3 = 30;

void setup() {
  Serial.begin(9600);
}

void loop() {
  // Print constant values to the screen
  Serial.print("Constant Integer 1: ");
  Serial.println(constantInteger1);
  Serial.print("Constant Integer 2: ");
  Serial.println(constantInteger2);
  Serial.print("Constant Integer 3: ");
  Serial.println(constantInteger3);

  // Update values with a 1-second delay
  delay(1000);
}
```

### Code Explanations:

1. **Including Libraries:**
    ```cpp
    #include <Arduino.h>
    #include <Serial.h>
    ```
    Two libraries are included. `Arduino.h` contains basic Arduino functions, while `Serial.h` facilitates serial communication.

2. **Defining Constant Values:**
    ```cpp
    const int constantInteger1 = 10;
    const int constantInteger2 = 20;
    const int constantInteger3 = 30;
    ```
    Three constant integer values are defined.

3. **Setup Function:**
    ```cpp
    void setup() {
      Serial.begin(9600);
    }
    ```
    - Serial communication is initiated with a baud rate of 9600.

4. **Loop Function:**
    ```cpp
    void loop() {
      Serial.print("Constant Integer 1: ");
      Serial.println(constantInteger1);
      Serial.print("Constant Integer 2: ");
      Serial.println(constantInteger2);
      Serial.print("Constant Integer 3: ");
      Serial.println(constantInteger3);

      // Update values with a 1-second delay
      delay(1000);
    }
    ```
    - Every second, constant integer values are printed to the serial monitor.

### Algorithm:

1. **Initialization:**
    - Basic libraries are included, and constant integer values are defined.

2. **Setup Function:**
    - Serial communication is initiated.
  
3. **Loop Function:**
    - Every second, constant integer values are printed to the serial monitor.
    - A `delay(1000)` function is used to wait for 1 second.

4. **Repeat:**
    - The loop function continuously runs, keeping the values up-to-date and displaying them on the serial monitor.

This project displays constant values on the screen without requiring user input. It is useful for understanding the basic features of Arduino and serial communication.

## Project 2: Interactive Input with Arduino Serial Monitor

[Download Code](https://github.com/mrred00/Arduino-Serial-Monitor-Tutorial/blob/main/Proje2/project2.ino)

### Objective:

The aim of this Arduino project is to allow the user to input three integer values via the serial monitor and display these values on the screen every second.

### Used Libraries:

1. **Arduino.h**: Library containing basic Arduino functions.
2. **Serial.h**: Library managing serial communication.

### Code:

```cpp
#include <Arduino.h>
#include <Serial.h>

int integer1, integer2, integer3;

void setup() {
  Serial.begin(9600);

  Serial.println("Please enter the first integer value: ");
  while(!Serial.available());
  integer1 = Serial.parseInt();
  Serial.println("Please enter the second integer value: ");
  while(!Serial.available());
  integer2 = Serial.parseInt();
  Serial.println("Please enter the third integer value: ");
  while(!Serial.available());
  integer3 = Serial.parseInt();
}

void loop() {
  Serial.print("Integer 1: ");
  Serial.println(integer1);
  Serial.print("Integer 2: ");
  Serial.println(integer2);
  Serial.print("Integer 3: ");
  Serial.println(integer3);

  delay(1000);
}
```

### Code Explanations:

1. **Including Libraries:**
    ```cpp
    #include <Arduino.h>
    #include <Serial.h>
    ```
    Two libraries are included. `Arduino.h` contains basic Arduino functions, while `Serial.h` facilitates serial communication.

2. **Defining Global Variables:**
    ```cpp
    int integer1, integer2, integer3;
    ```
    Three integer variables are defined.

3. **Setup Function:**
    ```cpp
    void setup() {
      Serial.begin(9600);
    
      Serial.println("Please enter the first integer value: ");
      while(!Serial.available());
      integer1 = Serial.parseInt();
      Serial.println("Please enter the second integer value: ");
      while(!Serial.available());
      integer2 = Serial.parseInt();
      Serial.println("Please enter the third integer value: ");
      while(!Serial.available());
      integer3 = Serial.parseInt();
    }
    ```
    - `Serial.begin(9600);`: Serial communication is initiated with a baud rate of 9600.
    - The user is prompted to enter three integer values.

4. **Loop Function:**
    ```cpp
    void loop() {
      Serial.print("Integer 1: ");
      Serial.println(integer1);
      Serial.print("Integer 2: ");
      Serial.println(integer2);
      Serial.print("Integer 3: ");
      Serial.println(integer3);
    
      delay(1000);
    }
    ```
    - Every second, the user-inputted integer values are printed to the serial monitor.

### Algorithm:

1. **Initialization:**
    - Basic libraries are included, and global variables are defined.

2. **Setup Function:**
    - Serial communication is initiated.
    - The user is prompted to enter three integer values.

3. **Loop Function:**
    - Every second, the user-inputted integer values are printed to the serial monitor.
    - A `delay(1000)` function is used to wait for 1 second.

4. **Repeat:**
    - The loop function continuously runs, keeping the user-inputted values up-to-date and displaying them on the serial monitor.

This project involves taking input from the user and then displaying these values on the screen. Communication with the user is established via the serial monitor, and the entered values are continuously updated and displayed. This simple project is a good starting point for understanding Arduino's basic features and serial communication.
