#include "ipc.h"
#include "common.h"
#include "pa1.h"

int main(){
    /*
     * Initial Phase
     * 1. Read X from command line: ./pa -p X
     * 2. Parent process create X child processes.
     *      System call: fork().
     * 3. Implement three functions declared in ipc.h header file:
     *      send_multicast(), send(), receive()
     * */

    /*
     *  Phase 1 for child process
     * 1. Child process writes to the event.log file and terminal using 'log_started_fmt'.
     * 2. Child process sends the STARTED-type message.
     *      System call: pipe(), write().
     *      Pay attention to the format of message. Each message consists of a header and body, seeing struct 'message' in ipc.h file.
     * 3. Child process wait for other child processes' STARTED messages.
     *      System call: read()
     *      If receive STARTED-type message from all other child processes,
     *      write to the event.log file and terminal using 'log_received_all_started_fmt'.
     * */

    /*
     * Phase 2 for child process
     * 1. Child process writes to the event.log file and terminal using 'log_done_fmt'.
     * */

    /*
     * Phase 3 for child process
     * Child Process start to close.
     *  1. Child process sends DONE-type message to other child processes and parent process.
     *         Pay attention to the format of message.
     *  2. Judge whether to close itself:
     *      If the child process receives DONE-type message from all other child processes:
     *          2.1 Child process writes to the event.log file and terminal using 'log_received_all_done_fmt'.
     *          2.2 Child process Terminates itself.
     *
     * */


    /*
     * Finishing phase
     * 1. After all child processes terminate themselves, parent process terminates itself.
     * 2. Pay attention to close Unused pipes in the above.
     * */
    return 0;
}

