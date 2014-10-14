# ~/.bashrc: executed by bash(1) for non-login shells.
# see /usr/share/doc/bash/examples/startup-files (in the package bash-doc)
# for examples

#export TERM="xterm-256color"
export LANG=en_US.utf8

# If not running interactively, don't do anything
[ -z "$PS1" ] && return

# don't put duplicate lines in the history. See bash(1) for more options
export HISTCONTROL=ignoredups

# check the window size after each command and, if necessary,
# update the values of LINES and COLUMNS.
shopt -s checkwinsize

# make less more friendly for non-text input files, see lesspipe(1)
[ -x /usr/bin/lesspipe ] && eval "$(lesspipe)"

# set variable identifying the chroot you work in (used in the prompt below)
if [ -z "$debian_chroot" ] && [ -r /etc/debian_chroot ]; then
    debian_chroot=$(cat /etc/debian_chroot)
fi

# set a fancy prompt (non-color, unless we know we "want" color)
case "$TERM" in
xterm-color)
    PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '
    ;;
*)
    PS1='${debian_chroot:+($debian_chroot)}\u@\h:\w\$ '
    ;;
esac

# Comment in the above and uncomment this below for a color prompt
#PS1='${debian_chroot:+($debian_chroot)}\[\033[01;32m\]\u@\h\[\033[00m\]:\[\033[01;34m\]\w\[\033[00m\]\$ '

# If this is an xterm set the title to user@host:dir
case "$TERM" in
xterm*|rxvt*)
    PROMPT_COMMAND='echo -ne "\033]0;${USER}@${HOSTNAME}: ${PWD/$HOME/~}\007"'
    ;;
*)
    ;;
esac


# enable color support of ls and also add handy aliases
if [ "$TERM" != "dumb" ]; then
    eval "`dircolors -b`"
    alias ls='ls --color=auto'
fi


# enable programmable completion features (you don't need to enable
# this, if it's already enabled in /etc/bash.bashrc and /etc/profile
# sources /etc/bash.bashrc).
if [ -f /etc/bash_completion ]; then
    . /etc/bash_completion
fi

# Less Colors for Man Pages
export LESS_TERMCAP_mb=$'\E[01;31m'       # begin blinking
export LESS_TERMCAP_md=$'\E[01;38;5;74m'  # begin bold
export LESS_TERMCAP_me=$'\E[0m'           # end mode
export LESS_TERMCAP_se=$'\E[0m'           # end standout-mode
export LESS_TERMCAP_so=$'\E[38;5;246m'    # begin standout-mode - info box
export LESS_TERMCAP_ue=$'\E[0m'           # end underline
export LESS_TERMCAP_us=$'\E[04;38;5;146m' # begin underline

export GREP_OPTIONS='--color=auto'

export PATH=$PATH:/usr/local/dawn_3_90b:/usr/local/root/bin

# GEANT4
# old style:
#export G4INSTALL=/usr/local/geant4.9.4.p04 
#source $G4INSTALL/env.sh
#export G4WORKDIR=/mnt/scratch/g4work:
#LD_LIB...$G4INSTALL/lib
# new style:
export G4INSTALL=/usr/local
source $G4INSTALL/bin/geant4.sh

#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$

#geant3 
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/geant3/lib/tgt_linux

# VGM 
#export VGM_INSTALL=/usr/local/vgm
#export USE_VGM=1
#export VGM_SYSTEM=Linux-g++
#export VGM_NO_AGDD=1
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$VGM_INSTALL/lib

# DAWN vis for geant4
export DAWN_PS_PREVIEWER="gv "
export G4VRMLFILE_VIEWER="gtklookat "
#export G4DAWNFILE_VIEWER=david
export G4DAWNFILE_VIEWER=dawn
#export G4DAWNFILE_VIEWER="dawn -d"
# 0,1,a (a is append mode for eps)
export DAWN_BATCH="0"
export G4DAWNFILE_MAX_FILE_NUM=500
export DAWN_BFC_MODE="1"
export G4DAWNFILE_DEST_DIR=/home/whit/sane08/BETAG4/run/dawn_files/

