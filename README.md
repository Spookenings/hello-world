# TRINGLE

ANALYSIS:

Inputs:
-char shape
-float base
-float height

Outputs:
-float Squarea
-float areaTriangle

Formulas:
- areaTriangle= 0.5 * base* height
- Squarea= base * base

Functions:
- Squarea(float side)
- areaTriangle(float base, float height)

DESIGN:
1. Prompt the user to enter either 's' or 't'
2. If the user enters a char that is not 's' or 't', else statement judges their ability to follow directions.
2a. if user enters 's':
  - Ask the user for the measurement of the square's base.
  - Use function Squarea(base)
    - return(base*base)

2b. if 't':
  - ask for base and height
  - areaTriangle(base, height)
    - return(0.5*base*height)
