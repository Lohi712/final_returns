# expOS Workshop Requirements

## WSL/Linux Installation

### Linux Users:
If you have dual-booted Linux and Windows or already have any Linux distribution installed, you can skip this step and head to ExpOS Installation and Setup

### Linux VM Users:
If you have a Linux VM installed, you can skip this step as long as your VM can run Visual Studio Code or any other text editor you’re comfortable with, and head to [ExpOS Installation and Setup](#expos-installation-and-setup)

### Windows Users:

WSL is a tool which lets you run Linux commands and applications on Windows. We will be using this tool to run expOS since expOS does not support Windows.

1. **Install WSL:**\
Follow the steps in the given link to install WSL: https://learn.microsoft.com/en-us/windows/wsl/install 
TL;DR: Run the command `wsl --install` in Powershell to install WSL with Ubuntu in Windows 10 or 11.

2. **Install Windows Terminal:**\
Open the Microsoft Store and install “Windows Terminal”. This will let you open multiple Ubuntu terminals.
Link: [https://apps.microsoft.com/detail/9n0dx20hk701?ocid=webpdpshare]()

3. **Testing the Setup**\
Open Windows Terminal, and select “Ubuntu” in the dropdown menu (near the new tab button). 
The first time you do this, Ubuntu may take a while to load.
WSL Setup is now done, proceed to [ExpOS Installation and Setup](#expos-installation-and-setup)

### MacOS Users:

1. **Install Homebrew:**\
Install Homebrew by following the instructions here: [https://brew.sh/]()

2. **ExpOS Setup**\
Proceed to [ExpOS Installation and Setup](#expos-installation-and-setup)


## ExpOS Installation and Setup

**NOTE: Do NOT use the default expOS installer script**

1. Clone the GitHub repository:
Run the following command in your $HOME directory
```git clone https://github.com/aadit-n3rdy/myexpos```

2. Run the following command to install the necessary packages\
**For Ubuntu WSL or Debian-based distros)**:```sudo apt-get install libreadline-dev flex bison make gcc wget curl```\
**For macOS users**: ```brew install readline flex bison make gcc wget curl```

3. `cd` into the expOS directory:
Run the following command:
```cd $HOME/myexpos```

4. Build all the necessary files with the following command:
```make```
Run the above command in the `$HOME/myexpos` directory

**ExpOS is now installed! Sit tight and wait for the workshop to learn more about operating systems and ExpOS**
