import hashlib

key = [
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68,
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68, 
    42, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, 0x68
]

nounce = []
for x in range(256):
    nounce.append(x)

data = ""


for i in range(len(nounce)):
    nounce[i] = nounce[i].to_bytes(1, byteorder='big')

key2 = []
for i in range(len(key)):
    key2.append(0)
    key2[i] = key[len(key)-i-1].to_bytes(4, byteorder='big')

key = key2

data = bytes(data, encoding='ascii')

array = key+nounce
array = b''.join(array)

array = array+data+int(0x0000).to_bytes(4, byteorder='big')
# array = data

print(array.hex())

print(hashlib.sha256(array).hexdigest())


# key = 256 bystes = 4 * 64 longs
# nounce = 256 bystes = 4 * 64 longs = 2048 bits

# hash = 256 bits = 64 bytes
