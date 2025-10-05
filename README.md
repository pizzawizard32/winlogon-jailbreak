# winlogon-jailbreak
A program that uses the utilman.exe exploit to let you do more stuff in the login screen, but it has more security.

## compatibility
this software only runs on windows 8.1 and 10, but perhaps not 11 as im not sure if the exploit got patched.

## how do i install it?
make sure you downloaded the already compiled programs zip in the releases page (or compile them yourself with gcc) and then you're ready to complete these steps:
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
3. extract the winlogon-jailbreak zip file to C:\Windows\System32
4. change the password in the file wljailbreakpassword.vbs
5. you're now ready to run the program, js go to the login screen and click on the "accessibility"/"ease of access" button.
