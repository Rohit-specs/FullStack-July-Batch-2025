
async function fetch_data() {
    try {
        response = await fetch('https://jsonplaceholder.typicode.com/users');
        data = await response.json()
        insertData(data)
    } catch (error) {
        console.log(error)
    }
}

function insertData(users) {
    let tBody = document.getElementById("table-body")
    
    users.forEach(user => {
        let tr = document.createElement("tr")
        address=[]
        for (const key in user["address"]) {
            if (key == "geo"){
               continue 
            }
            address.push(user["address"][key]);
        }
        address.join(", ");
        tr.innerHTML=`
            <td>${user["id"]}</td>
            <td>${user["name"]}</td>
            <td>${user["username"]}</td>
            <td>${user["email"]}</td>
            <td>${address}</td>`
        

        tBody.appendChild(tr)
    });
}

fetch_data()