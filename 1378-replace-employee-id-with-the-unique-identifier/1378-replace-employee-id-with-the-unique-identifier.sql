# Write your MySQL query statement below
SELECT e.name, emp.unique_id FROM Employees as e LEFT JOIN EmployeeUNI AS emp ON e.id=emp.id;