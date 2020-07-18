DROP TABLE IF EXISTS classes;

CREATE TABLE IF NOT EXISTS classes (
  class_id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  description TEXT,
  max_hp_curve TEXT NOT NULL,
  max_attk_curve TEXT NOT NULL,
  max_defense_curve TEXT NOT NULL,
  created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
  updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
