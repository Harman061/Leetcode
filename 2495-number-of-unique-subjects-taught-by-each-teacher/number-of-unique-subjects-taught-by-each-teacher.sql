# Write your MySQL query statement below
SELECT DISTINCT teacher_id,count(distinct subject_id ) as cnt
FROM Teacher
GROUP BY teacher_id;