set objshell = createobject("wscript.shell")
dim password
password=inputbox("enter yo paswrod")
if password = ("password") then
	objshell.run("logonjailbreak.exe")
else
	incorrect=msgbox("incorrect password",16,"sorry :(")
end if