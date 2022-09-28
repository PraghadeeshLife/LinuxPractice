All drivers that are neither Storage or Device Drivers are some type of Character Driver.

Applications <- Device File <- Major or Minor Number <- Device Driver <- Hardware

The device file finds the corresponding device driver using Major and Minor Numbers

The Linux Kernel represent Character and Block devices as pair of numbers <major>:<minor>

Major Number -> Driver associated with the device
Minor Number -> Distinguish Individual Physical or Logical Devices

The numbers are allocated either statically or dynamically.

Static -> int register_chrdev_region(dev_t first, unsigned int count, char* name);

returns 0 if allocation is successfull

Dynamic -> int alloc_chrdev_region(dev_t *dev, unsigned int firstminor, unisgned int count, char *name);

Unregister -> void unregister_chrdev_region(dev_t first, unsigned int count);


