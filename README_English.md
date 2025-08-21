# Event Agenda Manager in C

Exercise for the **Algorithms 2** course (Information Systems, UFMS CPTL) to manage an event agenda. The program allows you to register, consult, and organize events, with conflict control.

## Features

- **Event Registration**  
  Allows adding description, location, start and end dates, and start and end times.

- **Conflict Detection**  
  If a new event overlaps existing events, the program lists the conflicts and offers options:
  - Keep the event anyway  
  - Modify the new event  
  - Modify the old event  
  - Do not register the new event  
  - Remove the old event  

- **Consult Events by Date and Time**  
  For each ongoing event, displays:
  - Description  
  - Start time  
  - Elapsed time since start  
  - Remaining time until the end  

- **List Events for a Specific Day**  
  Shows all events in chronological order, including:
  - Description  
  - Start and end times  
  - Total duration  
  - Indication of overlap with other events  

## Code Structure

- Uses **structs** to represent events  
- Handles dates and times in structured format  
- Can manage up to **500 events** simultaneously  

## How to Use

1. Compile the program:
```bash
gcc -o agenda agenda.c
```

2. Run the program:
```bash
./agenda
```

3. Follow the menu instructions to:
- Register events  
- Consult events for a specific date and time  
- List all events for a specific day

## Notes

- This program is a basic event manager, ideal for academic purposes or as a basis for more advanced projects.  
- Developed in **C** as a practical exercise in logic, data structures, and date/time handling.
