#ifndef SFX_H
#define SFX_H

extern void SPU_Play();
extern long SPU_AllocChannel();
extern int SPU_UpdateStatus();
extern void SPU_Status(long a0);
extern void S_StopSoundSample();
extern void SPU_Stop();
extern void S_SetReverbType(int reverb);
extern void SPU_StopAll();
extern void S_SoundStopSample(int handle);
extern void S_SoundStopAllSamples();
extern int S_SoundSampleIsPlaying(int handle);
extern void S_SoundSetPitch(int handle, int nPitch);
extern void SPU_FreeChannel(int channel_index);

#endif