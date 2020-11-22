start_x = 310
start_y = 200
step_x = 250
step_y = 150

head = '''<?xml version="1.0" encoding="UTF-8" standalone="no"?>
<project source="2.7.1" version="1.0">
  This file is intended to be loaded by Logisim (http://www.cburch.com/logisim/).

  <lib desc="#Wiring" name="0">
    <tool name="Splitter">
      <a name="facing" val="west"/>
      <a name="fanout" val="3"/>
      <a name="incoming" val="3"/>
    </tool>
    <tool name="Tunnel">
      <a name="facing" val="east"/>
    </tool>
  </lib>
  <lib desc="#Gates" name="1">
    <tool name="AND Gate">
      <a name="facing" val="north"/>
      <a name="size" val="30"/>
    </tool>
  </lib>
  <lib desc="#Plexers" name="2">
    <tool name="Multiplexer">
      <a name="select" val="5"/>
    </tool>
  </lib>
  <lib desc="#Arithmetic" name="3"/>
  <lib desc="#Memory" name="4"/>
  <lib desc="#I/O" name="5"/>
  <lib desc="#Base" name="6">
    <tool name="Text Tool">
      <a name="text" val=""/>
      <a name="font" val="SansSerif plain 12"/>
      <a name="halign" val="center"/>
      <a name="valign" val="base"/>
    </tool>
  </lib>
  <main name="grf"/>
  <options>
    <a name="gateUndefined" val="ignore"/>
    <a name="simlimit" val="1000"/>
    <a name="simrand" val="0"/>
  </options>
  <mappings>
    <tool lib="6" map="Button2" name="Menu Tool"/>
    <tool lib="6" map="Button3" name="Menu Tool"/>
    <tool lib="6" map="Ctrl Button1" name="Menu Tool"/>
  </mappings>
  <toolbar>
    <tool lib="6" name="Poke Tool"/>
    <tool lib="6" name="Edit Tool"/>
    <tool lib="6" name="Text Tool">
      <a name="text" val=""/>
      <a name="font" val="SansSerif plain 12"/>
      <a name="halign" val="center"/>
      <a name="valign" val="base"/>
    </tool>
    <sep/>
    <tool lib="0" name="Pin">
      <a name="tristate" val="false"/>
    </tool>
    <tool lib="0" name="Pin">
      <a name="facing" val="west"/>
      <a name="output" val="true"/>
      <a name="labelloc" val="east"/>
    </tool>
    <tool lib="1" name="NOT Gate"/>
    <tool lib="1" name="AND Gate"/>
    <tool lib="1" name="OR Gate"/>
  </toolbar>
  <circuit name="grf">
    <a name="circuit" val="grf"/>
    <a name="clabel" val=""/>
    <a name="clabelup" val="east"/>
    <a name="clabelfont" val="SansSerif plain 12"/>
'''
template_out = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="west"/>
      <a name="width" val="32"/>
      <a name="label" val="O%d"/>
    </comp>
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="east"/>
      <a name="width" val="32"/>
      <a name="label" val="O%d"/>
    </comp>
'''
template_tunnel_1 = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="east"/>
      <a name="width" val="32"/>
      <a name="label" val="inData"/>
    </comp>
'''
template_tunnel_2 = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="north"/>
      <a name="label" val="reset"/>
    </comp>
'''
template_tunnel_3 = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="north"/>
      <a name="label" val="WE"/>
    </comp>
'''
template_tunnel_4 = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="north"/>
      <a name="label" val="clk"/>
    </comp>
'''
template_tunnel_5 = '''
    <comp lib="0" loc="(%d,%d)" name="Tunnel">
      <a name="facing" val="north"/>
      <a name="label" val="Sel%d"/>
    </comp>
'''
template_yuanjian = '''
    <comp lib="1" loc="(%d,%d)" name="AND Gate">
      <a name="facing" val="north"/>
      <a name="size" val="30"/>
      <a name="inputs" val="2"/>
    </comp>
    <comp lib="4" loc="(%d,%d)" name="Register">
      <a name="width" val="32"/>
      <a name="label" val="%d"/>
    </comp>
    <comp lib="2" loc="(%d,%d)" name="Multiplexer">
      <a name="width" val="32"/>
    </comp>
'''
template_wire = '''
    <wire from="(%d,%d)" to="(%d,%d)"/>
'''

end = '''
  </circuit>
</project>
'''

res = ""
k = 0
res += head
for i in range(0,4):
    for j in range(0,8):
        res += template_out % (start_x + i * step_x, start_y + j * step_y, k, start_x + i * step_x - 70, start_y + j * step_y - 10, k)
        res += template_tunnel_1 % (start_x + i * step_x - 70, start_y + j * step_y + 10)
        res += template_tunnel_2 % (start_x + i * step_x - 10, start_y + j * step_y + 20)
        res += template_tunnel_3 % (start_x + i * step_x - 70, start_y + j * step_y + 50)
        res += template_tunnel_4 % (start_x + i * step_x - 20, start_y + j * step_y + 20)
        res += template_tunnel_5 % (start_x + i * step_x - 50, start_y + j * step_y + 50, k)
        res += template_yuanjian % (start_x + i * step_x - 60, start_y + j * step_y + 20, start_x + i * step_x, start_y + j * step_y, k, start_x + i * step_x - 40, start_y + j * step_y)
        res += template_wire % (start_x + i * step_x - 40, start_y + j * step_y, start_x + i * step_x - 30, start_y + j * step_y)
        k = k + 1

res += end
fpointer = open("F:\\Course\\CO\\Logisim\\GRF_1.circ", mode = 'w')

fpointer.write(res)






