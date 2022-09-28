#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPLV2");
MODULE_DESCRIPTION("This is a sample Module Parameter Example");
MODULE_AUTHOR("Praghadeesh");

int var = 20;
module_param(var,int,0644);

static int __init modparam_init(void){
	printk("This is modparam init function var : %d\n", var);
	return 0;
}

static void __exit modparam_exit(void)
{
	printk("This is modparam exit function \n");
}

module_init(modparam_init);
module_exit(modparam_exit);
