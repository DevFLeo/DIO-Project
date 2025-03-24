class Server:
    def __init__(self, id, status='offline'):
        self.id = id
        self.status = status

    def start(self):
        self.status = 'online'
        print(f"Server {self.id} started.")

    def stop(self):
        self.status = 'offline'
        print(f"Server {self.id} stopped.")

class DataCenter:
    def __init__(self):
        self.servers = []

    def add_server(self, server):
        self.servers.append(server)
        print(f"Server {server.id} added to data center.")

    def start_all_servers(self):
        for server in self.servers:
            server.start()

    def stop_all_servers(self):
        for server in self.servers:
            server.stop()

# Example usage
if __name__ == "__main__":
    dc = DataCenter()
    server1 = Server(id=1)
    server2 = Server(id=2)

    dc.add_server(server1)
    dc.add_server(server2)

    dc.start_all_servers()
    dc.stop_all_servers()