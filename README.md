# esp32-ssd1306
Docs: [![couldn't get build status](https://api.travis-ci.com/wolffshots/esp32-ssd1306.svg?branch=main "Current doc build status")](https://wolffshots.github.io/esp32-ssd1306/index.html)

simple wrapper for setting up ssd1306 screens and interfacing with them
see issue [#2](https://github.com/wolffshots/esp32-warm-water/issues/2) on [esp32-warm-water](https://github.com/wolffshots/esp32-warm-water/)

## how to use project

1. run ```git submodule add git@github.com:wolffshots/esp32-ssd1306.git components/esp32-ssd1306``` in your main project
2. configure project if needed
3. ```#include "ssd1306.h"``` should give you access to this component.

if the above steps don't work then you may need to run ```git submodule init components/esp32-ssd1306``` 
and then ```git submodule update --remote --recursive``` in your main project

## folder contents

the component **esp32-ssd1306** contains three source files in C lang: [ssd1306.c](ssd1306.c), [ssd1306_i2c.c](ssd1306_i2c.c) and [ssd1306_spi.c](ssd1306_spi.c). the files are located in root folder.

esp-idf projects are build using cmake. the project build configuration is contained in `CMakeLists.txt` files that provide set of directives and instructions describing the project's source files and targets (executable, library, or both). 

below is short explanation of remaining files in the project folder.

```
├── include                     header file directory
│   ├── font8x8_basic.h         the header file which describes the font used for this component
│   └── ssd1306.h               the main header file for this component
├── .gitignore                  describes what files and folders git should ignore
├── .travis.yml                 build rules for creating docs via doxygen
├── CMakeLists.txt              base project cmake file (describes dependencies, include dir and src dir)
├── component.mk                component make file
├── Kconfig.projbuild           kconfig description file to add build time vars
├── LICENSE.md                  MIT license file
├── README.md                   this file
├── ssd1306_i2c.c               i2c interface src file of the component
├── ssd1306_spi.c               spi interface src file of the component
└── ssd1306.c                   core src file of the component
```

for more information on structure and contents of esp-idf projects, please refer to Section [Build System](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/build-system.html) of the esp-idf programming guide.

## documentation

automatically generated API documentation (doxygen) is available [here](https://wolffshots.github.io/esp32-ssd1306/index.html).

## license

the code in this project is licensed under the MIT license - see LICENSE for details.

# helpful commands
- ```git submodule update --remote --recursive``` - updates the checked out modules to the most recent commit to their main branch
