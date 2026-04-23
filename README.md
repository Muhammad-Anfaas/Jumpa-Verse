# 🎮 Jumpa Verse

Jumpa Verse is a 2D parkour game built using C++ and SDL2.  
It focuses on smooth movement, platforming mechanics, and experimental gameplay systems created from scratch.

---

## ✨ Features

- 2D parkour / platforming gameplay
- Smooth player movement and jumping
- Custom collision system
- SDL2-based rendering
- Lightweight C++ game architecture
- Physics and gameplay experiments

---

## 🛠️ Built With

- C++
- SDL2
- SDL2_image
- SDL2_ttf (optional)

---

## 🧰 Installation

### On Arch Linux:
```bash
sudo pacman -S sdl2 sdl2_image sdl2_ttf
```
On Windows:

On Windows, setting up SDL2 can be a bit tricky, mostly because of the linking stage. There are multiple ways to set it up depending on your preference.

You can use one of the following methods:

🔹 1. Windows Subsystem for Linux (WSL) [Easiest]

You can install WSL and use a Linux environment inside Windows.

Then follow the Linux/Arch setup:

sudo pacman -S sdl2 sdl2_image sdl2_ttf
🔹 2. Manual SDL2 Setup
Download SDL2 development libraries:
https://github.com/libsdl-org/SDL/releases
Extract the files.
Add paths:
include → compiler include path
lib → linker library path
bin → add to system PATH
Link SDL2 manually during compilation (MinGW example):
g++ main.cpp -IC:/SDL2/include -LC:/SDL2/lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image -o jumpaVerse
🔹 3. Using MinGW Compiler

You can also directly compile using MinGW by properly linking SDL2 libraries during build time.

🚀 Running the Game
Linux / WSL:
./jumpaVerse
Windows:
jumpaVerse.exe
📁 Project Structure
Jumpa-Verse/
│── src/
│   ├── main.cpp
│   ├── object.h
│   ├── ground_Class.h
│
│── assets/
│   ├── images/
│   ├── sounds/
│
│── README.md
