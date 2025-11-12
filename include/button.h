//
// Created by Abid Rey Magsambol on 11/12/25.
//

#ifndef PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H
#define PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H

class Button {
protected:
    char name; //limited RAM in pro micro as compared to computer CPU
    bool isPressed = false;
public:
    Button(const char name) : name(name) {}; //constructor for each button & its commands
    void buttonFunction() const;
    virtual bool checkIfIsPressed(); //if pressed, set to true
    ~Button() {};
    char getName() const;
    bool getIsPressed() const;
};

class Trigger : public Button {
private:
    double pressureValue = 0.0;
public:
    Trigger(char name) : Button(name) {};
    virtual bool checkIfIsPressed() override; //extra code to take into account of trigger pressure
    virtual ~Trigger();
    double getPressure() const;
};
#endif //PROJECT_CTRL_GAMING_CONTROLLER_BUTTON_H