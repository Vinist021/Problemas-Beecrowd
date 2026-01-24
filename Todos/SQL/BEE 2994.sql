SELECT d.name, ROUND(SUM((a.hours * 150) * (1 + (ws.bonus / 100))), 1) AS salary
FROM doctors d
JOIN attendances a 
ON  a.id_doctor = d.id
JOIN work_shifts ws
ON a.id_work_shift = ws.id
GROUP BY d.name
ORDER BY salary DESC