#timenow = Time.new
temps_activite = 15005117.05
temps_inactivite = 6945200.26
#puts Time.at(heure)
time = Time.new
h1 = Time.at(temps_activite)
h2 = Time.at(temps_inactivite)
puts "le temps d'activité du serveur #{time.strftime("%H:%M:%S")} up #{h1}"
puts "le temps d'inactivité du serveur #{time.strftime("%H:%M:%S")} idle #{h2}"