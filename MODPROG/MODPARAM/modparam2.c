#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/moduleparam.h>

MODULE_LICENSE("GPLV2");
MODULE_DESCRIPTION("This is a sample Module Parameter Example");
MODULE_AUTHOR("Praghadeesh");

static char *whom = "world"
module_param(whom, charp, S_IRUGO);
static int howmany = 1;
module_param(howmany, int, S_IRUGO);

static int __init modparam_init(void){
	int i;
	for(i=0; i<howmany; i++){
		printk(KERN_INFO"(%d) Hello, %s\n", i, whom);
	return 0;
}

static void __exit modparam_exit(void)
{
	printk("Goodbye!! %s \n", whom);
}

module_init(modparam_init);
module_exit(modparam_exit);
