#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/types.h>
#include <linux/fs.h>
#include <linux/module.h>
#include <linux/kdev_t.h>

dev_t dev = 0;

static int __init dynamic_init(void){
	if((alloc_chrdev_region(&dev, 0, 1, "PraghadeeshDynamicDev"))<0){
		printk(KERN_INFO"Some error occured when allocating major no \n");
		return -1;
	}
	printk(KERN_INFO "Major = %d Minor = %d \n", MAJOR(dev), MINOR(dev));
	printk(KERN_INFO "Kernel Module inserted successfully.. \n");
	return 0;
}

static void __exit dynamic_exit(void){
	unregister_chrdev_region(dev,1);
	printk(KERN_INFO"Kernel Module Removed Successfully! \n");
}

module_init(dynamic_init);
module_exit(dynamic_exit);

MODULE_LICENSE("GPLV2");
MODULE_AUTHOR("Praghadeesh");
