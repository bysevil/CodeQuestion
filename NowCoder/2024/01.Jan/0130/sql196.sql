https://www.nowcoder.com/practice/ec1ca44c62c14ceb990c3c40def1ec6c?tpId=82&tqId=29754&tPage=1&rp=&ru=%2Fta%2Fsql&qru=%2Fta%2Fsql%2Fquestion-ranking

select *
from employees
where hire_date=
(select distinct hire_date
from employees
order by hire_date desc
limit 2,1
)