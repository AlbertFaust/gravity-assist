<h3 align="center">
Gravity Assist<br><br>
<a href="https://circleci.com/gh/AlbertFaust/gravity-assist/tree/master">
<img src="https://circleci.com/gh/AlbertFaust/gravity-assist.svg?style=shield&circle-token=:circle-token" />
</a>

</h3>

<p align="center">
A <a href="https://en.wikipedia.org/wiki/Gravity_assist">gravitational assist</a> simulator that simulates the motion of objects as they enter and exit gravitational fields. The program is written using C++ and OpenGL and uses 'real physics' applying <a href="https://en.wikipedia.org/wiki/Kepler's_laws_of_planetary_motion">Kepler's Laws</a> and <a href="https://en.wikipedia.org/wiki/Newton's_law_of_universal_gravitation">Newtonian Gravitation</a> to simulate the gravitational slingshots.<br><br>
Trello Board can be found <a href="https://trello.com/b/IzK134h0/gravity-assist-general-board">here</a>. 
</p>
------------ 
#####Gravity Assist
A gravity assist is the act of getting close to a large gravitational body (like a planet) in order to speed up. In this process, the planet loses some of its orbital energy (conservation of energy) but the amount the planet loses is proportionately very small.
<p align="center">
<img src="https://raw.githubusercontent.com/AlbertFaust/gravity-assist/master/output2.gif"></br>
  
(This image is not the most up-to-date version)  
</p>

#####Development

This is a project that I plan on investing a lot of time in. I am very interested in Celestial Mechanics and want to work on a large Computer Graphics project. Some parts of the project I need to implement:

* Fully working Solar System with textured planets and stars.
* Ability to control camera and 'time'. 
* Accurate orbital physics using Kepler's Laws and Newtonian Gravitation.
* Ability to generate 'planets' and see how a body reacts in the field.

#####Resources

Some documentation that may be useful for development of the project. 

* <a href="https://www.opengl.org/sdk/docs/reference_card/opengl45-reference-card.pdf">OpenGL 4.5 Reference Card</a>
* <a href="http://docs.gl/">OpenGL API Documentation</a>
* <a href="http://en.cppreference.com/w/">C++ Reference/Documentation</a>
* <a href="http://hyperphysics.phy-astr.gsu.edu/hbase/kepler.html">Kepler's Laws</a>
* <a href="http://www.braeunig.us/space/orbmech.htm">Orbital Mechanics</a>

#####Usage
To compile:  
`g++ orbit.cpp -lGL -lGLU -lGLEW -lglut -o orbit`

To run:  
`./orbit`

#####License
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
