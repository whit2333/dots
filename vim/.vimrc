execute pathogen#infect()
syntax on
set laststatus=2        " grey status bar at the bottom
set shiftwidth=3
set expandtab
filetype indent on      " activates indenting for files
"set ai                  " auto indenting
"set nu                  " line numbers
set ic                  " case insensitive search

colorscheme wombat      " colorscheme desert

let g:load_doxygen_syntax=1

" Uncomment the following to have Vim jump to the last position when                                                       
" reopening a file
if has("autocmd")
	  au BufReadPost * if line("'\"") > 0 && line("'\"") <= line("$")
	      \| exe "normal! g'\"" | endif
  endif

autocmd Filetype python setlocal expandtab tabstop=4 shiftwidth=4

"set spell spelllang=en_us

"dragvisuals allows for moving around visual blocks
runtime plugin/dragvisuals.vim 
vmap  <expr>  <LEFT>   DVB_Drag('left') 
vmap  <expr>  <RIGHT>  DVB_Drag('right')
vmap  <expr>  <DOWN>   DVB_Drag('down') 
vmap  <expr>  <UP>     DVB_Drag('up')   
"vmap  <expr>  D        DVB_Duplicate()  

"##     " Remove any introduced trailing whitespace after moving...     ##
let g:DVB_TrimWS = 1

runtime plugin/vmath.vim
vmap <expr> ++ VMATH_YankAndAnalyse()
nmap        ++ vip++

" mutt
au! BufRead,BufNewFile /tmp/mutt-*    set fo+=aw

" latex
"au! BufRead,BufNewFile *.tex    set fo+=aw

