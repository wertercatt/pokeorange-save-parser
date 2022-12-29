import sys
import struct
import json

struct_fmt = '>6c2s3s2s2s2s2s2s2B5c2s2c'
struct_len = struct.calcsize(struct_fmt)
struct_unpack = struct.Struct(struct_fmt).unpack_from
boxPokemon = []

def read_chunks(f, length):
    while True:
        data = f.read(length)
        if not data: break
        yield data

with open(sys.argv[1], "rb") as savFile:
    save = [struct_unpack(chunk) for chunk in read_chunks(savFile, struct_len)]
    print(len(save))
    for idx, x in enumerate(save):
        tempDict = {}
        tempDict["mon_species"] = int.from_bytes(save[idx][0], byteorder="big")
        print(json.dumps(tempDict, sort_keys=True, indent=4))