# Robot-Arm
### By Asha and Harrison
## Table of Contents
* [Planning](#Planning)
   * [Description](#Description)
   * [Criteria and Constraints](#Criteria-and-Constraints)
   * [Materials and Costs](#Materials-and-Cost)
   * [Scope](#Scope)
   * [Schedule](#Schedule)
## Planning
### Description
Our goal is to make a robot arm that can write/draw. we will do this using a SCARA arm. The gif below is an example of what we would want our arm to do. Our robot arm will use 3 servos. 2 of them will be to move it in the x and y directions and the third wil move it up and down to be able to take the pencil/pen off the paper. We will most likely use a button to make it start writing.

### Stated Problem:
Make a Scara Arm write "Hello"

### Possible Solutions
* Scara arm reader
* X - Y coordinate array?
* talk to max ( make a web app to send the info)
* just make it write hello only, using an array


### Solution picked, and why:
We talked to Max and he helped brainstorm ideas with us. He helped us fin the equations to convert coordinates into angles so we will you an array to pick the coordinates and map out the words and then have it write with that.

<img src="planning pics/planning3.jpg" width="600px"/>

This picture shows the equations we will use to be able to turn coordinates into angles for the servos


<img src="https://upload.wikimedia.org/wikipedia/commons/5/5b/SCARA_right.gif" width="300" height="300" />

This image shows almost exactly what we want our arm to do. the only difference is that ours will have a third servo to be able to pick the pecil up. 

<img src="planning pics/sketch1.png" width="600px"/>

this is a sketch of what the 3rd servo would look like and how it would pick the pencil up

<img src="planning pics/sketch2.png" width="600px"/>

this is a sketch of what the first 2 servos will look like and how they will be connected

### Criteria and Constraints
#### Criteria: 
- Write out the word "hello" using and array. if we have time we will do it using analog
- Be able to lift the pencil off the paper

#### Constraints:
- Time(We want to finish in February) 
- I don't know how to make the servos move together to go to the right locations yet, but I plan to learn how to do this through research and just trying it out
- I don't yet know how i am going to use a third servo to pick up the pencil/pen, but i will again research this to figure it out 

### Materials and Cost
- Servos 	($5.95)
- Arduino	($24.95)
- Model Material ($2.43)
- Support Material ($4.76)
- #4-40 Socket Head Screws ($0.02)
- Wire ($0.08)
- Resistors	($0.04)
- AA Battery Pack	($4.00)
- Button($1.00-3.00)
 
### Scope
This project will be difficult. the hard part will probably be the code because it willl be hard to get the servos to work together in order to make a vertical line. The design and solidworks part will also be difficult to be able to connect the servos together. We think that getting all the angles or coordinates perfect will be the hardest part because to do this we will have to have the servos work together perfectly. Asha will work on the solidrowks part and harrison will work on the code and angles problem. 

### Schedule
| Date          | Asha          | Harrison      |
| ------------- |:-------------:|:-------------:|
| December 6    | begin schedule | gather info and make a sketch     |
| December 13   | complete schedule/plan and begin Solidworks  |complete plan and start coding  |
| December 20   | begin Solidowrks | begin coding and figure out array     |
| January 10    | continue building arm pieces  |   coding    |
| January 17    | begin assembling arm and modifications |   coding    |
| January 24    |  finish Solidworks assembly    | finsh coding |
| January 31    |  print parts and laser cut |    print parts and laser cut       |
| February 7    |  assembly      |   assembly      |
| February 14   | troubleshooting   | troubleshooting   |

