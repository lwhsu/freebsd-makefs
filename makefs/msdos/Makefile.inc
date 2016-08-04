#	$FreeBSD$
#

.PATH:	${.CURDIR}/msdosfs ${.CURDIR}/../../sys/fs/msdosfs/ ${.CURDIR}/../../sbin/newfs_msdos/

CFLAGS+=	-I${.CURDIR}/../../sys/fs/msdosfs/ -I${.CURDIR}/../../sbin/newfs_msdos/

SRCS+=	mkfs_msdos.c msdosfs_fat.c msdosfs_conv.c msdosfs_vfsops.c
SRCS+=	msdosfs_lookup.c msdosfs_denode.c msdosfs_vnops.c msdosfs_fileno.c
