ptr = fopen("data.txt", "w");
fprintf(ptr, "%d\t%s\n", n, name);
fscanf(ptr, "%d %s", &n, name);
fgetc(fp); // return single char
fputc(char, fp); //store singlr char in file
fgets(ch,100, fp); //read 100 char from file
fputs("hey there", fp); // store number of char in file

fwrite(ch, 1, sizeof(ch)-1, fp);
//1 is char byte