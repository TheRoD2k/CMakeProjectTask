import os

os.chdir("./A")
f = open('index.h', 'w')
f.write('bool CheckIf5(int input) {\n\tconst int foo = 5; \n\treturn input == foo;\n};')
f.close()
