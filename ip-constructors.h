int  get_socket_descriptor_raw_tcp();
int  get_socket_descriptor_raw_udp();
int  get_socket_descriptor_raw_icmp();
/** Add more socket getters **/

int  kernel_not_fill_my_header_syn_flood(int);

void set_sockaddr_in(struct sockaddr_in*,char*,char*);

void set_ip_header(IP_HEADER* ip_hdr,char version,unsigned char ihl,unsigned char tos,
				  unsigned short identification,unsigned char zero_flag,unsigned char do_not_fragments,
				  unsigned char more_fragments,unsigned short int fragment_offset,unsigned char ttl,
				  unsigned char protocol,unsigned short int checksum,char* source_address,
				  char* remote_address,unsigned int optional);
							
void set_tcp_header(TCP_HEADER* tcp_hdr,char* source_port,char* remote_port,unsigned int num_sequence,
					unsigned int ack_number,unsigned char offset,unsigned char reserved,unsigned char flag_fin,
					unsigned char flag_syn,unsigned char flag_rst,unsigned char flag_push,unsigned char flag_ack,
					unsigned char flag_urg,unsigned char flag_echo,unsigned char flag_reduced,unsigned short int window,
					unsigned short int urg_pointer,unsigned int tcp_options,char* buffer);

					
void set_udp_header(UDP_HEADER* udp_hdr,
		    unsigned char* source_port,
		    unsigned char* remote_port,
		    unsigned short datagram_length,
		    unsigned short checksum);
		    
void set_icmp_header(ICMP_HEADER*,unsigned char,unsigned char,unsigned short,unsigned int);
void set_igmp_header(IGMP_HEADER*,unsigned char,unsigned char,unsigned char,unsigned short,unsigned int);
void mod_ip_header_source_ip(IP_HEADER*,char*);
void mod_tcp_header_source_port(TCP_HEADER*,char*);


void set_dns_header();
void set_eth_frame();
void set_dhcp_header();
