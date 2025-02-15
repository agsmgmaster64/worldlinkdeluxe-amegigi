
	.align 2
gTestVoiceTable::
	cry Voice_OakIntro

	.align 2
gGigiVoiceTable::
	cry_uncomp Voice_GigiLaugh
	cry_uncomp Voice_GigiBoatGoesBinted

	.align 2
gTrainerVoiceTable::
	.4byte gTestVoiceTable
	.4byte gGigiVoiceTable

