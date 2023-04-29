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

### What is Slug-Man-TVG?
<img width="640" alt="Slugman_Classic_MacOS" src="https://user-images.githubusercontent.com/3295271/235315963-7ec714d2-b948-4bf4-a159-f8f9bbc32a60.png">

Slug-Man-TVG is a game that was "Created" by Jason Fox, one of the characters in the long-running comic "Fox-Trot". It was [originally released](https://web.archive.org/web/19991128140501/http://www.foxtrot.com/funandgames/gamezone/index.html) in the late 90's for Mac System 6.0.5 or later.

It was [then updated](https://web.archive.org/web/20021017024228/http://homepage.mac.com/billamend/) as a Carbon app and added support for Max OS X in 2002.

Since support for PowerPC apps was removed in Mac OS 10.7 Lion, my goal is to modify [the code](https://github.com/kainjow/Glypha) of Kevin Wojniak/kainjow and create a modern port of Slug-Man TVG.
<br>
<br>
### TODO
<img width="1282" alt="Display_Compare" src="https://user-images.githubusercontent.com/3295271/235315052-70f0c0e3-670d-4a12-8478-6ecb134fb011.png">

1. Have the game display in a pixel-perfect mode and not the blurry way it does now
2. Offer a 2x/zoom mode

<img width="1282" alt="High_Score_Compare" src="https://user-images.githubusercontent.com/3295271/235315108-47e43204-665b-40da-b638-7e8a7f261eed.png">
3. Match the High Score list as it was shown in the original game<br>
&nbsp;&nbsp;&nbsp;&nbsp;1. Make the High score title, list #, name, score and level all different colors<br>
&nbsp;&nbsp;&nbsp;&nbsp;2. Make the High Score screen display lives, score and level completed at the bottom<br>
&nbsp;&nbsp;&nbsp;&nbsp;3. Make the High Score screen font sizes match that of the original game<br>
    <br>
<img width="640" alt="Screen Shot 2023-04-29 at 12 59 30 PM" src="https://user-images.githubusercontent.com/3295271/235315125-ff8ce46d-8169-494e-a46b-6861c0a62df2.png">
5. Have Page-o-tron flashing on spawn as shown in the original game<br>
6. Set up Intel/Apple Silicon universal binaries<br>
7. Contact Bill Amend for an updated About image?

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
