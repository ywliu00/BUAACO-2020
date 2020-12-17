.text
lui $4, 0x7fff
ori $5, $0, 0xffff
ori $6, $0, 5
add $7, $4, $5
ori $8, $0, 0x3024
#lw $7, 0x1234($0) # Overflow Here
#jr $8
bgez $8, bdest
add $9, $7, $6
lui $7, 0x1234
ori $7, $7, 0x5678
bdest:
lui $7, 0x2234
ori $7, $7, 0x5678
lui $7, 0x3234
ori $7, $7, 0x5678
lui $7, 0x4234
ori $7, $7, 0x5678
