#define __NR_syscall                 4000
#define __NR_exit                    4001
#define __NR_fork                    4002
#define __NR_read                    4003
#define __NR_write                   4004
#define __NR_open                    4005
#define __NR_close                   4006
#define __NR_waitpid                 4007
#define __NR_creat                   4008
#define __NR_link                    4009
#define __NR_unlink                  4010
#define __NR_execve                  4011
#define __NR_chdir                   4012
#define __NR_time                    4013
#define __NR_mknod                   4014
#define __NR_chmod                   4015
#define __NR_lchown                  4016
#define __NR_break                   4017
#define __NR_unused18                4018
#define __NR_lseek                   4019
#define __NR_getpid                  4020
#define __NR_mount                   4021
#define __NR_umount                  4022
#define __NR_setuid                  4023
#define __NR_getuid                  4024
#define __NR_stime                   4025
#define __NR_ptrace                  4026
#define __NR_alarm                   4027
#define __NR_unused28                4028
#define __NR_pause                   4029
#define __NR_utime                   4030
#define __NR_stty                    4031
#define __NR_gtty                    4032
#define __NR_access                  4033
#define __NR_nice                    4034
#define __NR_ftime                   4035
#define __NR_sync                    4036
#define __NR_kill                    4037
#define __NR_rename                  4038
#define __NR_mkdir                   4039
#define __NR_rmdir                   4040
#define __NR_dup                     4041
#define __NR_pipe                    4042
#define __NR_times                   4043
#define __NR_prof                    4044
#define __NR_brk                     4045
#define __NR_setgid                  4046
#define __NR_getgid                  4047
#define __NR_signal                  4048
#define __NR_geteuid                 4049
#define __NR_getegid                 4050
#define __NR_acct                    4051
#define __NR_umount2                 4052
#define __NR_lock                    4053
#define __NR_ioctl                   4054
#define __NR_fcntl                   4055
#define __NR_mpx                     4056
#define __NR_setpgid                 4057
#define __NR_ulimit                  4058
#define __NR_unused59                4059
#define __NR_umask                   4060
#define __NR_chroot                  4061
#define __NR_ustat                   4062
#define __NR_dup2                    4063
#define __NR_getppid                 4064
#define __NR_getpgrp                 4065
#define __NR_setsid                  4066
#define __NR_sigaction               4067
#define __NR_sgetmask                4068
#define __NR_ssetmask                4069
#define __NR_setreuid                4070
#define __NR_setregid                4071
#define __NR_sigsuspend              4072
#define __NR_sigpending              4073
#define __NR_sethostname             4074
#define __NR_setrlimit               4075
#define __NR_getrlimit               4076
#define __NR_getrusage               4077
#define __NR_gettimeofday            4078
#define __NR_settimeofday            4079
#define __NR_getgroups               4080
#define __NR_setgroups               4081
#define __NR_reserved82              4082
#define __NR_symlink                 4083
#define __NR_unused84                4084
#define __NR_readlink                4085
#define __NR_uselib                  4086
#define __NR_swapon                  4087
#define __NR_reboot                  4088
#define __NR_readdir                 4089
#define __NR_mmap                    4090
#define __NR_munmap                  4091
#define __NR_truncate                4092
#define __NR_ftruncate               4093
#define __NR_fchmod                  4094
#define __NR_fchown                  4095
#define __NR_getpriority             4096
#define __NR_setpriority             4097
#define __NR_profil                  4098
#define __NR_statfs                  4099
#define __NR_fstatfs                 4100
#define __NR_ioperm                  4101
#define __NR_socketcall              4102
#define __NR_syslog                  4103
#define __NR_setitimer               4104
#define __NR_getitimer               4105
#define __NR_stat                    4106
#define __NR_lstat                   4107
#define __NR_fstat                   4108
#define __NR_unused109               4109
#define __NR_iopl                    4110
#define __NR_vhangup                 4111
#define __NR_idle                    4112
#define __NR_vm86                    4113
#define __NR_wait4                   4114
#define __NR_swapoff                 4115
#define __NR_sysinfo                 4116
#define __NR_ipc                     4117
#define __NR_fsync                   4118
#define __NR_sigreturn               4119
#define __NR_clone                   4120
#define __NR_setdomainname           4121
#define __NR_uname                   4122
#define __NR_modify_ldt              4123
#define __NR_adjtimex                4124
#define __NR_mprotect                4125
#define __NR_sigprocmask             4126
#define __NR_create_module           4127
#define __NR_init_module             4128
#define __NR_delete_module           4129
#define __NR_get_kernel_syms         4130
#define __NR_quotactl                4131
#define __NR_getpgid                 4132
#define __NR_fchdir                  4133
#define __NR_bdflush                 4134
#define __NR_sysfs                   4135
#define __NR_personality             4136
#define __NR_afs_syscall             4137
#define __NR_setfsuid                4138
#define __NR_setfsgid                4139
#define __NR__llseek                 4140
#define __NR_getdents                4141
#define __NR_select                  4142
#define __NR_flock                   4143
#define __NR_msync                   4144
#define __NR_readv                   4145
#define __NR_writev                  4146
#define __NR_cacheflush              4147
#define __NR_cachectl                4148
#define __NR_sysmips                 4149
#define __NR_unused150               4150
#define __NR_getsid                  4151
#define __NR_fdatasync               4152
#define __NR__sysctl                 4153
#define __NR_mlock                   4154
#define __NR_munlock                 4155
#define __NR_mlockall                4156
#define __NR_munlockall              4157
#define __NR_sched_setparam          4158
#define __NR_sched_getparam          4159
#define __NR_sched_setscheduler      4160
#define __NR_sched_getscheduler      4161
#define __NR_sched_yield             4162
#define __NR_sched_get_priority_max  4163
#define __NR_sched_get_priority_min  4164
#define __NR_sched_rr_get_interval   4165
#define __NR_nanosleep               4166
#define __NR_mremap                  4167
#define __NR_accept                  4168
#define __NR_bind                    4169
#define __NR_connect                 4170
#define __NR_getpeername             4171
#define __NR_getsockname             4172
#define __NR_getsockopt              4173
#define __NR_listen                  4174
#define __NR_recv                    4175
#define __NR_recvfrom                4176
#define __NR_recvmsg                 4177
#define __NR_send                    4178
#define __NR_sendmsg                 4179
#define __NR_sendto                  4180
#define __NR_setsockopt              4181
#define __NR_shutdown                4182
#define __NR_socket                  4183
#define __NR_socketpair              4184
#define __NR_setresuid               4185
#define __NR_getresuid               4186
#define __NR_query_module            4187
#define __NR_poll                    4188
#define __NR_nfsservctl              4189
#define __NR_setresgid               4190
#define __NR_getresgid               4191
#define __NR_prctl                   4192
#define __NR_rt_sigreturn            4193
#define __NR_rt_sigaction            4194
#define __NR_rt_sigprocmask          4195
#define __NR_rt_sigpending           4196
#define __NR_rt_sigtimedwait         4197
#define __NR_rt_sigqueueinfo         4198
#define __NR_rt_sigsuspend           4199
#define __NR_pread                   4200
#define __NR_pwrite                  4201
#define __NR_chown                   4202
#define __NR_getcwd                  4203
#define __NR_capget                  4204
#define __NR_capset                  4205
#define __NR_sigaltstack             4206
#define __NR_sendfile                4207
#define __NR_getpmsg                 4208
#define __NR_putpmsg                 4209
#define __NR_mmap2                   4210
#define __NR_truncate64              4211
#define __NR_ftruncate64             4212
#define __NR_stat64                  4213
#define __NR_lstat64                 4214
#define __NR_fstat64                 4215
#define __NR_pivot_root              4216
#define __NR_mincore                 4217
#define __NR_madvise                 4218
#define __NR_getdents64              4219
#define __NR_fcntl64                 4220
#define __NR_reserved221             4221
#define __NR_gettid                  4222
#define __NR_readahead               4223
#define __NR_setxattr                4224
#define __NR_lsetxattr               4225
#define __NR_fsetxattr               4226
#define __NR_getxattr                4227
#define __NR_lgetxattr               4228
#define __NR_fgetxattr               4229
#define __NR_listxattr               4230
#define __NR_llistxattr              4231
#define __NR_flistxattr              4232
#define __NR_removexattr             4233
#define __NR_lremovexattr            4234
#define __NR_fremovexattr            4235
#define __NR_tkill                   4236
#define __NR_sendfile64              4237
#define __NR_futex                   4238
#define __NR_sched_setaffinity       4239
#define __NR_sched_getaffinity       4240
#define __NR_io_setup                4241
#define __NR_io_destroy              4242
#define __NR_io_getevents            4243
#define __NR_io_submit               4244
#define __NR_io_cancel               4245
#define __NR_exit_group              4246
#define __NR_lookup_dcookie          4247
#define __NR_epoll_create            4248
#define __NR_epoll_ctl               4249
#define __NR_epoll_wait              4250
#define __NR_remap_file_pages        4251
#define __NR_set_tid_address         4252
#define __NR_restart_syscall         4253
#define __NR_fadvise                 4254
#define __NR_statfs64                4255
#define __NR_fstatfs64               4256
#define __NR_timer_create            4257
#define __NR_timer_settime           4258
#define __NR_timer_gettime           4259
#define __NR_timer_getoverrun        4260
#define __NR_timer_delete            4261
#define __NR_clock_settime           4262
#define __NR_clock_gettime           4263
#define __NR_clock_getres            4264
#define __NR_clock_nanosleep         4265
#define __NR_tgkill                  4266
#define __NR_utimes                  4267
#define __NR_mbind                   4268
#define __NR_get_mempolicy           4269
#define __NR_set_mempolicy           4270
#define __NR_mq_open                 4271
#define __NR_mq_unlink               4272
#define __NR_mq_timedsend            4273
#define __NR_mq_timedreceive         4274
#define __NR_mq_notify               4275
#define __NR_mq_getsetattr           4276
#define __NR_vserver                 4277
#define __NR_waitid                  4278
#define __NR_add_key                 4280
#define __NR_request_key             4281
#define __NR_keyctl                  4282
#define __NR_set_thread_area         4283
#define __NR_inotify_init            4284
#define __NR_inotify_add_watch       4285
#define __NR_inotify_rm_watch        4286
#define __NR_migrate_pages           4287
#define __NR_openat                  4288
#define __NR_mkdirat                 4289
#define __NR_mknodat                 4290
#define __NR_fchownat                4291
#define __NR_futimesat               4292
#define __NR_fstatat                 4293
#define __NR_unlinkat                4294
#define __NR_renameat                4295
#define __NR_linkat                  4296
#define __NR_symlinkat               4297
#define __NR_readlinkat              4298
#define __NR_fchmodat                4299
#define __NR_faccessat               4300
#define __NR_pselect6                4301
#define __NR_ppoll                   4302
#define __NR_unshare                 4303
#define __NR_splice                  4304
#define __NR_sync_file_range         4305
#define __NR_tee                     4306
#define __NR_vmsplice                4307
#define __NR_move_pages              4308
#define __NR_set_robust_list         4309
#define __NR_get_robust_list         4310
#define __NR_kexec_load              4311
#define __NR_getcpu                  4312
#define __NR_epoll_pwait             4313
#define __NR_ioprio_set              4314
#define __NR_ioprio_get              4315
#define __NR_utimensat               4316
#define __NR_signalfd                4317
#define __NR_timerfd                 4318
#define __NR_eventfd                 4319
#define __NR_fallocate               4320
#define __NR_timerfd_create          4321
#define __NR_timerfd_gettime         4322
#define __NR_timerfd_settime         4323
#define __NR_signalfd4               4324
#define __NR_eventfd2                4325
#define __NR_epoll_create1           4326
#define __NR_dup3                    4327
#define __NR_pipe2                   4328
#define __NR_inotify_init1           4329
#define __NR_preadv                  4330
#define __NR_pwritev                 4331
#define __NR_rt_tgsigqueueinfo       4332
#define __NR_perf_event_open         4333
#define __NR_accept4                 4334
#define __NR_recvmmsg                4335
#define __NR_fanotify_init           4336
#define __NR_fanotify_mark           4337
#define __NR_prlimit64               4338
#define __NR_name_to_handle_at       4339
#define __NR_open_by_handle_at       4340
#define __NR_clock_adjtime           4341
#define __NR_syncfs                  4342
#define __NR_sendmmsg                4343
#define __NR_setns                   4344
#define __NR_process_vm_readv        4345
#define __NR_process_vm_writev       4346
#define __NR_kcmp                    4347
#define __NR_finit_module            4348
#define __NR_sched_setattr           4349
#define __NR_sched_getattr           4350
#define __NR_renameat2               4351
#define __NR_seccomp                 4352
#define __NR_getrandom               4353
#define __NR_memfd_create            4354
#define __NR_bpf                     4355
#define __NR_execveat                4356
#define __NR_userfaultfd             4357
#define __NR_membarrier              4358
#define __NR_mlock2                  4359


