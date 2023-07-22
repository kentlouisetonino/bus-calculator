## Description
> - A CLI computer program that will allow you to compute the Bus last trip empty
    seats based on the given total number of seats and passengers. Refer to the
    example below. The main technology stack are C++, GNU C++ Compiler (G++), Snapcraft, and GNU/Linux.

<br />

> - Snap Store: https://snapcraft.io/cli-transportation-calculator

```bash
# Example 1
Total bus seats = 50
Total passengers = 126
Total last trip empty seats = 24
Explanation: This means at the 3rd trip, there are 24 (50 - 26) remaining seats.

# Example 2
Total bus seats = 50
Total passengers = 10
Total last trip empty seats = 40
Explanation: This means at the 1st trip, there are 40 (50 - 10) remaining seats.
```

<br />

[Transportation Calculator Test.webm](https://user-images.githubusercontent.com/69438999/198885804-774ce0f8-cf48-4295-9ffd-fd9ab070aa7d.webm)

<br />
<br />
<br />



## Local Development Guide
> - Install the GNU C++ Compiler in your machine. <br />
> - Go to the root directory. <br />
> - Run the following commands. <br />
```bash
g++ -o app app.cpp
./app
```

<br />
<br />
<br />



## Deployment Guide
```bash
snapcraft login
snapcraft clean
snapcraft
snapcraft push cli-transportation-calculator_<version-number-in-snapcraft-yaml>_amd64.snap --release=stable
```

<br />
<br />
<br />



## Installation Guide
```bash
sudo snap install cli-transportation-calculator
snap run cli-transportation-calculator.app
```
