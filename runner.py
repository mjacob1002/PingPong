import subprocess
import os
import sys

arr_size = 256 # the starting array size for the ints
UPPER_LIMIT = 2 ** 20 # 4MB of int array
# UPPER_LIMIT = 1024
while arr_size <= UPPER_LIMIT:
    sbatch_command = subprocess.run(["sbatch", "slurm_run.sh", str(arr_size)], check=True)
    arr_size *= 2;

print("PROGRAM SUCCESSFULLY TERMINATED")
