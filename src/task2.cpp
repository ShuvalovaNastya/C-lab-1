const char* greet(int hour, int min)
{
	if ((hour >= 0 && hour < 6) && (min <= 0 && min < 60))
		return "Good night!";
	else if ((hour >= 6 && hour < 12) && (min <= 0 && min < 60))
		return "Good morning!";
	else if ((hour >= 12 && hour < 18) && (min <= 0 && min < 60))
		return "Good day!";
	else if ((hour >= 18 && hour <= 23) && (min <= 0 && min < 60))
		return "Good evening!";
	else
		return "Uncorrect time!";
}