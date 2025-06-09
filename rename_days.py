import os
import re

# Change this to your target directory
base_dir = r"C:\DSA\C++"

# Regex pattern to match folders like 'Day - X' or 'Day - XX'
pattern = re.compile(r"^Day - (\d+)(.*)$")

for folder in os.listdir(base_dir):
    match = pattern.match(folder)
    if match:
        day_num = int(match.group(1))
        suffix = match.group(2)
        new_folder_name = f"Day - {day_num:02d}{suffix}"

        old_path = os.path.join(base_dir, folder)
        new_path = os.path.join(base_dir, new_folder_name)

        if old_path != new_path:
            os.rename(old_path, new_path)
            print(f"Renamed: {folder} ➜ {new_folder_name}")
