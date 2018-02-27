#pragma once
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <SdFat.h>
#include <Arduino.h>
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
extern SdFat SD;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class SDInit
{
  public:
    static bool sdInitFlag;
    static bool sdInitResult;
    static bool InitSD();
};
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class FileUtils
{
  public:

    static int CountFiles(const String& dirName);
  
};
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
/*
struct FileEntry
{
  bool isDirectory;
  String name;
};
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class FileListing;
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class FileEnumerator
{
  public:
  
    FileEnumerator();
    ~FileEnumerator();
    
    bool open(const String& directoryName); // открывает чтение
    void close(); // закрывает чтение
    
    bool prev(); // перемещается на предыдущую позицию
    bool next(); // перемещается на следующую позицию
    bool first(); // перемещается на первую позицию в списке файлов папки

    String getCurrentDirectory()
    {
      return dirName;
    }

    bool info(FileEntry& info); // возвращает информацию о текущей записи




  private:
  
    SdFile root;
    SdFile entry;
    String dirName;
    int currentPosition;

    
};
*/
//------------------------------------------------------------------------------------------------------------------------------------------------------------------------
