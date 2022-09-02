#!/usr/bin/bash
#SBATCH --job-name="Ping Pong Exp"
#SBATCH --time=10:00
#SBATCH --mem=1G
#SBATCH --nodes=1
#SBATCH --ntasks=1
#SBATCH --output=testing.out2


module load openmpi/4.0.5-gcc10.2.0

# --bind-to core to enforce the processes aren't migrated, which would result in cache's being empty
#--cpu-set tells mpi what logical cores to use

./charmrun +ppn 2 +p2 ping_pong 1000
