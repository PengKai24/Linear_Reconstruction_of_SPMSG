# Full State Linear Reconstruction of SPMSG Systems
This repository contains simulations and code for an improved linear controller based on full state reconstruction, including conmparisons with a PI-based controller and an ESO-ITSMVC controller.
The implementation is available in MATLAB (R2020b for simulink and R2019b for the code).
## Features
Simulations: Users can adjust various parameters to simulate different operation conditions.  
Code: Code for this experiment validation is written in MATLAB and translatable to C through MATLAB code generation.
## Simulation results
MATLAB simulation results of the DC voltage dynamic response under load steps are shown blow, comparing three controllers: the proposed full state linear reconstruction-based controller, the PI-based controller, and the ESO-ITSMVC controller.
### load increase
![](Sim_FullStateLinear_SPMSG/Comparison1.png)
### load decrease
![](Sim_FullStateLinear_SPMSG/Comparison2.png)

## Contact
For any queries or further discussion regarding the project, please open an issue in this repository or direct connect kaipeng@hust.edu.cn.
