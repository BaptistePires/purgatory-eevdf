#ifndef __PURGATORY_H
#define __PURGATORY_H

struct cfs_rq;
struct sched_entity;
struct task_struct;


/* Purgatory functions */
inline int purgatory_activated(void);
inline void purgatory_init_se(struct sched_entity *);
inline void purgatory_init_cfs_rq(struct cfs_rq *);
int purgatory_add_se(struct cfs_rq *, struct sched_entity *, int);
void purgatory_remove_se(struct cfs_rq *, struct sched_entity *);
int purgatory_update(struct cfs_rq *);
void purgatory_clear(struct cfs_rq *);
int purgatory_do_clean_on_idle(void);
void purgatory_do_task_dead(struct task_struct *);
#endif