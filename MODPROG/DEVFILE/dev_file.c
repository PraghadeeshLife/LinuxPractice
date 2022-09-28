#include <linux/kernel.h>
#include <linux/init.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/device.h>
#include <linux/kdev_t.h>

dev_t dev = 0;
static struct class *dev_class;

static int __init dev_file_init(void){
	if((alloc_chrdev_region(&dev, 0, 1, "PraghadeeshDev"))<0){
		return -1;
	}
	pr_info("Major = %d Minor = %d \n", MAJOR(dev), MINOR(dev));
	if((dev_class = class_create(THIS_MODULE,"PraghadeeshClass"))==NULL){
		pr_err("Cannot create the struct class for device \n");
		goto r_class;
	}

	if((device_create(dev_class,NULL,dev,NULL,"praghaDevice"))==NULL){
		pr_err("Cannot create the device \n");
		goto r_device;
	}

	pr_info("Kernel Module Inserted successfully!! \n");
	return 0;

r_device:
	class_destroy(dev_class);
r_class:
	unregister_chrdev_region(dev,1);
	return -1;
}

static void __exit dev_file_exit(void){
	device_destroy(dev_class,dev);
	class_destroy(dev_class);
	unregister_chrdev_region(dev,1);
	pr_info("Kernel Module has been removed successfully!! \n");
}

module_init(dev_file_init);
module_exit(dev_file_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Praghadeesh");
