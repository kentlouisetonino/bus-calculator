## Description
> - A CLI computer program that will allow you to compute the Bus last trip empty
    seats based on the given total number of seats and passengers.

> - The technologies are C++, GNU C++ Compiler (G++), Snapcraft, and GNU/Linux.

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

https://github.com/kentlouisetonino/cli-transportation-calculator/assets/69438999/7240d929-643b-432f-bc4e-400d96001d2c

<br />
<br />


## Local Development
> - Pushing changes to all repository.

```bash
# Change mode the permission and make it executable.
chmod +x git-push-all

# Push changes to all repository.
./git-push-all
```

> - Install the GNU C++ Compiler in your machine.

> - Go to the root directory. Run the following commands.

```bash
sudo chmod +x run
./run
```

> - Deploy app in snap store.

```bash
# Manually compile the app.
g++ -o app src/app.cpp

# Deploy to snap store.
snapcraft login
snapcraft clean
snapcraft
snapcraft push cli-transportation-calculator_<version-number-in-snapcraft-yaml>_amd64.snap --release=stable
```

> - Installation guide of snap.

```bash
sudo snap install cli-transportation-calculator
snap run cli-transportation-calculator.app
```

