<img src="/screenshot_mac.png?raw=true" alt="Mac screenshot" align="right">


This is a port of Glypha III from its Mac OS/QuickDraw version (1995) to modern operating systems.

> Glypha III is a classic arcade game originally created by John Calhoun in which you are placed inside an Egyptian temple with only your lance and a winged steed to aid you. Here you are forced to do battle with Sphinxes in order to gain the honour of a place on the High Scores list. The game is based on Joust and features sound and the original animated graphics.

### Build

([CMake](https://cmake.org) 3.1+ is required)

macOS:

1. `make game`

Windows:

1. `mkdir build`
2. `cd build`
3. `cmake -DCMAKE_BUILD_TYPE=Release ..`
4. `cmake --build . --config Release`

Linux:

1. `make qt`

Ubuntu dependencies:
1. Qt
2. `sudo apt install libgl1-mesa-dev`

### What is SlugMan?
<img width="640" alt="Slugman_Classic_MacOS" src="https://user-images.githubusercontent.com/3295271/235315963-7ec714d2-b948-4bf4-a159-f8f9bbc32a60.png">

SlugMan is a game that was "Created" by Jason Fox, one of the characters in the long-running comic ["FoxTrot"](https://foxtrot.com), created by [Bill Amend](https://twitter.com/billamend). It was [originally released](https://web.archive.org/web/19991128140501/http://www.foxtrot.com/funandgames/gamezone/index.html) in the late 90's for Mac System 6.0.5 or later.

It was [then updated](https://web.archive.org/web/20021017024228/http://homepage.mac.com/billamend/) as a Carbon app and added support for Max OS X in 2002.

Since support for PowerPC apps was removed in Mac OS 10.7 Lion, my goal is to modify [kainjow's code](https://github.com/kainjow/Glypha) and create a modern port of SlugMan.
<br>
<br>
### TODO
The comparison pics have SlugMan running in Mac OS 7.6.1 via SheepShaver on the left, the Carbon port in the middle and my fork running on the right.

<img width="1927" alt="High_Score_Compare_new" src="https://user-images.githubusercontent.com/3295271/236971462-5b2ea52d-72bc-4d3c-b1d9-e96e2921ab17.png"><br>
1)   Have the game display in a pixel-perfect mode and not the blurry way it does now.<br>
&nbsp;&nbsp; i) The graphics of Glypha III running in Mac OS 7.6.1 and the Carbon port are sharp while the graphics of the newer port are blurry. Click the image to zoom in to see what I mean.<br>
2)   Offer a 2x/zoom mode to double the image to 1280x960.<br>

<img width="1927" alt="High_Score_Compare_3" src="https://user-images.githubusercontent.com/3295271/236971529-4931c6e5-888b-4989-a194-7e5831735dbe.png">
3. After a game over, have the High Score screen display lives, score and level completed at the bottom, as was shown in the original game & the Carbon Mac OS X port. Click the image to zoom in to see what I mean.
<br><br>
<img width="640" alt="paige_spawn" src="https://user-images.githubusercontent.com/3295271/236696620-87682059-44eb-43fb-abdb-8b9cfbd28a09.png">
4. Have Paige-o-tron flashing on spawn as shown in the original game<br>
<br>
5. Get updated icon by etherbrian.
<br>
<br>

### Links

- Originally developed by John Calhoun:  
<http://www.softdorothy.com>  
<https://github.com/softdorothy/glypha_III>

- Mac OS X port by Mark Pazolli:  
<http://sourceforge.net/projects/vitality/files/glypha-iii>

- Modern port by Kevin Wojniak:<br>
<https://github.com/kainjow/Glypha>

- Glypha - Then and Now  
<http://boredzo.org/glypha>

- Icon by etherbrian  
<http://etherbrian.org>
<!-- 
- <img width="24" src="https://user-images.githubusercontent.com/3295271/236702065-43ec48dd-4f19-424b-9c12-428f23867d09.png"> Link to the Discord:<br>
<https://discord.gg/5BQNX5vW> -->
