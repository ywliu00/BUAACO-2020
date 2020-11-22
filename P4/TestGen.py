fp = open("test_3.asm", mode = "w")

# ori
for i in range(0, 31) :
    instr = "ori $" + i + ", $0, " + i + "\n"
    fp.write(instr)

#addu
for i in range(31, 0) :
    instr = "addu $" + i + ", $" + i + ", $" + i + "\n"
    fp.write(instr)
    
#subu
for i in range(0, 31) :
    instr = "subu $" + i + ", $" + i + ", $12\n"
    fp.write(instr)