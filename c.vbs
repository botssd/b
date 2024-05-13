set w=createobject("wscript.shell")
set p=createobject("wmplayer.ocx")
w.sendkeys("{F11}")
p.url="https://botssd.github.io/b/r.mp3"
p.settings.setmode "loop",true
p.settings.volume=100
while true do
wscript.sleep 1
w.sendkeys(chr(&hAF))
loop
wend
