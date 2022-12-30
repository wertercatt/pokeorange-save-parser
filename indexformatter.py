import sys

with open(sys.argv[1], encoding="utf-8") as txtFile:
    indexList = txtFile.readlines()
with open(sys.argv[1] + "_processed.txt", "w", encoding="utf-8") as output:
    for idx, x in enumerate(indexList):
        output.write('"' + x.strip() + '",\n')
