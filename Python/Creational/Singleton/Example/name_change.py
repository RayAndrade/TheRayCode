from pathlib import Path

# Exact directory containing the screenshots
folder = Path("/home/theraycode/Pictures/Screenshots/current")

# Find the screenshot files and put them in chronological order
files = sorted(folder.glob("Screenshot From *.png"))

print(f"Directory: {folder}")
print(f"Found {len(files)} screenshot files.\n")

# Show proposed changes
for number, old_file in enumerate(files):
    new_name = f"s_{number:02d}.png"
    print(f"{old_file.name}")
    print(f"    -> {new_name}")

# Don't do anything if no files were found
if not files:
    print("\nERROR: No screenshot files were found.")
    raise SystemExit

# Ask before renaming
answer = input("\nRename these files? (y/n): ")

if answer.lower() != "y":
    print("Nothing was changed.")
    raise SystemExit

# Rename the files
for number, old_file in enumerate(files):
    new_file = folder / f"s_{number:02d}.png"

    old_file.rename(new_file)

    print(f"{old_file.name}")
    print(f"    -> {new_file.name}")

print("\nDone!")