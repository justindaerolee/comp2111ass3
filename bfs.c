\documentclass[headings=small,a4paper,12pt]{scrartcl}
\usepackage{nicefrac}
\usepackage{2111defs2}
%
%\newcommand{\sorted}[3]{\mathit{s'ed}(#1[#2..#3])}
\newcommand{\sort}[3]{\mathit{sort}(#1[#2..#3])}
\newcommand{\pre}{\mathit{pre}}
\newcommand{\post}{\mathit{post}}
\newcommand{\bfs}{\textsc{breath first search}\xspace}
\newcommand{\srh}{\textsc{search}\xspace}
\newcommand{\qu}{\textsc{queue}\xspace}
%
\title{Derivation of $\bfs$\\
\large COMP2111 assignment 3}
%
\author{Dae Ro Lee z5060887 and Wing Feng z11111111}
\allowdisplaybreaks
%
\begin{document}
\maketitle
%
\section{Introduction}
\label{sec:introduction}
The derivation of $\bfs$ on a tree using a bounded $\qu$. 
%
\section{The Derivation}
\label{sec:derivation}
\begin{align*}
  &\PROC~\srh(\VALUE~t, \VALUE~N, \VALUE~k, \RESULT~v, \RESULT~f)\cdot{}\\
   &\qquad  \nt{t,N,k,v,f:\left[
    \begin{array}{l}
     \forall x\in V_t(x\in \Gamma^{*}_{t}(r_t)\And x \notin\Gamma^{+}_{t}(x))\And\max_{i\in\mathbb{N}}|\Gamma_t^{i}(r_t)\cup\Gamma_{t}^{i+1}(r_t)|\leq N,\\
     (f\And\exists w\in V_{t_0}(k_t_0(w)=k_0\And\lambda_{t_0}(w)=v))\Or\\
     (\Not f\And\forall w\in V_{t_0}(k_{t_0}(w)\neq~k_0))
    \end{array}
  \right]}{(1)}\\
%
  \lrefstep{(1)}
  {\textbf{c-frame}}
  {v,f:\left[
    \begin{array}{l}
     \forall x\in V_t(x\in \Gamma^{*}_{t}(r_t)\And x \notin\Gamma^{+}_{t}(x))\And\max_{i\in\mathbb{N}}|\Gamma_t^{i}(r_t)\cup\Gamma_{t}^{i+1}(r_t)|\leq N,\\
     (f\And\exists w\in V_{t}(k_t(w)=k\And\lambda_t(w)=v))\Or\\
     (\Not f\And\forall w\in V_t(k_t(w)\neq~k))
    \end{array}
  \right]}\\
  \refstep{\textbf{introduce local variable}}
  {\VAR~q\cdot{}\nt{q,v,f:\left[
    \begin{array}{l}
     \forall x\in V_t(x\in \Gamma^{*}_{t}(r_t)\And x \notin\Gamma^{+}_{t}(x))\And\max_{i\in\mathbb{N}}|\Gamma_t^{i}(r_t)\cup\Gamma_{t}^{i+1}(r_t)|\leq N,\\
     (f\And\exists w\in V_{t}(k_t(w)=k\And\lambda_t(w)=v))\Or\\
     (\Not f\And\forall w\in~V_t(k_t(w)\neq~k))
    \end{array}
  \right]}{(2)}}\\
\end{align*}
%
\begin{align*}
  &\PROC~enq(q, \VALUE~v,n)\cdot{}\\
    &\qquad n,q:[n<N \And q=q_0\And q \neq <>,q=q_0\cup\{v\}]\\
%
  \refstep{\textbf{}}
  {}
\end{align*}
\end{document}
