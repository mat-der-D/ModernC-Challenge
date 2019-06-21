program mkdir

  implicit none

  integer :: n
  character(100) :: header = "mkdir prob_", number, dirname

  open(10, file="MakeProbDir.sh")
  write(10,*) "#!/bin/bash"
  
  do n = 1, 100
     write(number,'(i3.3)') n
     dirname = trim(header) // trim(number)
     write(10,*) trim(dirname)
  end do

  close(10)
  
end program mkdir
