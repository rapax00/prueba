#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<std::vector<std::string>> tagss;
  tagss.push_back({"action", "charge"});
  tagss.push_back({"p", "ENV_SERVER_PUB_HEX"});

  for (int i = 0; i < tagss.size(); i++) {
    for (int j = 0; j < tagss[i].size(); j++) {
      std::cout << tagss[i][j] << " ";
    }
    std::cout << std::endl; // Para imprimir una nueva línea después de cada vector
  }

  return 0;
}
