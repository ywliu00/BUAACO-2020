#CO testfile generator
file_addr = "F:/Course/CO/Verilog/CPU_CHECKER/cpu_checker_tb.v"
filebk_addr = "F:/Course/CO/Testfile_Gen/cpu_checker_tb.v"
test_data_addr = "F:/Course/CO/Testfile_Gen/testdata.txt"
test_file = open(file_addr, mode='w')
test_filebk = open(filebk_addr, mode='r')
test_data = open(test_data_addr, mode='r')

tmpstr = test_filebk.readline()
while "Add stimulus here" not in tmpstr:
    test_file.write(tmpstr)
    tmpstr = test_filebk.readline()
test_file.write(tmpstr)

data = "10086"
while data != "":
    data = test_data.readline()
    for c in data:
        if(c == "\n"):
            break
        else:
            teststr = "\t\t#10\n\t\tchar = \"" + c +"\";\n"
            test_file.write(teststr)

tmpstr = "\tend\n\n\talways #5 clk <= ~clk;\n\nendmodule"
test_file.write(tmpstr)
        