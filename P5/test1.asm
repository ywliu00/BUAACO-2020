ori $3, $0, 10
ori $4, $0, 1
ori $5, $0, 0x1234
bgez $3, BranchDest
addu $3, $3, $4
addu $3, $3, $4
BranchDest:
addu $3, $3, $5