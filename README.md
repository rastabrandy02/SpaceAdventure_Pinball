# SpaceAdventure Pinball

The pinball project made during the physics 2 subject - Second year of videogame development.

### Orignial Game

http://www.freewebarcade.com/html5/spaceadventurepinball/game.html


### GitHub repository

https://github.com/rastabrandy02/SpaceAdventure_Pinball


# Controls

## Gameplay

*Down arrow key*: Start game/ launch ball.

*Left/Right arrow keys*: Left/Right flippers.

## Debug

*F1*: Toggle debug On/Off.

*1*: Spawn ball at mouse position.

*M*: Restart Player.

*Space*: Mouse joint.

*Q*: Refill ball.

*L*: Lose ball.

*R*: Reset player balls.

# Combos

*All Capsules*: +1500 points.

*New ball every 10.000 points.*

*All Left Buttons*: A special bumper appears.



## Differences with the Original Game

Due to time limitations, we have replicated  the basic gameplay (launching, flippers, map) plus the principal bumpers and a few combo elements.

Our game presents a way of obtaining extra balls by reaching a certain score. Also we could not find the original audio other from the background music, but we have replaced them with new sounds that matches all the interactions (bumpers, flippers, refill, lost ball etc...). It also uses a similar cartoon-ish font, but not the original.

Also, the way the original game is presented is by zooming in the game and letting the camera follow the ball as it moves throught the map, in ours the player has full view over the whole map.

# Responsibles of the work:

## Fernando Freixinet (rastabrandy02)

Create the repository.

Uploading the template.

Create the colliders of the map.

Added the alien island, the bumpers and the capsules.

Added the flipper sprite movement.

Mouse Joint for the debug mode.

Corrected ball spawn.

Collision Detection System.

Created the animations for the capsules and bumpers.

Added the gates and impairers for the ball.

## Brandon Arandia (IconicGIT)

Added Game textures and correspondant Rects.

Flippers behavior.

Lateral Bumper/mini Bumper behavior and animation.

Left purple buttons.

Capsule Combo behavior and animation.

Start spring tunnel behavior (spring + block entrance while in-game).

FPS limitation.

Added fonts and UI.

Physic bodies Creation Functions.

Music loop.

Game loop.

High score system.

Pause system.

### Development Process

A major problem we had when developing the game was when the ball sometimes decided to not move when it should've. This was most possibly caused by the interaction between other kinematic bodies and the ball (dynamic body) and how Box2D decided to put bodies to sleep to help performance. This was solved by not allowing the ball to sleep at all. This change did not affect the performance at all, because there is only one ball at a time when playing, and it is deleted when it reached its end point.

Another problem we had was that the fonts were not displayed correctly, showing some letters being cut, and others with parts of differents letters. This was an external problem caused by the incorrect dimension of the font texture, that caused minor errors to pile up as the program kept procecssing the texture, causing those disturbances.

In the beginning we had in mind using the TTF library, but due to problems with compatibility with SDL being too old and not having enough time and knowledge about how changing the SDL would be in the so advanced project, we decided to use our own modules instead.

## Pol Farreras (fakefarreraspol)

Ripped and searched sounds.

Music and sound implementation.

Ball Spawning.

Player Lifes/balls  system.

Score system.

Fixed player score/lifes bugs.

Background logo.