# ROOT
export ROOTSYS=/usr/local/root
export PYTHONPATH=$ROOTSYS/lib:$HOME/lib:$PYTHONPATH
export LD_LIBRARY_PATH=$ROOTSYS/lib:$LD_LIBRARY_PATH
export PATH=$ROOTSYS/bin:$PATH

# xrood
export PATH=$PATH:/usr/local/xrootd-3.2.7/bin
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/xrootd-3.2.7/lib

# InSANE
export InSANEDIR=/home/whit/sane08/InSANE
export InSANELOG=/home/whit/sane08/log
export InSANE_USE_LHAPDF=1
export InSANE_DB_PATH=/home/whit/sane08/sane08_database/sqlite
export InSANE_PDF_GRID_DIR=/home/whit/sane08/InSANE/main/grid
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$InSANEDIR/lib:$HOME/lib
source /home/whit/sane08/InSANE/main/bashfunctions.sh
export PATH=$PATH:$InSANEDIR/bin
export PYTHONPATH=$InSANEDIR/lib:$PYTHONPATH:$InSANEDIR/python 
export InSANE_DB_SERVER=quarks.temple.edu
#alias sanedb='sqlite3 $InSANE_DB_PATH/SANE.db'


#Xerces
export XERCESCROOT=/usr/local/xerces-c-src_2_7_0
export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/xerces-c-src_2_7_0/lib

#Qt
export QTDIR=/usr/local/Trolltech/Qt-4.8.3
#/usr/local/qt
#export PATH=$PATH:$QTDIR/bin
#export MANPATH=$MANPATH:QTDIR/doc/man
export LD_LIBRARY_PATH=$QTDIR/lib:$LD_LIBRARY_PATH


#cal/include/qt
# OpenGL 
#export OGLHOME=/usr
#export OGLFLAGS=" -I$OGLHOME"
#export OGLLIBS=" -L$OGLHOME/lib -lGLU "
#export XMFLAGS=" -I/usr"
#export XMLIBS=" -L/usr/lib -lXm -lXpm"

# Java
#export JAVA_HOME=/usr/lib/jvm/java-7-icedtea
#export JDK_HOME=/usr/lib/jvm/java-7-icedtea
export JAVA_HOME=/usr/java/jdk1.6.0_21
export JAVA_BINDIR=$JAVA_HOME/bin
export CLASSPATH="$CLASSPATH;$HOME/lib;/usr/java/lib;./lib;"
# Java based tools 
#export JAIDA_HOME=/usr/local/JAIDA-3.2.4
#source $JAIDA_HOME/bin/aida-setup.sh
#export AIDAJNI_HOME=/usr/local/AIDAJNI-3.2.3
#source $AIDAJNI_HOME/bin/Linux-g++/aidajni-setup.sh
# the following block is for AIDA+GEANT4+JAIDA usage
# for some reason i need this to write multiple aida files... don't know why...
# Going to switch from aida to ROOT ... sorry aida needs to grow up...
# export DO_NOT_DESTROY_JVM=1
# controls the max memory for java heap size 
# set to 1.5 Gb
# export JVM_ARGS=-Xmx1536m
# the following is for AIDAJNI debugging 
#set to 1 for debugging
#export JNI_SHOW_DEBUG=0

export GCCXMLPATH=/usr/local


# CERNLIB
export CERN=/home/whit/cernlib
#export CERN=/home/whit/cernlib_gcc43
export CERN_LEVEL=2006b
export CERN_ROOT=$CERN/$CERN_LEVEL
#export CVSCOSRC=$CERN/$CERN_LEVEL/src
export PATH=$CERN_ROOT/bin:$PATH

#export CERNLIB=/usr/lib

# HALL A ANALYZER OLD
#export DB_DIR=/usr/local/analyzer-1.4.9
#export PATH=$PATH:/usr/local/Canalyzer-1.5.12
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/Canalyzer-1.5.12

