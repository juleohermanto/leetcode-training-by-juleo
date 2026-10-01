# Write your MySQL query statement below
SELECT w.id FROM Weather w, Weather x WHERE DATEDIFF(w.recordDate, x.recordDate) = 1 AND w.temperature > x.temperature;