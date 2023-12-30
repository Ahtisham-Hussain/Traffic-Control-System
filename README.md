# Traffic-LIGHT-Control-System

The traffic congestion due to the exploding increase of vehicles became the severest social problems and it has a major effect on the economy of a country. Therefore, many researches about traffic light system have been done in order to overcome some complicated traffic phenomenon but existent research had been limited about present traffic system in well-travelled traffic scenarios.
<br>

Traffic lights are source of signalling device for road junctions. Traffic light controllers are programmed to assign timely directions to road users in Red, Yellow and Green. Present Traffic Light Controllers are based on microcontroller.

## Components

- Arduino Uno
- Set of LED's (Green, Yellow, Red)

## Software

- Arduino-ide + Proteus

## Circuit Diagram

![Traffic_Control_System](https://github.com/Ahtisham-Hussain/Traffic-Control-System/assets/154002517/c48be927-db6a-40b6-a9e2-4c2975c1c1b1)

## Logic About The Project

**Green Signal in Lane 1**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 1 | 0 | 0 |
| Lane 2 | 0 | 0 | 1 |
| Lane 3 | 0 | 0 | 1 |
| Lane 4 | 0 | 0 | 1 |

<br>

**Wait Signal Shifted**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 1 | 0 |
| Lane 2 | 0 | 1 | 0 |
| Lane 3 | 0 | 0 | 1 |
| Lane 4 | 0 | 0 | 1 |

<br>

**Green Signal in Lane 2**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 0 | 1 |
| Lane 2 | 1 | 0 | 0 |
| Lane 3 | 0 | 0 | 1 |
| Lane 4 | 0 | 0 | 1 |

<br>

**Wait Signal Shifted**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 0 | 1 |
| Lane 2 | 0 | 1 | 0 |
| Lane 3 | 0 | 1 | 0 |
| Lane 4 | 0 | 0 | 1 |

<br>

**Green Signal in Lane 3**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 0 | 1 |
| Lane 2 | 0 | 0 | 1 |
| Lane 3 | 1 | 0 | 0 |
| Lane 4 | 0 | 0 | 1 |

<br>

**Wait Signal Shifted**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 0 | 1 |
| Lane 2 | 0 | 0 | 1 |
| Lane 3 | 0 | 1 | 0 |
| Lane 4 | 0 | 1 | 0 |

<br>

**Green Signal in Lane 4**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 0 | 1 |
| Lane 2 | 0 | 0 | 1 |
| Lane 3 | 0 | 0 | 1 |
| Lane 4 | 1 | 0 | 0 |

<br>

**Wait Signal Shifted**

<br>

| Lane | Green | Yellow | Red |
|-|-|-|-|
| Lane 1 | 0 | 1 | 0 |
| Lane 2 | 0 | 0 | 1 |
| Lane 3 | 0 | 0 | 1 |
| Lane 4 | 0 | 1 | 0 |

## Project Demo

https://github.com/Ahtisham-Hussain/Traffic-Control-System/assets/154002517/d5d52b38-2b18-49aa-9604-a964ced8ce5f