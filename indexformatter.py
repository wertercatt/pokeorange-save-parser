import sys
import re

regex = re.compile('[^a-zA-Z]')
with open(sys.argv[1], "r", encoding="utf-8") as txtFile:
    indexList = txtFile.readlines()
with open(sys.argv[1] + "_processed.h", "w", encoding="utf-8") as output:
    for idx, x in enumerate(indexList):
        output.write(regex.sub('', x) + "=" + str(idx + 80) + ",\n")
