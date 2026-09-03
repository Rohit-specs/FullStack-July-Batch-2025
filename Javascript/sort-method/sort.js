// sort() = method used to sort elements of an array in place.
            // Sorts elements as strings in lexicographic order,
            // lexicorgraphic= {alphabel + numbers + symbols}

const users = [
  { id: 1, name: "Anand", role: "Admin", active: true },
  { id: 2, name: "Riya", role: "Editor", active: false },
  { id: 3, name: "Karan", role: "Viewer", active: true },
  { id: 4, name: "Meera", role: "Editor", active: true }
];

users.sort((a,b)=>a.name.localeCompare(b.name))
console.log(users)