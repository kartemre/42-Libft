MEMCPY(3)                                      Linux Programmer's Manual                                     MEMCPY(3)

NNAAMMEE
       memcpy - copy memory area

SSYYNNOOPPSSIISS
       ##iinncclluuddee <<ssttrriinngg..hh>>

       vvooiidd **mmeemmccppyy((vvooiidd **_d_e_s_t,, ccoonnsstt vvooiidd **_s_r_c,, ssiizzee__tt _n));;

DDEESSCCRRIIPPTTIIOONN
       The mmeemmccppyy() function copies _n bytes from memory area _s_r_c to memory area _d_e_s_t.  The memory areas must not over‐
       lap.  Use mmeemmmmoovvee(3) if the memory areas do overlap.

RREETTUURRNN VVAALLUUEE
       The mmeemmccppyy() function returns a pointer to _d_e_s_t.

AATTTTRRIIBBUUTTEESS
       For an explanation of the terms used in this section, see aattttrriibbuutteess(7).

       ┌──────────┬───────────────┬─────────┐
       │IInntteerrffaaccee │ AAttttrriibbuuttee     │ VVaalluuee   │
       ├──────────┼───────────────┼─────────┤
       │mmeemmccppyy()  │ Thread safety │ MT-Safe │
       └──────────┴───────────────┴─────────┘
CCOONNFFOORRMMIINNGG TTOO
       POSIX.1-2001, POSIX.1-2008, C89, C99, SVr4, 4.3BSD.

NNOOTTEESS
       Failure to observe the requirement that the memory areas do not overlap has  been  the  source  of  significant
       bugs.   (POSIX  and  the C standards are explicit that employing mmeemmccppyy() with overlapping areas produces unde‐
       fined behavior.)  Most notably, in glibc 2.13 a performance optimization of mmeemmccppyy() on some platforms (includ‐
       ing x86-64) included changing the order in which bytes were copied from _s_r_c to _d_e_s_t.

       This  change revealed breakages in a number of applications that performed copying with overlapping areas.  Un‐
       der the previous implementation, the order in which the bytes were copied  had  fortuitously  hidden  the  bug,
       which  was  revealed  when the copying order was reversed.  In glibc 2.14, a versioned symbol was added so that
       old binaries (i.e., those linked against glibc versions earlier than 2.14) employed a  mmeemmccppyy()  implementation
       that  safely  handles  the  overlapping  buffers case (by providing an "older" mmeemmccppyy() implementation that was
       aliased to mmeemmmmoovvee(3)).

SSEEEE AALLSSOO
       bbccooppyy(3), bbssttrriinngg(3), mmeemmccccppyy(3), mmeemmmmoovvee(3), mmeemmppccppyy(3), ssttrrccppyy(3), ssttrrnnccppyy(3), wwmmeemmccppyy(3)

CCOOLLOOPPHHOONN
       This page is part of release 5.10 of the Linux _m_a_n_-_p_a_g_e_s project.  A description of  the  project,  information
       about    reporting    bugs,    and    the    latest    version    of    this    page,    can    be   found   at
       https://www.kernel.org/doc/man-pages/.

                                                      2017-09-15                                             MEMCPY(3)
