DROP TABLE IF EXISTS types;

CREATE TABLE IF NOT EXISTS types (
  type_id INTEGER PRIMARY KEY,
  name TEXT NOT NULL,
  description TEXT,
  created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
  updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);
