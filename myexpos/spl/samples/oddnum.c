alias counter R0;
counter = 0;
while(counter <= 20) do
  if(counter%2 != 0) then
    print counter;
  endif;
  counter = counter + 1;
endwhile;
