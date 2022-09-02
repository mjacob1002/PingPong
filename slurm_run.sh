#!/usr/bin/bash
#SBATCH --job-name="PingPong"
#SBATCH --time=70:00
#SBATCH --mem=1G
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --output=arr_test.out
#SBATCH --cpus-per-task=2 


# ntasks is the number of processes
# cpus-per-task is the number of cpus per process
# YOU CAN HAVE MORE THAN ONE CPU PER PROCESS; CPUS PROCESS THREADS


module load openmpi/4.0.5-gcc10.2.0

# --bind-to core to enforce the processes aren't migrated, which would result in cache's being empty
#--cpu-set tells mpi what logical cores to use

FILE=results_csv/res_sz_$1.out

# +pemap assigns PEs to cores using their logical core names
mpirun -np 1 --bind-to core ping_pong 10002 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10002 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10002 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
mpirun -np 1 --bind-to core ping_pong 10000 $1 ++ppn 2 +pemap L0,1 >> $FILE
# mpirun -np 1 --bind-to core ping_pong 1000000 256 ++ppn 2 +pemap L0,1 >> res_sz_256.out
# mpirun -np 1 --bind-to core ping_pong 1000000 512 ++ppn 2 +pemap L0,1 >> res_sz_512.out
