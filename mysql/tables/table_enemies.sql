# 'type' determines what 3d model/rig is used for the enemy (gel is like a slime)
# 'scale' determines how difficult the enemy is; F is the weakest, X is the strongest
# 'exp_gain' is how much exp is gained by the player on defeat of the enemy
CREATE TABLE IF NOT EXISTS enemies (
    enemy_id INT NOT NULL AUTO_INCREMENT,
    name VARCHAR(255) NOT NULL,
    image VARCHAR(255) NOT NULL,
    type ENUM('humanoid', 'gel'),
    scale ENUM('F', 'E', 'D', 'C', 'B', 'A', 'S', 'X'),
    hp INT NOT NULL,
    exp_gain INT NOT NULL,
    description TEXT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP,
    PRIMARY KEY (enemy_id)
);

ALTER TABLE enemies
DROP COLUMN type,
DROP COLUMN hp;

ALTER TABLE enemies MODIFY COLUMN scale ENUM('', 'F', 'E', 'D', 'C', 'B', 'A', 'S', 'X') NOT NULL;

ALTER TABLE enemies ADD FOREIGN KEY(type_id) REFERENCES types(type_id);
ALTER TABLE enemies ADD FOREIGN KEY(class_id) REFERENCES classes(class_id);
