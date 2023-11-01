# 🔆 Phosphorescent
A shimmery arpeggiator for the Electro-Smith Daisy Seed written in C++ ~

<p>
    <a href="https://opensource.org/licenses/MIT">
      <img src="https://img.shields.io/badge/license-MIT-brightgreen">
    </a>
</p>

## 🔆 Setup

1. Clone repo with submodules
`$ git clone --recursive git@github.com:sunchimes/phosphorescent.git`

2. Build libraries and compile source
`$ ./build.sh`

3. Optional: Update submodules if out of date
`$ git submodule update --init --recursive`


## 🔆 Develop

1. From the working directory:
`$ cd src/arp/`

2. Reset the Daisy: on the Daisy Seed, hold down BOOT and then press RESET. 

3. Build the program and flash it onto the Daisy Seed:
`$ make clean; make; make program-dfu`


## 🔆 Updating the Submodules

To pull everything for the repo and submodules:
`$ git pull --recurse-submodules`

To only pull changes for the submodules:
`$ git submodule update --remote`

Whenever there are changes to the libraries (whether from pulling from git or manually editing the libraries) they will need to be rebuilt. This can be done by either running `./ci/build_libs.sh` or entering the directory of the library with changes and running `make`.

## 🔆 Support our Project

[Support our work](https://opencollective.com/diy-synth-collective) by backing, sponsoring, or contributing a one-time donation on our OpenCollective! 

Made with love with the [DIY Synth Collective](https://diysynthcollective.mmm.page/) <3 
