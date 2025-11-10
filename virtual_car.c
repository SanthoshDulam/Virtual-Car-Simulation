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
