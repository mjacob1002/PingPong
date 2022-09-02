import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
import math 

FILE_PREFIX="results_3/res_sz_"

def getResult(filename):
    f = open(filename, 'r')
    sum_trial = 0
    line = 0
    num_protocols = {}
    for line in f:
       if "nanoseconds" in line:
        tokens = line.split()
        if tokens[7] not in num_protocols.keys():
            num_protocols[tokens[7]] = 0
        num_protocols[tokens[7]] += float(tokens[3])
    for key in num_protocols.keys():
        num_protocols[key] /= 3
    return num_protocols

def plotResult(sizes, protocol_results):
    colors = ['r', 'b', 'g']
    color_idx = 0
    for key in protocol_results.keys():
        print(sizes)
        arr = protocol_results[key]
        print(arr)
        plt.scatter(sizes, arr, color=colors[color_idx], label=key)
        color_idx+=1
    plt.xlabel("log(size of int array)")
    plt.ylabel("Time of execution per message (nanoseconds)")
    plt.title("Measurements of Ping-Pong Simulation with 10k messages") # make sure it works with 1M, then go to 1000
    plt.legend()
    plt.show()
    plt.savefig("full_points")

def main():
    number = 2 ** 10
    scalar = 1
    size_arr = []
    times= []
    protocol_results = {}
    while (scalar * number) <= (2 ** 20):
        # read something
        file_num = scalar * number
        exponent = math.log(file_num, 2)
        size_arr.append(exponent)
        filename = FILE_PREFIX + str(file_num) + ".out"
        file_results = getResult(filename)
        for key in file_results.keys():
            if key not in protocol_results.keys():
                protocol_results[key] = []
            protocol_results[key].append(file_results[key])
        number *= 2
    plotResult(size_arr, protocol_results)


if __name__ == '__main__':
    main()
    


