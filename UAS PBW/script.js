const form = document.querySelector("form");
const inputUser = document.getElementById("inputUser");
const tanggal = document.getElementById("tanggal");
const listGroup = document.querySelector(".list");
form.addEventListener("submit", function (event) {
  listGroup.innerHTML += `
              <table>
                <thead>
                  <tr>
                    <th scope="col">Tugasku</th>
                    <th scope="col">Deadline</th>
                    <th scope="col">Aksi</th>
                  </tr>
                </thead>
                <tbody class="list">
                  <tr>
                    <td>${inputUser.value}</td>
                    <td>${tanggal.value}</td>
                    <td>
                      <button type="button" class="btn btn-danger" id="delete-btn">Hapus</button>
                    </td>
                  </tr>
                </tbody>
              </table>`;
  inputUser.value = "";
  event.preventDefault();
});
listGroup.addEventListener("click", function (event) {
  if (event.target.id == "delete-btn") {
    event.target.parentElement.parentElement.parentElement.parentElement.remove();
  }
});
