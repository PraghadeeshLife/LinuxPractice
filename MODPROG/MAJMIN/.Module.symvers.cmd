cmd_/home/praghadeesh/Misc/MODPROG/MAJMIN/Module.symvers := sed 's/\.ko$$/\.o/' /home/praghadeesh/Misc/MODPROG/MAJMIN/modules.order | scripts/mod/modpost -m -a  -o /home/praghadeesh/Misc/MODPROG/MAJMIN/Module.symvers -e -i Module.symvers   -T -
