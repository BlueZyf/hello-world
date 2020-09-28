import tensorflow as tf

tf.flags.DEFINE_integer('num_seqs',100,'number of seqs in one batch')
tf.flags.DEFINE_string('name','default','name of train')
tf.flags.DEFINE_string('seat','10F','seat string')

FLAGS = tf.flags.FLAGS
FLAGS._parse_flags()
print(FLAGS.__flags)

print(FLAGS.num_seqs)

print("\nParmeters:")
for attr,value in sorted(FLAGS.__flags.items()):
	print("{}={}".format(attr.upper(),value))
print("")
