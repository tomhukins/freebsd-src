/*
 * System call prototypes.
 *
 * DO NOT EDIT-- this file is automatically generated.
 * $FreeBSD: src/sys/alpha/osf1/osf1_proto.h,v 1.1 1999/12/14 22:37:08 gallatin Exp $
 * created from;	FreeBSD
 */

#ifndef _OSF1_SYSPROTO_H_
#define	_OSF1_SYSPROTO_H_

#include <sys/signal.h>

struct proc;

#define	PAD_(t)	(sizeof(register_t) <= sizeof(t) ? \
		0 : sizeof(register_t) - sizeof(t))

struct	osf1_wait4_args {
	int	pid;	char pid_[PAD_(int)];
	int *	status;	char status_[PAD_(int *)];
	int	options;	char options_[PAD_(int)];
	struct osf1_rusage *	rusage;	char rusage_[PAD_(struct osf1_rusage *)];
};
struct	osf1_mknod_args {
	char *	path;	char path_[PAD_(char *)];
	int	mode;	char mode_[PAD_(int)];
	int	dev;	char dev_[PAD_(int)];
};
struct	osf1_getfsstat_args {
	struct osf1_statfs *	buf;	char buf_[PAD_(struct osf1_statfs *)];
	long	bufsize;	char bufsize_[PAD_(long)];
	int	flags;	char flags_[PAD_(int)];
};
struct	osf1_lseek_args {
	int	fd;	char fd_[PAD_(int)];
	off_t	offset;	char offset_[PAD_(off_t)];
	int	whence;	char whence_[PAD_(int)];
};
struct	osf1_mount_args {
	int	type;	char type_[PAD_(int)];
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
	caddr_t	data;	char data_[PAD_(caddr_t)];
};
struct	osf1_unmount_args {
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
};
struct	osf1_setuid_args {
	uid_t	uid;	char uid_[PAD_(uid_t)];
};
struct	osf1_access_args {
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
};
struct	osf1_kill_args {
	int	pid;	char pid_[PAD_(int)];
	int	signum;	char signum_[PAD_(int)];
};
struct	osf1_set_program_attributes_args {
	vm_offset_t	text_start;	char text_start_[PAD_(vm_offset_t)];
	vm_offset_t	text_len;	char text_len_[PAD_(vm_offset_t)];
	vm_offset_t	bss_start;	char bss_start_[PAD_(vm_offset_t)];
	vm_offset_t	bss_len;	char bss_len_[PAD_(vm_offset_t)];
};
struct	osf1_open_args {
	char *	path;	char path_[PAD_(char *)];
	int	flags;	char flags_[PAD_(int)];
	int	mode;	char mode_[PAD_(int)];
};
struct	osf1_sigprocmask_args {
	int	how;	char how_[PAD_(int)];
	osf1_sigset_t	mask;	char mask_[PAD_(osf1_sigset_t)];
};
struct	osf1_sigpending_args {
	struct proc *	p;	char p_[PAD_(struct proc *)];
	osf1_sigset_t *	mask;	char mask_[PAD_(osf1_sigset_t *)];
};
struct	osf1_classcntl_args {
	int	opcode;	char opcode_[PAD_(int)];
	int	arg1;	char arg1_[PAD_(int)];
	int	arg2;	char arg2_[PAD_(int)];
	int	arg3;	char arg3_[PAD_(int)];
};
struct	osf1_ioctl_args {
	int	fd;	char fd_[PAD_(int)];
	int	com;	char com_[PAD_(int)];
	caddr_t	data;	char data_[PAD_(caddr_t)];
};
struct	osf1_reboot_args {
	int	opt;	char opt_[PAD_(int)];
};
struct	osf1_execve_args {
	char *	path;	char path_[PAD_(char *)];
	char **	argp;	char argp_[PAD_(char **)];
	char **	envp;	char envp_[PAD_(char **)];
};
struct	osf1_stat_args {
	char *	path;	char path_[PAD_(char *)];
	struct osf1_stat *	ub;	char ub_[PAD_(struct osf1_stat *)];
};
struct	osf1_lstat_args {
	char *	path;	char path_[PAD_(char *)];
	struct osf1_stat *	ub;	char ub_[PAD_(struct osf1_stat *)];
};
struct	osf1_mmap_args {
	caddr_t	addr;	char addr_[PAD_(caddr_t)];
	size_t	len;	char len_[PAD_(size_t)];
	int	prot;	char prot_[PAD_(int)];
	int	flags;	char flags_[PAD_(int)];
	int	fd;	char fd_[PAD_(int)];
	off_t	pos;	char pos_[PAD_(off_t)];
};
struct	osf1_madvise_args {
	register_t dummy;
};
struct	osf1_setpgrp_args {
	int	pid;	char pid_[PAD_(int)];
	int	pgid;	char pgid_[PAD_(int)];
};
struct	osf1_setitimer_args {
	u_int	which;	char which_[PAD_(u_int)];
	struct itimerval *	itv;	char itv_[PAD_(struct itimerval *)];
	struct itimerval *	oitv;	char oitv_[PAD_(struct itimerval *)];
};
struct	osf1_table_args {
	long	id;	char id_[PAD_(long)];
	long	index;	char index_[PAD_(long)];
	void *	addr;	char addr_[PAD_(void *)];
	long	nel;	char nel_[PAD_(long)];
	u_long	lel;	char lel_[PAD_(u_long)];
};
struct	osf1_getitimer_args {
	u_int	which;	char which_[PAD_(u_int)];
	struct itimerval *	itv;	char itv_[PAD_(struct itimerval *)];
};
struct	osf1_fstat_args {
	int	fd;	char fd_[PAD_(int)];
	void *	sb;	char sb_[PAD_(void *)];
};
struct	osf1_fcntl_args {
	int	fd;	char fd_[PAD_(int)];
	int	cmd;	char cmd_[PAD_(int)];
	void *	arg;	char arg_[PAD_(void *)];
};
struct	osf1_select_args {
	u_int	nd;	char nd_[PAD_(u_int)];
	fd_set *	in;	char in_[PAD_(fd_set *)];
	fd_set *	ou;	char ou_[PAD_(fd_set *)];
	fd_set *	ex;	char ex_[PAD_(fd_set *)];
	struct timeval *	tv;	char tv_[PAD_(struct timeval *)];
};
struct	osf1_socket_args {
	int	domain;	char domain_[PAD_(int)];
	int	type;	char type_[PAD_(int)];
	int	protocol;	char protocol_[PAD_(int)];
};
struct	osf1_sigreturn_args {
	struct osigcontext *	sigcntxp;	char sigcntxp_[PAD_(struct osigcontext *)];
};
struct	osf1_sigsuspend_args {
	osf1_sigset_t	ss;	char ss_[PAD_(osf1_sigset_t)];
};
struct	osf1_osigstack_args {
	struct sigstack *	nss;	char nss_[PAD_(struct sigstack *)];
	struct sigstack *	oss;	char oss_[PAD_(struct sigstack *)];
};
struct	osf1_gettimeofday_args {
	struct timeval *	tp;	char tp_[PAD_(struct timeval *)];
	struct timezone *	tzp;	char tzp_[PAD_(struct timezone *)];
};
struct	osf1_getrusage_args {
	long	who;	char who_[PAD_(long)];
	void *	rusage;	char rusage_[PAD_(void *)];
};
struct	osf1_readv_args {
	int	fd;	char fd_[PAD_(int)];
	struct osf1_iovec *	iovp;	char iovp_[PAD_(struct osf1_iovec *)];
	u_int	iovcnt;	char iovcnt_[PAD_(u_int)];
};
struct	osf1_writev_args {
	int	fd;	char fd_[PAD_(int)];
	struct osf1_iovec *	iovp;	char iovp_[PAD_(struct osf1_iovec *)];
	u_int	iovcnt;	char iovcnt_[PAD_(u_int)];
};
struct	osf1_truncate_args {
	char *	path;	char path_[PAD_(char *)];
	off_t	length;	char length_[PAD_(off_t)];
};
struct	osf1_ftruncate_args {
	int	fd;	char fd_[PAD_(int)];
	off_t	length;	char length_[PAD_(off_t)];
};
struct	osf1_setgid_args {
	gid_t	gid;	char gid_[PAD_(gid_t)];
};
struct	osf1_sendto_args {
	int	s;	char s_[PAD_(int)];
	caddr_t	buf;	char buf_[PAD_(caddr_t)];
	size_t	len;	char len_[PAD_(size_t)];
	int	flags;	char flags_[PAD_(int)];
	struct sockaddr *	to;	char to_[PAD_(struct sockaddr *)];
	int	tolen;	char tolen_[PAD_(int)];
};
struct	osf1_getrlimit_args {
	u_int	which;	char which_[PAD_(u_int)];
	struct rlimit *	rlp;	char rlp_[PAD_(struct rlimit *)];
};
struct	osf1_setrlimit_args {
	u_int	which;	char which_[PAD_(u_int)];
	struct rlimit *	rlp;	char rlp_[PAD_(struct rlimit *)];
};
struct	osf1_sigaction_args {
	long	signum;	char signum_[PAD_(long)];
	struct osf1_sigaction *	nsa;	char nsa_[PAD_(struct osf1_sigaction *)];
	struct osf1_sigaction *	osa;	char osa_[PAD_(struct osf1_sigaction *)];
	void *	sigtramp;	char sigtramp_[PAD_(void *)];
};
struct	osf1_statfs_args {
	char *	path;	char path_[PAD_(char *)];
	struct osf1_statfs *	buf;	char buf_[PAD_(struct osf1_statfs *)];
	int	len;	char len_[PAD_(int)];
};
struct	osf1_fstatfs_args {
	int	fd;	char fd_[PAD_(int)];
	struct osf1_statfs *	buf;	char buf_[PAD_(struct osf1_statfs *)];
	int	len;	char len_[PAD_(int)];
};
struct	osf1_msync_args {
	caddr_t	addr;	char addr_[PAD_(caddr_t)];
	size_t	len;	char len_[PAD_(size_t)];
	int	flags;	char flags_[PAD_(int)];
};
struct	osf1_signal_args {
	int	signum;	char signum_[PAD_(int)];
	void *	handler;	char handler_[PAD_(void *)];
};
struct	osf1_sigaltstack_args {
	struct osf1_sigaltstack *	nss;	char nss_[PAD_(struct osf1_sigaltstack *)];
	struct osf1_sigaltstack *	oss;	char oss_[PAD_(struct osf1_sigaltstack *)];
};
struct	osf1_sysinfo_args {
	int	cmd;	char cmd_[PAD_(int)];
	char *	buf;	char buf_[PAD_(char *)];
	long	count;	char count_[PAD_(long)];
};
struct	osf1_proplist_syscall_args {
	register_t dummy;
};
struct	osf1_ntpadjtime_args {
	void *	tp;	char tp_[PAD_(void *)];
};
struct	osf1_ntpgettime_args {
	void *	tp;	char tp_[PAD_(void *)];
};
struct	osf1_pathconf_args {
	char *	path;	char path_[PAD_(char *)];
	int	name;	char name_[PAD_(int)];
};
struct	osf1_fpathconf_args {
	int	fd;	char fd_[PAD_(int)];
	int	name;	char name_[PAD_(int)];
};
struct	osf1_uswitch_args {
	long	cmd;	char cmd_[PAD_(long)];
	long	mask;	char mask_[PAD_(long)];
};
struct	osf1_usleep_thread_args {
	struct timeval *	sleep;	char sleep_[PAD_(struct timeval *)];
	struct timeval *	slept;	char slept_[PAD_(struct timeval *)];
};
struct	osf1_getsysinfo_args {
	u_long	op;	char op_[PAD_(u_long)];
	caddr_t	buffer;	char buffer_[PAD_(caddr_t)];
	u_long	nbytes;	char nbytes_[PAD_(u_long)];
	caddr_t	arg;	char arg_[PAD_(caddr_t)];
	u_long	flag;	char flag_[PAD_(u_long)];
};
struct	osf1_setsysinfo_args {
	u_long	op;	char op_[PAD_(u_long)];
	caddr_t	buffer;	char buffer_[PAD_(caddr_t)];
	u_long	nbytes;	char nbytes_[PAD_(u_long)];
	caddr_t	arg;	char arg_[PAD_(caddr_t)];
	u_long	flag;	char flag_[PAD_(u_long)];
};
int	osf1_wait4 __P((struct proc *, struct osf1_wait4_args *));
int	osf1_mknod __P((struct proc *, struct osf1_mknod_args *));
int	osf1_getfsstat __P((struct proc *, struct osf1_getfsstat_args *));
int	osf1_lseek __P((struct proc *, struct osf1_lseek_args *));
int	osf1_mount __P((struct proc *, struct osf1_mount_args *));
int	osf1_unmount __P((struct proc *, struct osf1_unmount_args *));
int	osf1_setuid __P((struct proc *, struct osf1_setuid_args *));
int	osf1_access __P((struct proc *, struct osf1_access_args *));
int	osf1_kill __P((struct proc *, struct osf1_kill_args *));
int	osf1_set_program_attributes __P((struct proc *, struct osf1_set_program_attributes_args *));
int	osf1_open __P((struct proc *, struct osf1_open_args *));
int	osf1_sigprocmask __P((struct proc *, struct osf1_sigprocmask_args *));
int	osf1_sigpending __P((struct proc *, struct osf1_sigpending_args *));
int	osf1_classcntl __P((struct proc *, struct osf1_classcntl_args *));
int	osf1_ioctl __P((struct proc *, struct osf1_ioctl_args *));
int	osf1_reboot __P((struct proc *, struct osf1_reboot_args *));
int	osf1_execve __P((struct proc *, struct osf1_execve_args *));
int	osf1_stat __P((struct proc *, struct osf1_stat_args *));
int	osf1_lstat __P((struct proc *, struct osf1_lstat_args *));
int	osf1_mmap __P((struct proc *, struct osf1_mmap_args *));
int	osf1_madvise __P((struct proc *, struct osf1_madvise_args *));
int	osf1_setpgrp __P((struct proc *, struct osf1_setpgrp_args *));
int	osf1_setitimer __P((struct proc *, struct osf1_setitimer_args *));
int	osf1_table __P((struct proc *, struct osf1_table_args *));
int	osf1_getitimer __P((struct proc *, struct osf1_getitimer_args *));
int	osf1_fstat __P((struct proc *, struct osf1_fstat_args *));
int	osf1_fcntl __P((struct proc *, struct osf1_fcntl_args *));
int	osf1_select __P((struct proc *, struct osf1_select_args *));
int	osf1_socket __P((struct proc *, struct osf1_socket_args *));
int	osf1_sigreturn __P((struct proc *, struct osf1_sigreturn_args *));
int	osf1_sigsuspend __P((struct proc *, struct osf1_sigsuspend_args *));
int	osf1_osigstack __P((struct proc *, struct osf1_osigstack_args *));
int	osf1_gettimeofday __P((struct proc *, struct osf1_gettimeofday_args *));
int	osf1_getrusage __P((struct proc *, struct osf1_getrusage_args *));
int	osf1_readv __P((struct proc *, struct osf1_readv_args *));
int	osf1_writev __P((struct proc *, struct osf1_writev_args *));
int	osf1_truncate __P((struct proc *, struct osf1_truncate_args *));
int	osf1_ftruncate __P((struct proc *, struct osf1_ftruncate_args *));
int	osf1_setgid __P((struct proc *, struct osf1_setgid_args *));
int	osf1_sendto __P((struct proc *, struct osf1_sendto_args *));
int	osf1_getrlimit __P((struct proc *, struct osf1_getrlimit_args *));
int	osf1_setrlimit __P((struct proc *, struct osf1_setrlimit_args *));
int	osf1_sigaction __P((struct proc *, struct osf1_sigaction_args *));
int	osf1_statfs __P((struct proc *, struct osf1_statfs_args *));
int	osf1_fstatfs __P((struct proc *, struct osf1_fstatfs_args *));
int	osf1_msync __P((struct proc *, struct osf1_msync_args *));
int	osf1_signal __P((struct proc *, struct osf1_signal_args *));
int	osf1_sigaltstack __P((struct proc *, struct osf1_sigaltstack_args *));
int	osf1_sysinfo __P((struct proc *, struct osf1_sysinfo_args *));
int	osf1_proplist_syscall __P((struct proc *, struct osf1_proplist_syscall_args *));
int	osf1_ntpadjtime __P((struct proc *, struct osf1_ntpadjtime_args *));
int	osf1_ntpgettime __P((struct proc *, struct osf1_ntpgettime_args *));
int	osf1_pathconf __P((struct proc *, struct osf1_pathconf_args *));
int	osf1_fpathconf __P((struct proc *, struct osf1_fpathconf_args *));
int	osf1_uswitch __P((struct proc *, struct osf1_uswitch_args *));
int	osf1_usleep_thread __P((struct proc *, struct osf1_usleep_thread_args *));
int	osf1_getsysinfo __P((struct proc *, struct osf1_getsysinfo_args *));
int	osf1_setsysinfo __P((struct proc *, struct osf1_setsysinfo_args *));

#ifdef COMPAT_43


#endif /* COMPAT_43 */

#undef PAD_

#endif /* !_OSF1_SYSPROTO_H_ */
