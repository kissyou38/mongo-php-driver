<?php
require_once "tests/utils/server.inc";

try {
    $server = new MongoShellServer;
    $server->getStandaloneConfig();
    $server->close();
} catch(Exception $e) {
    die("skip " . $e->getMessage());
}


