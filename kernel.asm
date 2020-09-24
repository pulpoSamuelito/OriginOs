bits    32
section         .text    
        align   4
        dd      0x1BADB002
        dd      0x00
        dd      - (0x1BADB002+0x00)

global start
extern omain            ; cette fonction est contenue dans le fichier kernel.c
start:
        cli             ; cli(clears the interrupts)
        call omain      ; Demande au processeur de continuer l'exécution à partir de la fonction omain
        hlt             ; hlt(halt) permet de mettre le cpu en pause