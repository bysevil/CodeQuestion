https://www.nowcoder.com/practice/6d4a4cff1d58495182f536c548fee1ae?tpId=82&tqId=29759&tPage=1&rp=&ru=%2Fta%2Fsql&qru=%2Fta%2Fsql%2Fquestion-ranking

select emp_no,count(emp_no) t
from salaries
group by emp_no
having t > 15
;