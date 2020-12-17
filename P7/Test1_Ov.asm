.text
lui $4, 0x7fff
ori $5, $0, 0xffff
ori $6, $0, 5
add $7, $4, $5
add $7, $7, $6 # Overflow Here
lui $7, 0x1234
ori $7, $7, 0x5678
