# 🚗 Virtual Car Simulation System using C

## 📘 Overview

The **Virtual Car Project** is a **C-based simulation system** that mimics real car functionalities such as **ignition, acceleration, braking, gear shifting, and turning** — all through console input and microcontroller logic simulation.
It provides an **educational model** for understanding embedded system design, state transitions, and real-world automation using simple control logic.

---

## 🎯 Objective

To design a **virtual car system** using **C programming** that can:

* Perform all car operations virtually
* Display system responses like ignition, movement, gear changes, and direction
* Demonstrate **state machine logic** similar to embedded automotive systems

---

## 🧠 Key Concepts Used

* Conditional and looping constructs in C
* State transition modeling
* Modular programming for each function (start, accelerate, brake, turn)
* Real-time event simulation using delay and switch cases

---

## ⚙️ Implementation

### 🧩 System Flowchart

```
START → IGNITION ON → SELECT GEAR → ACCELERATE → TURN / BRAKE → STOP
```

### 🔹 Features Simulated

| Operation        | Description                        |
| ---------------- | ---------------------------------- |
| **Ignition**     | Starts the virtual car             |
| **Acceleration** | Increases car speed                |
| **Brake**        | Reduces car speed or stops vehicle |
| **Gear Control** | Allows gear shifts from 1–5        |
| **Turning**      | Simulates left and right turns     |
| **Horn**         | Displays alert                     |
| **Stop**         | Ends simulation                    |

---

## 💻 Source Code: `virtual_car.c`

```c
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int ignition = 0, gear = 0, speed = 0;

void startCar() {
    if (ignition == 0) {
        ignition = 1;
        printf("\n🚗 Ignition ON. Car started successfully!\n");
    } else {
        printf("\n⚠️ Car already running!\n");
    }
}

void stopCar() {
    if (ignition == 1) {
        ignition = 0;
        speed = 0;
        gear = 0;
        printf("\n🛑 Car stopped. Ignition OFF.\n");
    } else {
        printf("\nCar is already stopped.\n");
    }
}

void accelerate() {
    if (ignition == 1 && gear > 0) {
        speed += 10;
        printf("\n⚡ Accelerating... Current speed: %d km/h\n", speed);
    } else {
        printf("\nShift to gear and start the car first!\n");
    }
}

void brake() {
    if (speed > 0) {
        speed -= 10;
        printf("\n🧱 Braking... Current speed: %d km/h\n", speed);
        if (speed == 0) printf("Car is now stopped.\n");
    } else {
        printf("\nCar is not moving.\n");
    }
}

void changeGear(int g) {
    if (ignition == 1) {
        gear = g;
        printf("\n⚙️ Gear changed to: %d\n", gear);
    } else {
        printf("\nStart the car first!\n");
    }
}

void turnLeft() {
    if (ignition == 1) printf("\n⬅️ Turning Left...\n");
    else printf("\nCar is off.\n");
}

void turnRight() {
    if (ignition == 1) printf("\n➡️ Turning Right...\n");
    else printf("\nCar is off.\n");
}

void horn() {
    if (ignition == 1) printf("\n📢 Honk! Honk!\n");
    else printf("\nCar is off.\n");
}

int main() {
    int choice;
    while (1) {
        printf("\n\n==== 🚘 VIRTUAL CAR MENU ====\n");
        printf("1. Start Car\n2. Stop Car\n3. Accelerate\n4. Brake\n5. Change Gear\n6. Turn Left\n7. Turn Right\n8. Horn\n9. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: startCar(); break;
            case 2: stopCar(); break;
            case 3: accelerate(); break;
            case 4: brake(); break;
            case 5: {
                int g;
                printf("Enter gear (1-5): ");
                scanf("%d", &g);
                changeGear(g);
                break;
            }
            case 6: turnLeft(); break;
            case 7: turnRight(); break;
            case 8: horn(); break;
            case 9: 
                printf("\nExiting simulation...\n");
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
```

---

## 🧩 Output Simulation

**Example Run:**

```
==== VIRTUAL CAR MENU ====
1. Start Car
2. Stop Car
3. Accelerate
4. Brake
5. Change Gear
6. Turn Left
7. Turn Right
8. Horn
9. Exit

Enter choice: 1
🚗 Ignition ON. Car started successfully!

Enter choice: 5
Enter gear (1-5): 2
⚙️ Gear changed to: 2

Enter choice: 3
⚡ Accelerating... Current speed: 10 km/h
```

---

## 📊 Results

| Operation        | Result                       |
| ---------------- | ---------------------------- |
| Start & Stop     | Works perfectly              |
| Gear Control     | Shifts between 1–5           |
| Speed Simulation | Accurate increment/decrement |
| Turn Control     | Left/Right works             |
| Horn             | Display output verified      |

✅ The simulation successfully imitates **real car behavior** with simple embedded-state logic.

---

## 🧠 Applications

* Embedded system simulation practice
* Automotive logic testing for beginners
* Demonstrating FSM (Finite State Machine) concepts
* Educational use in C programming labs

---

## 🪪 License

Open-source under the **MIT License**

---

## 👨‍💻 Author

**Santhosh Dulam**
📍 Coimbatore, India
🎓 B.Tech – Electronics & Communication Engineering
📧 [santhosh.dulam45@gmail.com](mailto:santhosh.dulam45@gmail.com)
🔗 [LinkedIn](https://linkedin.com/in/santhosh-dulam-94b8b9242)

---

