DROP TABLE IF EXISTS enemies;

CREATE TABLE IF NOT EXISTS enemies (
  enemy_id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  image TEXT,
  level INTEGER NOT NULL,
  exp_gain INTEGER NOT NULL,
  description TEXT NOT NULL,
  created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
  updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
  type_id INTEGER,
  class_id INTEGER,
  FOREIGN KEY (type_id) 
    REFERENCES types (type_id),
  FOREIGN KEY (class_id)
    REFERENCES classes (class_id)
);
