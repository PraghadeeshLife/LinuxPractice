cmd_/home/praghadeesh/Misc/MODPROG/Module.symvers := sed 's/\.ko$$/\.o/' /home/praghadeesh/Misc/MODPROG/modules.order | scripts/mod/modpost -m -a  -o /home/praghadeesh/Misc/MODPROG/Module.symvers -e -i Module.symvers   -T -