# HALL C ANALYZER
export CVSROOT=whit@cvs.jlab.org:/group/hallc/cvsroot
export ANALYZER=/home/whit/hcana/podd
#export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ANALYZER:$ANALYZER/podd


export EDITOR=vim

# LaTeX 
  export TEXINPUTS=.:$HOME/latex:$TEXINPUTS:$HOME/texmf/:  
  #export TEXINPUTS=$TEXINPUTS:$HOME/texmf/elsarticle
  export LATEXINPUTS=$TEXINPUTS
  # bibtex
  export BIBINPUTS=.:$HOME/bib/:
  #bibtex styles
  export BSTINPUTS=.:$BSTINPUTS:$HOME/texmf/bst/:/usr/share/texmf-texlive/bibtex/:
  export  DVIPSHEADERS=$TEXINPUTS
  ### MAVEN

  
  
#export M2_HOME=/usr/local/apache-maven-2.2.1
#export PATH=$PATH:${M2_HOME}/bin

export PATH=$PATH:/usr/local/nanoblogger
export BLOG_DIR=/home/whit/public_html/femtoblog

## exjpsi
## set the experiment group disk location
## this assumes that the directory "run" exists there
#  export ExJPSIDIR=/home/whit/work/SimuPsi
#  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$ExJPSIDIR/lib
#  export PATH=$ExJPSIDIR/bin:$PATH
## set the directory of your SimuPsi with the following
#  export SIMUHALLCDIR=/home/whit/work/SimuPsi
#  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$SIMUHALLCDIR/lib
## Because it is last, bash uses the SimuHallC found in $ExJPSIDIR/bin not your SIMUHALLCDIR
#  export PATH=$ExJPSIDIR/bin:$PATH
## sets the WEvents directory... 
#  export WEVENTSDIR=/home/whit/work/WEvents
#  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$WEVENTSDIR/lib


# TempleQFS\
#  export TempleQFSDIR=/home/whit/sane08/cross-sections/templeQFS
#  export TempleQFSLIB=/home/whit/lib
#  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$TempleQFSLIB

#  export QTDIR=/usr/share/qt4

# easy_install
# directions from http://mg.pov.lt/blog/easy-easy-install.html
#  export PYTHONPATH=$HOME/py-lib:$PYTHONPATH 
#  alias easy_install="easy_install -s ~/bin -d ~/py-lib"

# SAGE
  #export SAGE_DIR=/usr/local/sage-4.7.2
  #export SAGE_BROWSER="firefox"


 #NucDB
  export NucDB_DIR=$HOME/work/NucDB 
  export NucDB_DATA_DIR=$NucDB_DIR/data
  export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$NucDB_DIR/lib
  export PYTHONPATH=$PYTHONPATH:$NucDB_DIR/python    

# PYTHIA6
  export PYTHIA6=/usr/local/pythia6

# GLOBUS
  export PATH=$PATH:/home/globus/bin

# gcc 
#  export GCCDIR=$HOME/gcc/4.8.2
#  export PATH=$GCCDIR/bin:$PATH
#  export LD_LIBRARY_PATH=$GCCDIR/lib:$LD_LIBRARY_PATH:$GCCDIR/lib
#export CPATH=/usr/local/include

if [ -n "$DISPLAY" ]; then
   export BROWSER=firefox
else
   export BROWSER=links
fi

export PATH=$HOME/bin:/usr/local/bin:$PATH
export LD_LIBRARY_PATH=/usr/local/lib:$LD_LIBRARY_PATH
export LD_LIBRARY_PATH=$HOME/lib:$HOME/lib64:$LD_LIBRARY_PATH

export GCC_COLORS=1
clear

set -o vi

echo "Remember you are in vi mode!"

export MANPATH=$HOME/share/man:$MANPATH

# Alias definitions.
# You may want to put all your additions into a separate file like
# ~/.bash_aliases, instead of adding them here directly.
# See /usr/share/doc/bash-doc/examples in the bash-doc package.

if [ -f ~/.bash_aliases ]; then
    . ~/.bash_aliases
fi

