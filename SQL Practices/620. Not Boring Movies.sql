sELECt id, movie, description, rating from Cinema where not id%2 = 0 AND description <> "boring" order BY rating DESC;

sELECt * from Cinema where id%2 <> 0 AND description <> "boring" order BY rating DESC;