#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>

dev_t dev = MKDEV(220,0);

static int __init static_init(void){
	register_chrdev_region(dev, 1, "PraghadeeshDev");
	printk(KERN_INFO "Major = %d Minor = %d \n", MAJOR(dev), MINOR(dev));
	printk(KERN_INFO "Kernel Module has been inserted successfully!! \n");
	return 0;
}

static void __exit static_exit(void){
	unregister_chrdev_region(dev,1);
	printk(KERN_INFO "Kernel Module exited successfully \n");
}

module_init(static_init);
module_exit(static_exit);

MODULE_AUTHOR("Praghadeesh");
MODULE_LICENSE("GPLV2");
MODULE_DESCRIPTION("Statically allocated!");
MODULE_VERSION("1.0");
