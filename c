set w=createobject("wscript.shell")
set p=createobject("wmplayer.ocx")
x=w.expandenvironmentstrings("%appdata%")
set f=CreateObject("Scripting.FileSystemObject").createtextfile(x&"\c.bat",true)
f.write "@echo off"+vbCrLf+"cls"+vbCrLf+"color a"+vbCrLf+":1"+vbCrLf+"echo|set /p=""RICKROLLED  """+vbCrLf+"goto 1"
f.close
w.sendkeys "{F11}"
w.sendkeys "%appdata%\c.bat{ENTER}"
p.url="https://botssd.github.io/b/r.mp3"
p.settings.setmode "loop",true
p.settings.volume=100
while true do
wscript.sleep 1
w.sendkeys chr(&hAF)
loop
wend
