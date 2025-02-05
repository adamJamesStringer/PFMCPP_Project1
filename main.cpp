#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform.
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

    pig
    razor
    fridge
    traffic light
    calculator
    breadmaker
    kettle
    oven
    aeroplane
    bully
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun: pig
//  action 1: the pig oinks
pig.oink();
//  action 2: the pig squeels
pig.squeel();
//  action 3: the pig creates a communist dictatorship
pig.creatCommunistDictatorship();

//  2)
//  Noun: razor
//  action 1: the razor shaves someones's armpits
razor.shaveArmpits();
//  action 2: the razor shaves someone's beard
razor.shaveBeard();
//  action 3: the razor shaves someone's legs
razor.shaveLegs();

//  3)
//  Noun: fridge
//  action 1:the fridge refridgerates
fridge.refridgerate();
//  action 2:the fridge light turns on when opened
fridge.turnOnLight();
//  action 3:the fridge displays an overheating warning
fridge.overheatWarning();

//  4)
//  Noun: trafficLight
//  action 1: traffic light displays green 
trafficLight.displayGreen();
//  action 2: traffic light displays red
trafficLight.displayRed();
//  action 3: traffic light displays amber
trafficLight.showAmber();

//  5)
//  Noun: calculator
//  action 1: calculator adds
calculator.add();
//  action 2:calculator subtracts
calculator.subtract();
//  action 3: calculator multiplies
calculator.multiply();

//  6)
//  Noun: breakmaker
//  action 1: breakmaker stirs mixture
breadmaker.stirMixture();
//  action 2: breadmaker heats up
breadmaker.heatUp();
//  action 3: breadmaker automatically turns off
breadmaker.autoTurnOff();

//  7)
//  Noun: kettle
//  action 1: kettle starts boils
kettle.startBoiling();
//  action 2: kettle stops boiling 
kettle.stopBoiling();
//  action 3: kettle displays LED when on
kettle.displayLed();

//  8)
//  Noun: toothPick
//  action 1: toothpick picks teeth
toothPick.pickTeeth();
//  action 2: toothpick picks nails
toothPick.pickNails();
//  action 3: toothpick scratches back
toothPick.scratchBack();

//  9)
//  Noun: aeroplane
//  action 1: aeroplane turns engines on 
aeroplane.enginesOn();
//  action 2: aeroplane takes breaks off
aeroplane.breaksOff();
//  action 3: aeroplane sends data to airport
aeroplane.transmitData();

//  10)
//  Noun: bully
//  action 1: bully hits people
bully.punch();
//  action 2: bully makes fun of people
bully.makeFun();
//  action 3: bully kicks people
bully.kick();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
