

#include <QtGlobal>

// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED* qbo_strings[] = {
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "(1 = keep tx meta data e.g. account owner and payment request information, 2 "
                                   "= drop tx meta data)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Allow JSON-RPC connections from specified source. Valid for <ip> are a "
                                   "single IP (e.g. 1.2.3.4), a network/netmask (e.g. 1.2.3.4/255.255.255.0) or "
                                   "a network/CIDR (e.g. 1.2.3.4/24). This option can be specified multiple times"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "An error occurred while setting up the RPC address %s port %u for listening: "
                                   "%s"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Bind to given address and always listen on it. Use [host]:port notation for "
                                   "IPv6"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Bind to given address and whitelist peers connecting to it. Use [host]:port "
                                   "notation for IPv6"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Bind to given address to listen for JSON-RPC connections. Use [host]:port "
                                   "notation for IPv6. This option can be specified multiple times (default: "
                                   "bind to all interfaces)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Cannot obtain a lock on data directory %s. QBO Core is probably already "
                                   "running."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Change automatic finalized budget voting behavior. mode=auto: Vote for only "
                                   "exact finalized budget match to my generated budget. (string, default: auto)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Continuously rate-limit free transactions to <n>*1000 bytes per minute "
                                   "(default:%u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Create new files with system default permissions, instead of umask 077 (only "
                                   "effective with disabled wallet functionality)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Delete all wallet transactions and only recover those parts of the "
                                   "blockchain through -rescan on startup"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Disable all QBO specific functionality (Masternodes, InstantX, "
                                   "Budgeting) (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Distributed under the MIT software license, see the accompanying file "
                                   "COPYING or <http://www.opensource.org/licenses/mit-license.php>."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Enable Instantx, show confirmations for locked transactions (bool, default: "
                                   "%s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Enable use of automated -------- for funds stored in this wallet (0-1, "
                                   "default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Enter regression test mode, which uses a special chain in which blocks can "
                                   "be solved instantly."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Error: Listening for incoming connections failed (listen returned error %s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Error: Unsupported argument -socks found. Setting SOCKS version isn't "
                                   "possible anymore, only SOCKS5 proxies are supported."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Execute command when a relevant alert is received or we see a really long "
                                   "fork (%s in cmd is replaced by message)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Execute command when a wallet transaction changes (%s in cmd is replaced by "
                                   "TxID)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Execute command when the best block changes (%s in cmd is replaced by block "
                                   "hash)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Fees (in QBO/Kb) smaller than this are considered zero fee for relaying "
                                   "(default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Fees (in QBO/Kb) smaller than this are considered zero fee for transaction "
                                   "creation (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Flush database activity from memory pool to disk log every <n> megabytes "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Found unconfirmed -------- outputs, will wait till they confirm to "
                                   "continue."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "How thorough the block verification of -checkblocks is (0-4, default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "If paytxfee is not set, include enough fee so transactions begin "
                                   "confirmation on average within n blocks (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "In this mode -genproclimit controls how many blocks are generated "
                                   "immediately."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Invalid amount for -maxtxfee=<amount>: '%s' (must be at least the minrelay "
                                   "fee of %s to prevent stuck transactions)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Log transaction priority and fee per kB when mining blocks (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Maintain a full transaction index, used by the getrawtransaction rpc call "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Maximum size of data in data carrier transactions we relay and mine "
                                   "(default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Maximum total fees to use in a single wallet transaction, setting too low "
                                   "may abort large transactions (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Name to construct url for KeePass entry that stores the wallet passphrase"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Number of seconds to keep misbehaving peers from reconnecting (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "-------- uses exact -------- amounts to send funds, you might simply "
                                   "need to anonymize some more coins."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Output debugging information (default: %u, supplying <category> is optional)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Provide -------- to -------- by infrequently mixing coins on a continual "
                                   "basis (0-100, default: %u, 1=very frequent, high fees, 100=very infrequent, "
                                   "low fees)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Query for peer addresses via DNS lookup, if low on addresses (default: 1 "
                                   "unless -connect)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Require high priority for relaying free or low-fee transactions (default:%u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Send trace/debug info to console instead of debug.log file (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Set maximum size of high-priority/low-fee transactions in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Set the number of script verification threads (%u to %d, 0 = auto, <0 = "
                                   "leave that many cores free, default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Set the number of threads for coin generation if enabled (-1 = all cores, "
                                   "default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Show N confirmations for a successfully locked transaction (0-9999, default: "
                                   "%u)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "InstantX requires inputs with at least 6 confirmations, you might need to "
                                   "wait a few minutes and try again."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "This is a pre-release test build - use at your own risk - do not use for "
                                   "mining or merchant applications"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "This product includes software developed by the OpenSSL Project for use in "
                                   "the OpenSSL Toolkit <https://www.openssl.org/> and cryptographic software "
                                   "written by Eric Young and UPnP software written by Thomas Bernard."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "To use qbod, or the -server option to qbo-qt, you must set an rpcpassword "
                                   "in the configuration file:\n"
                                   "%s\n"
                                   "It is recommended you use the following random password:\n"
                                   "rpcuser=qborpc\n"
                                   "rpcpassword=%s\n"
                                   "(you do not need to remember this password)\n"
                                   "The username and password MUST NOT be the same.\n"
                                   "If the file does not exist, create it with owner-readable-only file "
                                   "permissions.\n"
                                   "It is also recommended to set alertnotify so you are notified of problems;\n"
                                   "for example: alertnotify=echo %%s | mail -s \"QBO Alert\" admin@foo.com\n"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Unable to bind to %s on this computer. QBO Core is probably already running."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Unable to locate enough -------- -------- funds for this transaction."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Unable to locate enough -------- non--------- funds for this "
                                   "transaction that are not equal 10000 QBO."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Unable to locate enough funds for this transaction that are not equal 10000 "
                                   "QBO."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Use separate SOCKS5 proxy to reach peers via Tor hidden services (default: "
                                   "%s)"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: -maxtxfee is set very high! Fees this large could be paid on a "
                                   "single transaction."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: -paytxfee is set very high! This is the transaction fee you will "
                                   "pay if you send a transaction."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: Please check that your computer's date and time are correct! If "
                                   "your clock is wrong QBO Core will not work properly."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: The network does not appear to fully agree! Some miners appear to "
                                   "be experiencing issues."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: We do not appear to fully agree with our peers! You may need to "
                                   "upgrade, or other nodes may need to upgrade."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: error reading wallet.dat! All keys read correctly, but transaction "
                                   "data or address book entries might be missing or incorrect."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Warning: wallet.dat corrupt, data salvaged! Original wallet.dat saved as "
                                   "wallet.{timestamp}.bak in %s; if your balance or transactions are incorrect "
                                   "you should restore from a backup."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Whitelist peers connecting from the given netmask or IP address. Can be "
                                   "specified multiple times."),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "Whitelisted peers cannot be DoS banned and their transactions are always "
                                   "relayed, even if they are already in the mempool, useful e.g. for a gateway"),
    QT_TRANSLATE_NOOP("qbo-core", ""
                                   "You must specify a masternodeprivkey in the configuration. Please see "
                                   "documentation for help."),
    QT_TRANSLATE_NOOP("qbo-core", "(10001 could be used only on mainnet)"),
    QT_TRANSLATE_NOOP("qbo-core", "(default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "(default: 1)"),
    QT_TRANSLATE_NOOP("qbo-core", "(must be 10001 for mainnet)"),
    QT_TRANSLATE_NOOP("qbo-core", "<category> can be:\n"),
    QT_TRANSLATE_NOOP("qbo-core", "Accept command line and JSON-RPC commands"),
    QT_TRANSLATE_NOOP("qbo-core", "Accept connections from outside (default: 1 if no -proxy or -connect)"),
    QT_TRANSLATE_NOOP("qbo-core", "Accept public REST requests (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Acceptable ciphers (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Add a node to connect to and attempt to keep the connection open"),
    QT_TRANSLATE_NOOP("qbo-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
    QT_TRANSLATE_NOOP("qbo-core", "Already have that input."),
    QT_TRANSLATE_NOOP("qbo-core", "Always query for peer addresses via DNS lookup (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Attempt to recover private keys from a corrupt wallet.dat"),
    QT_TRANSLATE_NOOP("qbo-core", "Block creation options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Can't denominate: no compatible inputs left."),
    QT_TRANSLATE_NOOP("qbo-core", "Can't find random Masternode."),
    QT_TRANSLATE_NOOP("qbo-core", "Can't mix while sync in progress."),
    QT_TRANSLATE_NOOP("qbo-core", "Cannot downgrade wallet"),
    QT_TRANSLATE_NOOP("qbo-core", "Cannot resolve -bind address: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Cannot resolve -externalip address: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Cannot resolve -whitebind address: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Cannot write default address"),
    QT_TRANSLATE_NOOP("qbo-core", "Collateral not valid."),
    QT_TRANSLATE_NOOP("qbo-core", "Connect only to the specified node(s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Connect through SOCKS5 proxy"),
    QT_TRANSLATE_NOOP("qbo-core", "Connect to KeePassHttp on port <port> (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Connect to a node to retrieve peer addresses, and disconnect"),
    QT_TRANSLATE_NOOP("qbo-core", "Connection options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Copyright (C) 2009-%i The Bitcoin Core Developers"),
    QT_TRANSLATE_NOOP("qbo-core", "Copyright (C) 2014-%i The Qabio and DASH Core Developers"),
    QT_TRANSLATE_NOOP("qbo-core", "Copyright (C) 2015-%i The QBO Core Developers"),
    QT_TRANSLATE_NOOP("qbo-core", "Corrupted block database detected"),
    QT_TRANSLATE_NOOP("qbo-core", "Could not parse -rpcbind value %s as network address"),
    QT_TRANSLATE_NOOP("qbo-core", "Could not parse masternode.conf"),
    QT_TRANSLATE_NOOP("qbo-core", "Debugging/Testing options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Disable safemode, override a real safe mode event (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Discover own IP address (default: 1 when listening and no -externalip)"),
    QT_TRANSLATE_NOOP("qbo-core", "Do not load the wallet and disable wallet RPC calls"),
    QT_TRANSLATE_NOOP("qbo-core", "Do you want to rebuild the block database now?"),
    QT_TRANSLATE_NOOP("qbo-core", "Done loading"),
    QT_TRANSLATE_NOOP("qbo-core", "Enable the client to act as a masternode (0-1, default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Entries are full."),
    QT_TRANSLATE_NOOP("qbo-core", "Error connecting to Masternode."),
    QT_TRANSLATE_NOOP("qbo-core", "Error initializing block database"),
    QT_TRANSLATE_NOOP("qbo-core", "Error initializing wallet database environment %s!"),
    QT_TRANSLATE_NOOP("qbo-core", "Error loading block database"),
    QT_TRANSLATE_NOOP("qbo-core", "Error loading wallet.dat"),
    QT_TRANSLATE_NOOP("qbo-core", "Error loading wallet.dat: Wallet corrupted"),
    QT_TRANSLATE_NOOP("qbo-core", "Error loading wallet.dat: Wallet requires newer version of QBO Core"),
    QT_TRANSLATE_NOOP("qbo-core", "Error opening block database"),
    QT_TRANSLATE_NOOP("qbo-core", "Error reading from database, shutting down."),
    QT_TRANSLATE_NOOP("qbo-core", "Error recovering public key."),
    QT_TRANSLATE_NOOP("qbo-core", "Error"),
    QT_TRANSLATE_NOOP("qbo-core", "Error: A fatal internal error occured, see debug.log for details"),
    QT_TRANSLATE_NOOP("qbo-core", "Error: Can't select current -------- inputs"),
    QT_TRANSLATE_NOOP("qbo-core", "Error: Disk space is low!"),
    QT_TRANSLATE_NOOP("qbo-core", "Error: Unsupported argument -tor found, use -onion."),
    QT_TRANSLATE_NOOP("qbo-core", "Error: Wallet locked, unable to create transaction!"),
    QT_TRANSLATE_NOOP("qbo-core", "Error: You already have pending entries in the -------- pool"),
    QT_TRANSLATE_NOOP("qbo-core", "Failed to listen on any port. Use -listen=0 if you want this."),
    QT_TRANSLATE_NOOP("qbo-core", "Failed to read block"),
    QT_TRANSLATE_NOOP("qbo-core", "Fee (in QBO/kB) to add to transactions you send (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Finalizing transaction."),
    QT_TRANSLATE_NOOP("qbo-core", "Force safe mode (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Found enough users, signing ( waiting %s )"),
    QT_TRANSLATE_NOOP("qbo-core", "Found enough users, signing ..."),
    QT_TRANSLATE_NOOP("qbo-core", "Generate coins (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "How many blocks to check at startup (default: %u, 0 = all)"),
    QT_TRANSLATE_NOOP("qbo-core", "If <category> is not supplied, output all debugging information."),
    QT_TRANSLATE_NOOP("qbo-core", "Importing..."),
    QT_TRANSLATE_NOOP("qbo-core", "Imports blocks from external blk000??.dat file"),
    QT_TRANSLATE_NOOP("qbo-core", "Include IP addresses in debug output (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Incompatible mode."),
    QT_TRANSLATE_NOOP("qbo-core", "Incompatible version."),
    QT_TRANSLATE_NOOP("qbo-core", "Incorrect or no genesis block found. Wrong datadir for network?"),
    QT_TRANSLATE_NOOP("qbo-core", "Information"),
    QT_TRANSLATE_NOOP("qbo-core", "Initialization sanity check failed. QBO Core is shutting down."),
    QT_TRANSLATE_NOOP("qbo-core", "Input is not valid."),
    QT_TRANSLATE_NOOP("qbo-core", "Insufficient funds."),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid -onion address: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid -proxy address: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -maxtxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -minrelaytxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -mintxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -paytxfee=<amount>: '%s' (must be at least %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid amount for -reservebalance=<amount>"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid masternodeprivkey. Please see documenation."),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid netmask specified in -whitelist: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid port detected in masternode.conf"),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid private key."),
    QT_TRANSLATE_NOOP("qbo-core", "Invalid script detected."),
    QT_TRANSLATE_NOOP("qbo-core", "KeePassHttp id for the established association"),
    QT_TRANSLATE_NOOP("qbo-core", "KeePassHttp key for AES encrypted communication with KeePass"),
    QT_TRANSLATE_NOOP("qbo-core", "Keep N QBO -------- (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Keep at most <n> unconnectable transactions in memory (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Last -------- was too recent."),
    QT_TRANSLATE_NOOP("qbo-core", "Last successful -------- action was too recent."),
    QT_TRANSLATE_NOOP("qbo-core", "Limit size of signature cache to <n> entries (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Line: %d"),
    QT_TRANSLATE_NOOP("qbo-core", "Listen for JSON-RPC connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Listen for connections on <port> (default: %u or testnet: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Loading addresses..."),
    QT_TRANSLATE_NOOP("qbo-core", "Loading block index..."),
    QT_TRANSLATE_NOOP("qbo-core", "Loading budget cache..."),
    QT_TRANSLATE_NOOP("qbo-core", "Loading masternode cache..."),
    QT_TRANSLATE_NOOP("qbo-core", "Loading masternode payment cache..."),
    QT_TRANSLATE_NOOP("qbo-core", "Loading wallet... (%3.2f %%)"),
    QT_TRANSLATE_NOOP("qbo-core", "Loading wallet..."),
    QT_TRANSLATE_NOOP("qbo-core", "Lock is already in place."),
    QT_TRANSLATE_NOOP("qbo-core", "Lock masternodes from masternode configuration file (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Maintain at most <n> connections to peers (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Masternode options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Masternode queue is full."),
    QT_TRANSLATE_NOOP("qbo-core", "Masternode:"),
    QT_TRANSLATE_NOOP("qbo-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Missing input transaction information."),
    QT_TRANSLATE_NOOP("qbo-core", "Mixing in progress..."),
    QT_TRANSLATE_NOOP("qbo-core", "Need to specify a port with -whitebind: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "No Masternodes detected."),
    QT_TRANSLATE_NOOP("qbo-core", "No compatible Masternode found."),
    QT_TRANSLATE_NOOP("qbo-core", "No funds detected in need of denominating."),
    QT_TRANSLATE_NOOP("qbo-core", "No matching denominations found for mixing."),
    QT_TRANSLATE_NOOP("qbo-core", "Node relay options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Non-standard public key detected."),
    QT_TRANSLATE_NOOP("qbo-core", "Not compatible with existing transactions."),
    QT_TRANSLATE_NOOP("qbo-core", "Not enough file descriptors available."),
    QT_TRANSLATE_NOOP("qbo-core", "Not in the Masternode list."),
    QT_TRANSLATE_NOOP("qbo-core", "Number of automatic wallet backups (default: 10)"),
    QT_TRANSLATE_NOOP("qbo-core", "-------- is idle."),
    QT_TRANSLATE_NOOP("qbo-core", "-------- options:"),
    QT_TRANSLATE_NOOP("qbo-core", "-------- request complete:"),
    QT_TRANSLATE_NOOP("qbo-core", "-------- request incomplete:"),
    QT_TRANSLATE_NOOP("qbo-core", "Only accept block chain matching built-in checkpoints (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Only connect to nodes in network <net> (ipv4, ipv6 or onion)"),
    QT_TRANSLATE_NOOP("qbo-core", "Options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Password for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("qbo-core", "Prepend debug output with timestamp (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "RPC SSL options: (see the Bitcoin Wiki for SSL setup instructions)"),
    QT_TRANSLATE_NOOP("qbo-core", "RPC server options:"),
    QT_TRANSLATE_NOOP("qbo-core", "RPC support for HTTP persistent connections (default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", "Randomly drop 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("qbo-core", "Randomly fuzz 1 of every <n> network messages"),
    QT_TRANSLATE_NOOP("qbo-core", "Rebuild block chain index from current blk000??.dat files"),
    QT_TRANSLATE_NOOP("qbo-core", "Receive and display P2P network alerts (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Relay and mine data carrier transactions (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Relay non-P2SH multisig (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Rescan the block chain for missing wallet transactions"),
    QT_TRANSLATE_NOOP("qbo-core", "Rescanning..."),
    QT_TRANSLATE_NOOP("qbo-core", "Run a thread to flush wallet periodically (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Run in the background as a daemon and accept commands"),
    QT_TRANSLATE_NOOP("qbo-core", "Send transactions as zero-fee transactions if possible (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Server certificate file (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Server private key (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Session not complete!"),
    QT_TRANSLATE_NOOP("qbo-core", "Session timed out."),
    QT_TRANSLATE_NOOP("qbo-core", "Set database cache size in megabytes (%d to %d, default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", "Set external address:port to get to this masternode (example: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Set key pool size to <n> (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Set maximum block size in bytes (default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", "Set minimum block size in bytes (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Set the masternode private key"),
    QT_TRANSLATE_NOOP("qbo-core", "Set the number of threads to service RPC calls (default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", "Sets the DB_PRIVATE flag in the wallet db environment (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Show all debugging options (usage: --help -help-debug)"),
    QT_TRANSLATE_NOOP("qbo-core", "Shrink debug.log file on client startup (default: 1 when no -debug)"),
    QT_TRANSLATE_NOOP("qbo-core", "Signing failed."),
    QT_TRANSLATE_NOOP("qbo-core", "Signing timed out."),
    QT_TRANSLATE_NOOP("qbo-core", "Signing transaction failed"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify connection timeout in milliseconds (minimum: 1, default: %d)"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify data directory"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify masternode configuration file (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify pid file (default: %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify wallet file (within data directory)"),
    QT_TRANSLATE_NOOP("qbo-core", "Specify your own public address"),
    QT_TRANSLATE_NOOP("qbo-core", "Spend unconfirmed change when sending transactions (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Stop running after importing blocks from disk (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Submitted following entries to masternode: %u / %d"),
    QT_TRANSLATE_NOOP("qbo-core", "Submitted to masternode, waiting for more entries ( %u / %d ) %s"),
    QT_TRANSLATE_NOOP("qbo-core", "Submitted to masternode, waiting in queue %s"),
    QT_TRANSLATE_NOOP("qbo-core", "InstantX options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronization failed"),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronization finished"),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronization pending..."),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronizing budgets..."),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronizing masternode winners..."),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronizing masternodes..."),
    QT_TRANSLATE_NOOP("qbo-core", "Synchronizing sporks..."),
    QT_TRANSLATE_NOOP("qbo-core", "This help message"),
    QT_TRANSLATE_NOOP("qbo-core", "This is experimental software."),
    QT_TRANSLATE_NOOP("qbo-core", "This is intended for regression testing tools and app development."),
    QT_TRANSLATE_NOOP("qbo-core", "This is not a Masternode."),
    QT_TRANSLATE_NOOP("qbo-core", "Threshold for disconnecting misbehaving peers (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction amount too small"),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction amounts must be positive"),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction created successfully."),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction fees are too high."),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction not valid."),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction too large for fee policy"),
    QT_TRANSLATE_NOOP("qbo-core", "Transaction too large"),
    QT_TRANSLATE_NOOP("qbo-core", "Transmitting final transaction."),
    QT_TRANSLATE_NOOP("qbo-core", "Unable to bind to %s on this computer (bind returned error %s)"),
    QT_TRANSLATE_NOOP("qbo-core", "Unable to sign spork message, wrong key?"),
    QT_TRANSLATE_NOOP("qbo-core", "Unknown network specified in -onlynet: '%s'"),
    QT_TRANSLATE_NOOP("qbo-core", "Unknown state: id = %u"),
    QT_TRANSLATE_NOOP("qbo-core", "Upgrade wallet to latest format"),
    QT_TRANSLATE_NOOP("qbo-core", "Use KeePass 2 integration using KeePassHttp plugin (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Use N separate masternodes to anonymize funds  (2-8, default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Use OpenSSL (https) for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("qbo-core", "Use UPnP to map the listening port (default: %u)"),
    QT_TRANSLATE_NOOP("qbo-core", "Use UPnP to map the listening port (default: 1 when listening)"),
    QT_TRANSLATE_NOOP("qbo-core", "Use the test network"),
    QT_TRANSLATE_NOOP("qbo-core", "Username for JSON-RPC connections"),
    QT_TRANSLATE_NOOP("qbo-core", "Value more than -------- pool maximum allows."),
    QT_TRANSLATE_NOOP("qbo-core", "Verifying blocks..."),
    QT_TRANSLATE_NOOP("qbo-core", "Verifying wallet..."),
    QT_TRANSLATE_NOOP("qbo-core", "Wallet %s resides outside data directory %s"),
    QT_TRANSLATE_NOOP("qbo-core", "Wallet is locked."),
    QT_TRANSLATE_NOOP("qbo-core", "Wallet needed to be rewritten: restart QBO Core to complete"),
    QT_TRANSLATE_NOOP("qbo-core", "Wallet options:"),
    QT_TRANSLATE_NOOP("qbo-core", "Wallet window title"),
    QT_TRANSLATE_NOOP("qbo-core", "Warning"),
    QT_TRANSLATE_NOOP("qbo-core", "Warning: This version is obsolete, upgrade required!"),
    QT_TRANSLATE_NOOP("qbo-core", "Warning: Unsupported argument -benchmark ignored, use -debug=bench."),
    QT_TRANSLATE_NOOP("qbo-core", "Warning: Unsupported argument -debugnet ignored, use -debug=net."),
    QT_TRANSLATE_NOOP("qbo-core", "Will retry..."),
    QT_TRANSLATE_NOOP("qbo-core", "You need to rebuild the database using -reindex to change -txindex"),
    QT_TRANSLATE_NOOP("qbo-core", "Your entries added successfully."),
    QT_TRANSLATE_NOOP("qbo-core", "Your transaction was accepted into the pool!"),
    QT_TRANSLATE_NOOP("qbo-core", "Zapping all transactions from wallet..."),
    QT_TRANSLATE_NOOP("qbo-core", "on startup"),
    QT_TRANSLATE_NOOP("qbo-core", "wallet.dat corrupt, salvage failed"),
};