/* Repeated with SYS_ prefix */
#define SYS_syscall                 4000
#define SYS_exit                    4001
#define SYS_fork                    4002
#define SYS_read                    4003
#define SYS_write                   4004
#define SYS_open                    4005
#define SYS_close                   4006
#define SYS_waitpid                 4007
#define SYS_creat                   4008
#define SYS_link                    4009
#define SYS_unlink                  4010
#define SYS_execve                  4011
#define SYS_chdir                   4012
#define SYS_time                    4013
#define SYS_mknod                   4014
#define SYS_chmod                   4015
#define SYS_lchown                  4016
#define SYS_break                   4017
#define SYS_unused18                4018
#define SYS_lseek                   4019
#define SYS_getpid                  4020
#define SYS_mount                   4021
#define SYS_umount                  4022
#define SYS_setuid                  4023
#define SYS_getuid                  4024
#define SYS_stime                   4025
#define SYS_ptrace                  4026
#define SYS_alarm                   4027
#define SYS_unused28                4028
#define SYS_pause                   4029
#define SYS_utime                   4030
#define SYS_stty                    4031
#define SYS_gtty                    4032
#define SYS_access                  4033
#define SYS_nice                    4034
#define SYS_ftime                   4035
#define SYS_sync                    4036
#define SYS_kill                    4037
#define SYS_rename                  4038
#define SYS_mkdir                   4039
#define SYS_rmdir                   4040
#define SYS_dup                     4041
#define SYS_pipe                    4042
#define SYS_times                   4043
#define SYS_prof                    4044
#define SYS_brk                     4045
#define SYS_setgid                  4046
#define SYS_getgid                  4047
#define SYS_signal                  4048
#define SYS_geteuid                 4049
#define SYS_getegid                 4050
#define SYS_acct                    4051
#define SYS_umount2                 4052
#define SYS_lock                    4053
#define SYS_ioctl                   4054
#define SYS_fcntl                   4055
#define SYS_mpx                     4056
#define SYS_setpgid                 4057
#define SYS_ulimit                  4058
#define SYS_unused59                4059
#define SYS_umask                   4060
#define SYS_chroot                  4061
#define SYS_ustat                   4062
#define SYS_dup2                    4063
#define SYS_getppid                 4064
#define SYS_getpgrp                 4065
#define SYS_setsid                  4066
#define SYS_sigaction               4067
#define SYS_sgetmask                4068
#define SYS_ssetmask                4069
#define SYS_setreuid                4070
#define SYS_setregid                4071
#define SYS_sigsuspend              4072
#define SYS_sigpending              4073
#define SYS_sethostname             4074
#define SYS_setrlimit               4075
#define SYS_getrlimit               4076
#define SYS_getrusage               4077
#define SYS_gettimeofday            4078
#define SYS_settimeofday            4079
#define SYS_getgroups               4080
#define SYS_setgroups               4081
#define SYS_reserved82              4082
#define SYS_symlink                 4083
#define SYS_unused84                4084
#define SYS_readlink                4085
#define SYS_uselib                  4086
#define SYS_swapon                  4087
#define SYS_reboot                  4088
#define SYS_readdir                 4089
#define SYS_mmap                    4090
#define SYS_munmap                  4091
#define SYS_truncate                4092
#define SYS_ftruncate               4093
#define SYS_fchmod                  4094
#define SYS_fchown                  4095
#define SYS_getpriority             4096
#define SYS_setpriority             4097
#define SYS_profil                  4098
#define SYS_statfs                  4099
#define SYS_fstatfs                 4100
#define SYS_ioperm                  4101
#define SYS_socketcall              4102
#define SYS_syslog                  4103
#define SYS_setitimer               4104
#define SYS_getitimer               4105
#define SYS_stat                    4106
#define SYS_lstat                   4107
#define SYS_fstat                   4108
#define SYS_unused109               4109
#define SYS_iopl                    4110
#define SYS_vhangup                 4111
#define SYS_idle                    4112
#define SYS_vm86                    4113
#define SYS_wait4                   4114
#define SYS_swapoff                 4115
#define SYS_sysinfo                 4116
#define SYS_ipc                     4117
#define SYS_fsync                   4118
#define SYS_sigreturn               4119
#define SYS_clone                   4120
#define SYS_setdomainname           4121
#define SYS_uname                   4122
#define SYS_modify_ldt              4123
#define SYS_adjtimex                4124
#define SYS_mprotect                4125
#define SYS_sigprocmask             4126
#define SYS_create_module           4127
#define SYS_init_module             4128
#define SYS_delete_module           4129
#define SYS_get_kernel_syms         4130
#define SYS_quotactl                4131
#define SYS_getpgid                 4132
#define SYS_fchdir                  4133
#define SYS_bdflush                 4134
#define SYS_sysfs                   4135
#define SYS_personality             4136
#define SYS_afs_syscall             4137
#define SYS_setfsuid                4138
#define SYS_setfsgid                4139
#define SYS__llseek                 4140
#define SYS_getdents                4141
#define SYS_select                  4142
#define SYS_flock                   4143
#define SYS_msync                   4144
#define SYS_readv                   4145
#define SYS_writev                  4146
#define SYS_cacheflush              4147
#define SYS_cachectl                4148
#define SYS_sysmips                 4149
#define SYS_unused150               4150
#define SYS_getsid                  4151
#define SYS_fdatasync               4152
#define SYS__sysctl                 4153
#define SYS_mlock                   4154
#define SYS_munlock                 4155
#define SYS_mlockall                4156
#define SYS_munlockall              4157
#define SYS_sched_setparam          4158
#define SYS_sched_getparam          4159
#define SYS_sched_setscheduler      4160
#define SYS_sched_getscheduler      4161
#define SYS_sched_yield             4162
#define SYS_sched_get_priority_max  4163
#define SYS_sched_get_priority_min  4164
#define SYS_sched_rr_get_interval   4165
#define SYS_nanosleep               4166
#define SYS_mremap                  4167
#define SYS_accept                  4168
#define SYS_bind                    4169
#define SYS_connect                 4170
#define SYS_getpeername             4171
#define SYS_getsockname             4172
#define SYS_getsockopt              4173
#define SYS_listen                  4174
#define SYS_recv                    4175
#define SYS_recvfrom                4176
#define SYS_recvmsg                 4177
#define SYS_send                    4178
#define SYS_sendmsg                 4179
#define SYS_sendto                  4180
#define SYS_setsockopt              4181
#define SYS_shutdown                4182
#define SYS_socket                  4183
#define SYS_socketpair              4184
#define SYS_setresuid               4185
#define SYS_getresuid               4186
#define SYS_query_module            4187
#define SYS_poll                    4188
#define SYS_nfsservctl              4189
#define SYS_setresgid               4190
#define SYS_getresgid               4191
#define SYS_prctl                   4192
#define SYS_rt_sigreturn            4193
#define SYS_rt_sigaction            4194
#define SYS_rt_sigprocmask          4195
#define SYS_rt_sigpending           4196
#define SYS_rt_sigtimedwait         4197
#define SYS_rt_sigqueueinfo         4198
#define SYS_rt_sigsuspend           4199
#define SYS_pread                   4200
#define SYS_pwrite                  4201
#define SYS_chown                   4202
#define SYS_getcwd                  4203
#define SYS_capget                  4204
#define SYS_capset                  4205
#define SYS_sigaltstack             4206
#define SYS_sendfile                4207
#define SYS_getpmsg                 4208
#define SYS_putpmsg                 4209
#define SYS_mmap2                   4210
#define SYS_truncate64              4211
#define SYS_ftruncate64             4212
#define SYS_stat64                  4213
#define SYS_lstat64                 4214
#define SYS_fstat64                 4215
#define SYS_pivot_root              4216
#define SYS_mincore                 4217
#define SYS_madvise                 4218
#define SYS_getdents64              4219
#define SYS_fcntl64                 4220
#define SYS_reserved221             4221
#define SYS_gettid                  4222
#define SYS_readahead               4223
#define SYS_setxattr                4224
#define SYS_lsetxattr               4225
#define SYS_fsetxattr               4226
#define SYS_getxattr                4227
#define SYS_lgetxattr               4228
#define SYS_fgetxattr               4229
#define SYS_listxattr               4230
#define SYS_llistxattr              4231
#define SYS_flistxattr              4232
#define SYS_removexattr             4233
#define SYS_lremovexattr            4234
#define SYS_fremovexattr            4235
#define SYS_tkill                   4236
#define SYS_sendfile64              4237
#define SYS_futex                   4238
#define SYS_sched_setaffinity       4239
#define SYS_sched_getaffinity       4240
#define SYS_io_setup                4241
#define SYS_io_destroy              4242
#define SYS_io_getevents            4243
#define SYS_io_submit               4244
#define SYS_io_cancel               4245
#define SYS_exit_group              4246
#define SYS_lookup_dcookie          4247
#define SYS_epoll_create            4248
#define SYS_epoll_ctl               4249
#define SYS_epoll_wait              4250
#define SYS_remap_file_pages        4251
#define SYS_set_tid_address         4252
#define SYS_restart_syscall         4253
#define SYS_fadvise                 4254
#define SYS_statfs64                4255
#define SYS_fstatfs64               4256
#define SYS_timer_create            4257
#define SYS_timer_settime           4258
#define SYS_timer_gettime           4259
#define SYS_timer_getoverrun        4260
#define SYS_timer_delete            4261
#define SYS_clock_settime           4262
#define SYS_clock_gettime           4263
#define SYS_clock_getres            4264
#define SYS_clock_nanosleep         4265
#define SYS_tgkill                  4266
#define SYS_utimes                  4267
#define SYS_mbind                   4268
#define SYS_get_mempolicy           4269
#define SYS_set_mempolicy           4270
#define SYS_mq_open                 4271
#define SYS_mq_unlink               4272
#define SYS_mq_timedsend            4273
#define SYS_mq_timedreceive         4274
#define SYS_mq_notify               4275
#define SYS_mq_getsetattr           4276
#define SYS_vserver                 4277
#define SYS_waitid                  4278
#define SYS_add_key                 4280
#define SYS_request_key             4281
#define SYS_keyctl                  4282
#define SYS_set_thread_area         4283
#define SYS_inotify_init            4284
#define SYS_inotify_add_watch       4285
#define SYS_inotify_rm_watch        4286
#define SYS_migrate_pages           4287
#define SYS_openat                  4288
#define SYS_mkdirat                 4289
#define SYS_mknodat                 4290
#define SYS_fchownat                4291
#define SYS_futimesat               4292
#define SYS_fstatat                 4293
#define SYS_unlinkat                4294
#define SYS_renameat                4295
#define SYS_linkat                  4296
#define SYS_symlinkat               4297
#define SYS_readlinkat              4298
#define SYS_fchmodat                4299
#define SYS_faccessat               4300
#define SYS_pselect6                4301
#define SYS_ppoll                   4302
#define SYS_unshare                 4303
#define SYS_splice                  4304
#define SYS_sync_file_range         4305
#define SYS_tee                     4306
#define SYS_vmsplice                4307
#define SYS_move_pages              4308
#define SYS_set_robust_list         4309
#define SYS_get_robust_list         4310
#define SYS_kexec_load              4311
#define SYS_getcpu                  4312
#define SYS_epoll_pwait             4313
#define SYS_ioprio_set              4314
#define SYS_ioprio_get              4315
#define SYS_utimensat               4316
#define SYS_signalfd                4317
#define SYS_timerfd                 4318
#define SYS_eventfd                 4319
#define SYS_fallocate               4320
#define SYS_timerfd_create          4321
#define SYS_timerfd_gettime         4322
#define SYS_timerfd_settime         4323
#define SYS_signalfd4               4324
#define SYS_eventfd2                4325
#define SYS_epoll_create1           4326
#define SYS_dup3                    4327
#define SYS_pipe2                   4328
#define SYS_inotify_init1           4329
#define SYS_preadv                  4330
#define SYS_pwritev                 4331
#define SYS_rt_tgsigqueueinfo       4332
#define SYS_perf_event_open         4333
#define SYS_accept4                 4334
#define SYS_recvmmsg                4335
#define SYS_fanotify_init           4336
#define SYS_fanotify_mark           4337
#define SYS_prlimit64               4338
#define SYS_name_to_handle_at       4339
#define SYS_open_by_handle_at       4340
#define SYS_clock_adjtime           4341
#define SYS_syncfs                  4342
#define SYS_sendmmsg                4343
#define SYS_setns                   4344
#define SYS_process_vm_readv        4345
#define SYS_process_vm_writev       4346
#define SYS_kcmp                    4347
#define SYS_finit_module            4348
#define SYS_sched_setattr           4349
#define SYS_sched_getattr           4350
#define SYS_renameat2               4351
#define SYS_seccomp                 4352
#define SYS_getrandom               4353
#define SYS_memfd_create            4354
#define SYS_bpf                     4355
#define SYS_execveat                4356
#define SYS_userfaultfd             4357
#define SYS_membarrier              4358
#define SYS_mlock2                  4359
