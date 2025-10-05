# winlogon-jailbreak
A program that uses the utilman.exe exploit to let you do more stuff in the login screen, but it has more security.

## compatibility
this software only runs on windows 8.1 and 10, but perhaps not 11 as im not sure if the exploit got patched.

## installation
make sure you downloaded the C++ script and you've got GCC on your PC, and then you will be able to follow these steps:
1. cd to C:\Windows\System32
   ```bat
   cd C:\Windows\System32
   ```
2. take ownership and permissions of utilman.exe, and rename it to utilman.exe.old
   ```bat
   takeown /f utilman.exe
   icacls utilman.exe /grant everyone:F
   ren utilman.exe utilman.exe.old
   ```
3. put the file jailbreak.cc in C:\Windows\System32
4. change the password in the file jailbreak.cc
5. compile the file jailbreak.cc (C++) with the GCC compiler
6. you're now ready to run the program, js go to the login screen and click on the "accessibility"/"ease of access" button.

**NOTE:** Jailbreaking Winlogon can also give access to do unauthorized things (such as deleting all your system files), so you might be able to brick your Windows installation, but I'm not responsible for anything you do on your computer.
