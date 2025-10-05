set objshell = createobject("wscript.shell")
dim password
password=inputbox("enter yo paswrod")
if password = ("yourpassword") then 'change yourpassword to a password you want to insert.
	objshell.run("logonjailbreak.exe")
else
	incorrect=msgbox("incorrect password",16,"sorry :(")

end if

