#!/usr/bin/env ruby -W
# Answer is 233168
sum = 0
3.upto(999) do |i|
  if i % 3 == 0 || i % 5 == 0
    sum += i
  end
end
puts sum