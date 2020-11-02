from project_pb2 import Account

send_msg = Account()
send_msg.name = 'are you OK' 
send_msg.ID = 1
send_msg.password = 'zyf'

send_bytes = send_msg.SerializeToString()
recv_msg = Account()
recv_msg.ParseFromString(send_bytes)
print(recv_msg)