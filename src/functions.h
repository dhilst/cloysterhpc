#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <string>
#include <optional>
#include <vector>
#include <list>
#include <filesystem>

namespace cloyster {

// Globals
extern bool dryRun;

/* getopt */
int parseArguments(int, char**);

/* shell execution */
int runCommand(const std::string& command,
               //std::optional<std::list<std::string>>& output,
               std::list<std::string>& output,
               bool overrideDryRun = false);
int runCommand(const std::string& command,
               bool overrideDryRun = false);

/* environment variables helper functions */
std::string getEnvironmentVariable(const std::string&);

/* conf manipulation functions */
std::string readConfig(const std::string&);
void writeConfig(const std::string&);

/* helper function */
void createDirectory(const std::filesystem::path& path);
void removeFile(std::string_view filename);
void backupFile(const std::string_view& filename);
void changeValueInConfigurationFile(const std::string&, const std::string&,
                                    std::string_view);
void addStringToFile(std::string_view filename, std::string_view string);

} /* namespace cloyster */

#endif /* FUNCTIONS_H */
