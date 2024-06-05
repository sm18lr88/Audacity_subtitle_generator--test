# Export Labels Plugin for Audacity

Undergoing testing. Don't do anything yet.  

This plugin exports label tracks to SRT files, supporting UTF-8 characters.

## Build Instructions

1. Install CMake.
2. Run the following commands:
    ```
    mkdir build
    cd build
    cmake ..
    cmake --build .
    ```

## Installation

1. Copy the generated DLL and `plugin.xml` file to Audacity's plugins directory.
2. Open Audacity, go to `Effect > Add / Remove Plug-Ins`, find your plugin, and enable it.
