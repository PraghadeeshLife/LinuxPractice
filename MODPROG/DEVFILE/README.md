In the previous examples of creating device drivers and assigning them major and minor numbers using static and dynamic allocation method, we just displayed them under /proc/devices.

But to access them we have to create the device files under /dev directory. Let's understand how we can create in this tutorial

The device files allows easy communication between user space applications and hardware.

The device files can be created either manually or automatically.

Manual -> mknord -m <permissions> <name> <device type> <major> <minor>

Automatic Method
It is handled by udev, which is the device manager for linux kernel that creates/removes device nodes in the /dev directory dynamically.

struct class * class_create(struct module *owner, const char *name);

void class_destroy(struct class *cls);

struct device *device_create(struct *class, struct device *parent, dev_t dev, void *drvdata, const char *fmt, ...);

void device_destroy(struct class *class, dev_t devt);


