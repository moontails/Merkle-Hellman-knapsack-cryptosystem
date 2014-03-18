Merkle-Hellman-knapsack-cryptosystem
====================================
The Merkle–Hellman knapsack cryptosystem was one of the earliest public key cryptosystems invented by Ralph Merkle and Martin Hellman in 1978. Its ideas are elegant, and far simpler than RSA.

Merkle-Hellman is an asymmetric-key cryptosystem, meaning that for communication, two keys are required: a public key and a private key.
It is one-way—the public key is used only for encryption, and the private key is used only for decryption.
It is unusable for authentication by cryptographic signing.

The Merkle-Hellman system is based on the subset sum problem (a special case of the knapsack problem). The problem is as follows: given a set of numbers A and a number b, find a subset ofA, which sums to b. In general, this problem is known to be NP-complete.


The 3 Stages-
Key generation

The keys are knapsacks.
The public key is a 'hard' knapsack
The private key is an 'easy', or superincreasing, knapsack, combined with two additional numbers, a multiplier and a modulus, which were used to convert the superincreasing knapsack into the hard knapsack.
These same numbers are used to transform the sum of the subset of the hard knapsack into the sum of the subset of the easy knapsack, which is solvable in polynomial time.

Encryption

To encrypt a message, a subset of the hard knapsack is chosen by comparing it with a set of bits (the plaintext) equal in length to the key.
Then we make each term in the public key that corresponds to a 1 in the plaintext an element of the subset, while ignoring the terms corresponding to 0 terms in the plaintext.
The elements of this subset are added together and the resulting sum is the cyphertext.

Decryption

Decryption is possible because the multiplier and modulus used to transform the easy, superincreasing knapsack into the public key can also be used to transform the number representing the ciphertext into the sum of the corresponding elements of the superincreasing knapsack.
