import pandas as pd
import numpy as np


DIR = "results_csv/"

df = pd.DataFrame()
df["Time"] = ""
df["Message Size"] = ""
df["Protocol"] = ""

def analyzeFile(filename):
   f = open(filename, 'r')
   for line in f:
       if "nanoseconds" in line:
        print("FOUND A VALID LINE")
        tokens = line.split()
        df.loc[len(df)] = [tokens[3], tokens[5], tokens[7]]
def main():
    for i in range(13):
        exponent = 8 + i
        number = str(2 ** exponent)
        fname = DIR + "res_sz_" + number + ".out"
        analyzeFile(fname)
    print(df)
    df.to_csv("Simulations.csv")
main()
