const users = [
  { id: 1, name: "Anand", role: "Admin", active: true },
  { id: 2, name: "Riya", role: "Editor", active: false },
  { id: 3, name: "Karan", role: "Viewer", active: true },
  { id: 4, name: "Meera", role: "Editor", active: true }
];

let activeCount = 0;
let inactiveCount = 0;

const tableBody = document.getElementById("tabledata");
users.forEach(user => {
  const tr = document.createElement("tr");
  if (user.active) {
    activeCount++
  } else {
    inactiveCount++
  }
  
  const tdId = document.createElement("td");
  tdId.textContent = user.id

  const tdname = document.createElement("td");
  tdname.textContent = user.name
  const tdrole = document.createElement("td");
  tdrole.textContent = user.role
  const tdactive = document.createElement("td");
  tdactive.textContent = user.active ? "Active" : "Inactive";
  tr.appendChild(tdId)
  tr.appendChild(tdname)
  tr.appendChild(tdrole)
  tr.appendChild(tdactive)

  tableBody.appendChild(tr)


});

const summary = document.getElementById("summary")
let summaryContent = `Total Users: ${users.length} | Active: ${activeCount} | Inactive: ${inactiveCount}`
summary.textContent = summaryContent
